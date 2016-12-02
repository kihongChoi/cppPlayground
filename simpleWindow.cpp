#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
 QApplication app(argc, argv);
 QPushButto *hello = new QPushButton("This is a simple button");
 hello.resize(100, 30);
 hello.show();
 return app.exec();
}
