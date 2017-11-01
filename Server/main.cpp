#include <QCoreApplication>
#include <bcm2835.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
