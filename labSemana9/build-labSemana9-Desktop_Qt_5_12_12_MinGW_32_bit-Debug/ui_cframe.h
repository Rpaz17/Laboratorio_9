/********************************************************************************
** Form generated from reading UI file 'cframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFRAME_H
#define UI_CFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cFrame
{
public:
    QWidget *centralwidget;
    QLabel *TITLE;
    QLabel *lbl_nombre;
    QLabel *lbl_radio;
    QLabel *lbl_altura;
    QLineEdit *lE_nombre;
    QLineEdit *lE_radio;
    QLineEdit *lE_altura;
    QPushButton *btn_generar;
    QPushButton *btn_ingresar;
    QPushButton *btn_guardar;
    QPushButton *btn_cargarAL;
    QPushButton *btn_insertarBD;
    QPushButton *btn_cargarBDL;
    QPushButton *btn_salir;
    QTextEdit *tE_listaPredef;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cFrame)
    {
        if (cFrame->objectName().isEmpty())
            cFrame->setObjectName(QString::fromUtf8("cFrame"));
        cFrame->resize(949, 690);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(208, 105, 105, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 186, 186, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(231, 145, 145, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(104, 53, 53, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(139, 70, 70, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(231, 180, 180, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        cFrame->setPalette(palette);
        centralwidget = new QWidget(cFrame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TITLE = new QLabel(centralwidget);
        TITLE->setObjectName(QString::fromUtf8("TITLE"));
        TITLE->setGeometry(QRect(40, 20, 521, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Sans Unicode"));
        font.setPointSize(12);
        TITLE->setFont(font);
        lbl_nombre = new QLabel(centralwidget);
        lbl_nombre->setObjectName(QString::fromUtf8("lbl_nombre"));
        lbl_nombre->setGeometry(QRect(101, 150, 91, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font1.setPointSize(9);
        lbl_nombre->setFont(font1);
        lbl_radio = new QLabel(centralwidget);
        lbl_radio->setObjectName(QString::fromUtf8("lbl_radio"));
        lbl_radio->setGeometry(QRect(101, 200, 91, 21));
        lbl_radio->setFont(font1);
        lbl_altura = new QLabel(centralwidget);
        lbl_altura->setObjectName(QString::fromUtf8("lbl_altura"));
        lbl_altura->setGeometry(QRect(101, 250, 91, 21));
        lbl_altura->setFont(font1);
        lE_nombre = new QLineEdit(centralwidget);
        lE_nombre->setObjectName(QString::fromUtf8("lE_nombre"));
        lE_nombre->setGeometry(QRect(201, 150, 151, 24));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        QBrush brush10(QColor(255, 197, 197, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lE_nombre->setPalette(palette1);
        lE_nombre->setAutoFillBackground(true);
        lE_radio = new QLineEdit(centralwidget);
        lE_radio->setObjectName(QString::fromUtf8("lE_radio"));
        lE_radio->setGeometry(QRect(201, 200, 151, 24));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lE_radio->setPalette(palette2);
        lE_radio->setAutoFillBackground(true);
        lE_altura = new QLineEdit(centralwidget);
        lE_altura->setObjectName(QString::fromUtf8("lE_altura"));
        lE_altura->setGeometry(QRect(201, 250, 151, 24));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        lE_altura->setPalette(palette3);
        lE_altura->setAutoFillBackground(true);
        btn_generar = new QPushButton(centralwidget);
        btn_generar->setObjectName(QString::fromUtf8("btn_generar"));
        btn_generar->setGeometry(QRect(60, 300, 371, 25));
        btn_ingresar = new QPushButton(centralwidget);
        btn_ingresar->setObjectName(QString::fromUtf8("btn_ingresar"));
        btn_ingresar->setGeometry(QRect(60, 340, 371, 25));
        btn_guardar = new QPushButton(centralwidget);
        btn_guardar->setObjectName(QString::fromUtf8("btn_guardar"));
        btn_guardar->setGeometry(QRect(60, 380, 371, 25));
        btn_cargarAL = new QPushButton(centralwidget);
        btn_cargarAL->setObjectName(QString::fromUtf8("btn_cargarAL"));
        btn_cargarAL->setGeometry(QRect(60, 420, 371, 25));
        btn_insertarBD = new QPushButton(centralwidget);
        btn_insertarBD->setObjectName(QString::fromUtf8("btn_insertarBD"));
        btn_insertarBD->setGeometry(QRect(60, 460, 371, 25));
        btn_cargarBDL = new QPushButton(centralwidget);
        btn_cargarBDL->setObjectName(QString::fromUtf8("btn_cargarBDL"));
        btn_cargarBDL->setGeometry(QRect(60, 500, 371, 25));
        btn_salir = new QPushButton(centralwidget);
        btn_salir->setObjectName(QString::fromUtf8("btn_salir"));
        btn_salir->setGeometry(QRect(60, 540, 371, 25));
        tE_listaPredef = new QTextEdit(centralwidget);
        tE_listaPredef->setObjectName(QString::fromUtf8("tE_listaPredef"));
        tE_listaPredef->setGeometry(QRect(510, 70, 411, 541));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(100, 90, 81, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font2.setPointSize(10);
        radioButton->setFont(font2);
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(260, 90, 91, 31));
        radioButton_2->setFont(font2);
        cFrame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cFrame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 949, 25));
        cFrame->setMenuBar(menubar);
        statusbar = new QStatusBar(cFrame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        cFrame->setStatusBar(statusbar);

        retranslateUi(cFrame);

        QMetaObject::connectSlotsByName(cFrame);
    } // setupUi

    void retranslateUi(QMainWindow *cFrame)
    {
        cFrame->setWindowTitle(QApplication::translate("cFrame", "cFrame", nullptr));
        TITLE->setText(QApplication::translate("cFrame", "INGRESA TU FIGURA GEOMETRICA DE CIRCULO AQUI", nullptr));
        lbl_nombre->setText(QApplication::translate("cFrame", "NOMBRE: ", nullptr));
        lbl_radio->setText(QApplication::translate("cFrame", "RADIO: ", nullptr));
        lbl_altura->setText(QApplication::translate("cFrame", "ALTURA: ", nullptr));
        btn_generar->setText(QApplication::translate("cFrame", "Generar Lista Polim\303\263rfica Predefinido", nullptr));
        btn_ingresar->setText(QApplication::translate("cFrame", "Ingresar Datos en Lista Polim\303\263rfica", nullptr));
        btn_guardar->setText(QApplication::translate("cFrame", "Guardar en Archivos", nullptr));
        btn_cargarAL->setText(QApplication::translate("cFrame", "Cargar datos desde Archivos a la Lista", nullptr));
        btn_insertarBD->setText(QApplication::translate("cFrame", "Insertar en Base de Datos", nullptr));
        btn_cargarBDL->setText(QApplication::translate("cFrame", "Cargar desde Base de Datos a la Lista", nullptr));
        btn_salir->setText(QApplication::translate("cFrame", "Salir", nullptr));
        radioButton->setText(QApplication::translate("cFrame", "CONO", nullptr));
        radioButton_2->setText(QApplication::translate("cFrame", "ESFERA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cFrame: public Ui_cFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFRAME_H
