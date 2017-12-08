#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QComboBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private: // functions
    void checkAvailablePorts(void);

private:
    Ui::MainWindow *ui;

    QComboBox *m_cboxPortList;
};

#endif // MAINWINDOW_H
