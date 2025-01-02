/********************************************************************************
** Form generated from reading UI file 'text.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_H
#define UI_TEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_text
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textRes;

    void setupUi(QWidget *text)
    {
        if (text->objectName().isEmpty())
            text->setObjectName("text");
        text->resize(491, 364);
        horizontalLayout = new QHBoxLayout(text);
        horizontalLayout->setObjectName("horizontalLayout");
        textRes = new QTextBrowser(text);
        textRes->setObjectName("textRes");

        horizontalLayout->addWidget(textRes);


        retranslateUi(text);

        QMetaObject::connectSlotsByName(text);
    } // setupUi

    void retranslateUi(QWidget *text)
    {
        text->setWindowTitle(QCoreApplication::translate("text", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class text: public Ui_text {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_H
