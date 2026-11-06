#include "mainwindow.h"
#include <iostream>
#include <QLabel>
#include <QWidget>
#include <QLineEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QIcon>
#include <QPushButton>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(640, 480);
    setWindowTitle("Форма регистрации sunflower");
    setWindowIcon(QIcon(":/img/00.png"));

    QWidget* widget_center = new QWidget(this);
    setCentralWidget(widget_center);
    QLabel* label_title = new QLabel("Форма регистрации", widget_center);
    QFont font_title = label_title->font();
    font_title.setBold(true);
    font_title.setPointSize(16);
    label_title->setFont(font_title);
    label_title->setAlignment(Qt::AlignCenter);

    QLabel* label_surname = new QLabel("Фамилия:", widget_center);
    QLineEdit* line_surname = new QLineEdit(widget_center);
    line_surname->setPlaceholderText("Введите свою фамилию");
    QLabel* label_name = new QLabel("Имя:", widget_center);
    QLineEdit* line_name = new QLineEdit(widget_center);
    line_name->setPlaceholderText("Введите свое имя");
    QLabel* label_patronymic = new QLabel("Отчество:", widget_center);
    QLineEdit* line_patronymic = new QLineEdit(widget_center);
    line_patronymic->setPlaceholderText("Введите свое отчество (если есть)");

    QLabel* label_birth_date = new QLabel("Дата рождения:", widget_center);
    QSpinBox* spin_day = new QSpinBox(widget_center);
    spin_day->setRange(1, 31);
    spin_day->setFixedWidth(145);
    QSpinBox* spin_month = new QSpinBox(widget_center);
    spin_month->setRange(1, 12);
    spin_month->setFixedWidth(145);
    QSpinBox* spin_year = new QSpinBox(widget_center);
    spin_year->setRange(1900, 2026);
    spin_year->setFixedWidth(145);
    QHBoxLayout* layout_birth_date = new QHBoxLayout;
    layout_birth_date->addWidget(spin_day);
    layout_birth_date->addWidget(spin_month);
    layout_birth_date->addWidget(spin_year);
    layout_birth_date->addStretch();

    QLabel* label_height = new QLabel("Рост в метрах:", widget_center);
    QDoubleSpinBox* spin_height = new QDoubleSpinBox(widget_center);
    spin_height->setDecimals(2);
    spin_height->setRange(0.0, 2.5);
    spin_height->setSingleStep(0.01);

    QGridLayout* layout_form = new QGridLayout;
    layout_form->setHorizontalSpacing(12);
    layout_form->setVerticalSpacing(12);
    layout_form->setColumnStretch(1, 1);
    layout_form->addWidget(label_surname, 0, 0);
    layout_form->addWidget(line_surname, 0, 1);
    layout_form->addWidget(label_name, 1, 0);
    layout_form->addWidget(line_name, 1, 1);
    layout_form->addWidget(label_patronymic, 2, 0);
    layout_form->addWidget(line_patronymic, 2, 1);
    layout_form->addWidget(label_birth_date, 3, 0);
    layout_form->addLayout(layout_birth_date, 3, 1);
    layout_form->addWidget(label_height, 4, 0);
    layout_form->addWidget(spin_height, 4, 1);

    QPushButton* button_done = new QPushButton("Готово", widget_center);

    QVBoxLayout* layout_main = new QVBoxLayout(widget_center);
    layout_main->setContentsMargins(40, 30, 40, 30);
    layout_main->addWidget(label_title);
    layout_main->addSpacing(20);
    layout_main->addLayout(layout_form);
    layout_main->addStretch();
    layout_main->addWidget(button_done, 0, Qt::AlignCenter);
}

MainWindow::~MainWindow() = default;
