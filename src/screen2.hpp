
#ifndef SCREEN2_HPP_
#define SCREEN2_HPP_

#include <QObject>

#include <bb/cascades/Application>
#include <bb/cascades/QmlDocument>
#include <bb/cascades/AbstractPane>
#include <iostream>

using namespace std;
using namespace bb::cascades;

class Screen2 : public QObject {

    Q_OBJECT
public:
    Screen2();
    virtual ~Screen2(){}

public slots:
    void launchScreen3();
};

#endif /* SCREEN2_HPP_ */
