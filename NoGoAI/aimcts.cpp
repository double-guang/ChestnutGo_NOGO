#include "aimcts.h"
#include <string>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include<QJsonValue>
#include<QJsonParseError>
#include <QDebug>
#include <QString>
#include <iostream>
#undef slots
#include <Python.h>
#define slots Q_SLOTS
using namespace std;

AIMCTS::AIMCTS(QObject *parent) : QObject(parent)
{
    /*memset(board,0, sizeof(board));
    node_count = 0;
    memset(dfs_air_visit, 0, sizeof(dfs_air_visit));*/
}



Action AIMCTS::aiAction(Color color, int board[][9])
{
    string Jsoninput="{\"Col\":";
    if(color==BLACK)Jsoninput+="1,\"requests\":[{\"x\":-1,\"y\":-1},";
    else Jsoninput+="-1,\"requests\":[";
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]==-color)
            {
                Jsoninput+="{\"x\":"+to_string(i)+",\"y\":"+to_string(j)+"},";
            }
        }
    }
    Jsoninput.pop_back();
    Jsoninput+="],\"responses\":[";
    bool flag=false;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(board[i][j]==color)
            {
                flag=true;
                Jsoninput+="{\"x\":"+to_string(i)+",\"y\":"+to_string(j)+"},";
            }
        }
    }
    if(flag)Jsoninput.pop_back();
    Jsoninput+="]}";

    std::cout<<Jsoninput<<std::endl;


    Action a;
    //调用Agent

    // 检查Python解释器初始化是否成功
    if (!Py_IsInitialized()) {
        std::cerr << "Failed to initialize Python interpreter" << std::endl;
    }
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('./')");
    //PyRun_SimpleString("print('Updated sys.path:', sys.path)");


    PyObject* pModule=PyImport_ImportModule("Agent");


    if (!pModule) {
        PyErr_Print(); // 打印错误信息
        std::cerr << "Failed to load module 'Agent'" << std::endl;
        Py_Finalize(); // 关闭Python解释器
    }

    //std::cout<<"test pFunc1"<<std::endl;
    PyObject*pFunc=PyObject_GetAttrString(pModule,"main");
    //std::cout<<"test pFunc2"<<std::endl;
    if (!pFunc || !PyCallable_Check(pFunc)) {
        if (PyErr_Occurred()) {
            PyErr_Print(); // 打印错误信息
        }
        std::cerr << "Cannot find function 'main'" << std::endl;
        //Py_XDECREF(pFunc);
        //Py_DECREF(pModule);
        Py_Finalize(); // 关闭Python解释器
    }
    //std::cout << "Function 'main' found" << std::endl;
    //std::cout << "pFunc type: " << Py_TYPE(pFunc)->tp_name << std::endl;



    PyObject*pArg=PyTuple_New(1);

    PyObject*  arg1 = PyUnicode_FromString(Jsoninput.c_str());
    PyTuple_SetItem(pArg,0,arg1);


    PyObject* fshowc = PyObject_CallObject(pFunc,pArg);

    if (!fshowc) {
        PyErr_Print(); // 打印错误信息
        std::cerr << "Failed to call pFunc" << std::endl;
        Py_Finalize(); // 关闭Python解释器
    }

    PyObject* item0 = PyTuple_GetItem(fshowc, 0);
    std::cout<<"test1"<<std::endl;

    a.x=PyLong_AsLong(item0);
    PyObject* item1 = PyTuple_GetItem(fshowc, 1);
    a.y=PyLong_AsLong(item1);


    return a;
}
