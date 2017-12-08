#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSerialPort/QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_cboxPortList = ui->cboxPortList;

    checkAvailablePorts();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::checkAvailablePorts()
{
    m_cboxPortList->addItem(" ");

    Q_FOREACH(QSerialPortInfo port, QSerialPortInfo::availablePorts())
    {
        m_cboxPortList->addItem(port.portName());
    }
}
