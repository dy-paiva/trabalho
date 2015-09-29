/********************************************************************************
** Form generated from reading UI file 'cadastro.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADASTRO_H
#define UI_CADASTRO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Cadastro
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *dadosTipo;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QSpinBox *spinBox;
    QFrame *frame_2;
    QLabel *label_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;

    void setupUi(QDialog *Cadastro)
    {
        if (Cadastro->objectName().isEmpty())
            Cadastro->setObjectName(QString::fromUtf8("Cadastro"));
        Cadastro->resize(410, 220);
        buttonBox = new QDialogButtonBox(Cadastro);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 170, 181, 51));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        dadosTipo = new QLabel(Cadastro);
        dadosTipo->setObjectName(QString::fromUtf8("dadosTipo"));
        dadosTipo->setGeometry(QRect(290, 10, 101, 21));
        frame = new QFrame(Cadastro);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(210, 10, 191, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 30, 111, 21));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 90, 171, 21));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 60, 111, 21));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 0, 71, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 60, 51, 21));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 51, 21));
        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(70, 110, 51, 21));
        spinBox->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_6->raise();
        label_3->raise();
        dadosTipo->raise();
        label_5->raise();
        label_4->raise();
        lineEdit->raise();
        label_6->raise();
        lineEdit_2->raise();
        label_3->raise();
        label_5->raise();
        label_4->raise();
        spinBox->raise();
        frame_2 = new QFrame(Cadastro);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 191, 131));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 181, 21));
        radioButton_3 = new QRadioButton(frame_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(10, 100, 121, 26));
        radioButton_2 = new QRadioButton(frame_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(10, 70, 101, 26));
        radioButton = new QRadioButton(frame_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setEnabled(true);
        radioButton->setGeometry(QRect(10, 40, 91, 26));
        radioButton->setAcceptDrops(false);
        radioButton->setChecked(true);

        retranslateUi(Cadastro);
        QObject::connect(buttonBox, SIGNAL(accepted()), Cadastro, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Cadastro, SLOT(reject()));

        QMetaObject::connectSlotsByName(Cadastro);
    } // setupUi

    void retranslateUi(QDialog *Cadastro)
    {
        Cadastro->setWindowTitle(QApplication::translate("Cadastro", "Dialog", 0, QApplication::UnicodeUTF8));
        dadosTipo->setText(QString());
        label_6->setText(QApplication::translate("Cadastro", "Quantidade Gerenciados:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Cadastro", "Dados do ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Cadastro", "Salario: ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Cadastro", "Nome: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Cadastro", "Escolha o tipo de cadastro", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("Cadastro", "Programador", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Cadastro", "Estagiario", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Cadastro", "Gerente", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Cadastro: public Ui_Cadastro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADASTRO_H
