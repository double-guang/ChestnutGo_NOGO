#ifndef AIMCTS_H
#define AIMCTS_H

#include <QObject>
#include <vector>
#include <utils.h>
using namespace std;


class AIMCTS : public QObject
{
    Q_OBJECT
private:
public:
    explicit AIMCTS(QObject *parent = nullptr);
    Action aiAction(Color color, int board[][9]);
signals:

};


#endif // AIMCTS_H
