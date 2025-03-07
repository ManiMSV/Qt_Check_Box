#include <QCoreApplication>
#include<QTextStream>
#include<QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream inputStream(stdin);
    QTextStream outputStream(stdout);


    outputStream << "Enter your name:";
    outputStream.flush();
    QString username = inputStream.readLine();

    outputStream << "hello!" << username;


    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.

    return a.exec();
}
