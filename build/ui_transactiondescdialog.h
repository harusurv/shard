/********************************************************************************
** Form generated from reading UI file 'transactiondescdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONDESCDIALOG_H
#define UI_TRANSACTIONDESCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TransactionDescDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *detailText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TransactionDescDialog)
    {
        if (TransactionDescDialog->objectName().isEmpty())
            TransactionDescDialog->setObjectName(QStringLiteral("TransactionDescDialog"));
        TransactionDescDialog->resize(620, 250);
        TransactionDescDialog->setStyleSheet(QStringLiteral("background:'#0b1d2c';"));
        verticalLayout = new QVBoxLayout(TransactionDescDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        detailText = new QTextEdit(TransactionDescDialog);
        detailText->setObjectName(QStringLiteral("detailText"));
        detailText->setStyleSheet(QLatin1String("	border:2px solid #1d2e3f;\n"
"color:white;\n"
"padding 5px;\n"
""));
        detailText->setReadOnly(true);

        verticalLayout->addWidget(detailText);

        buttonBox = new QDialogButtonBox(TransactionDescDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStyleSheet(QLatin1String("QPushButton { \n"
" background-color: \"#0d2131\";\n"
"	border:2px solid #1d2e3f;\n"
"color:#eeeeee;\n"
"padding:5px 20px;\n"
"	outline: none;\n"
"border-radius:2px;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"   background-color: \"#1d2e3f\";\n"
"border:2px solid gray;\n"
"	color:white;\n"
"\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: \"#102537\";\n"
"	border:2px solid #0f3e54;\n"
" }\n"
"QPushButton:checked { \n"
"     background-color: \"#0d2131\";\n"
"border:2px solid #0f3e54;\n"
"	color:white;\n"
"\n"
" }\n"
"QPushButton:disabled { \n"
"    background:'#0b1d2c';\n"
"color:gray;\n"
"border:2px solid #102537;\n"
" }\n"
""));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TransactionDescDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TransactionDescDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TransactionDescDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TransactionDescDialog);
    } // setupUi

    void retranslateUi(QDialog *TransactionDescDialog)
    {
        TransactionDescDialog->setWindowTitle(QApplication::translate("TransactionDescDialog", "Transaction details", 0));
#ifndef QT_NO_TOOLTIP
        detailText->setToolTip(QApplication::translate("TransactionDescDialog", "This pane shows a detailed description of the transaction", 0));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class TransactionDescDialog: public Ui_TransactionDescDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONDESCDIALOG_H
