
#include "screen2.hpp"


Screen2::Screen2() : QObject() {
    // Create scene document from main.qml asset, the parent is set
    // to ensure the document gets destroyed properly at shut down.
    QmlDocument *qml = QmlDocument::create("asset:///screen2.qml").parent(this);

    // Create root object for the UI
    AbstractPane *root = qml->createRootObject<AbstractPane>();

    // Set created root object as the application scene
    Application::instance()->setScene(root);

    qml->setContextProperty("_app", this);
}

void Screen2::launchScreen3(){
  cout<<"lauchScreen3()... this will NOT print control will NOT come here"<<endl;
}
