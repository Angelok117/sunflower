#include "mainwindow.h"
#include <iostream>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(800,600);
    std::cout<<"WIndow size: " << size().width() <<"x" << size().height() << std::endl;
    setWindowTitle("vibes and sunflower");
    setWindowIcon(QIcon(":/img/00.png"));
    QLabel* label1 = new QLabel("Привет, sun!", this);
    label1->setGeometry (100, 100, 600, 15);
    label1->setAlignment(Qt::AlignCenter);
    QLabel* label2 = new QLabel("Привет, sun!", this);
    label1->setGeometry (100, 100, 600, 15);
    label1->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow() = default;