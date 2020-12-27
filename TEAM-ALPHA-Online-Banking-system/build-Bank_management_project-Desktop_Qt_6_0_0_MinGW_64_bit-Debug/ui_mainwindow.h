/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *welcome_singin_page;
    QPushButton *singin_button_welcome_page;
    QPushButton *privacy_policy_button_welcome_page;
    QPushButton *contactus_button_welcome_page;
    QPushButton *exit_button_welcome_page;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *privacy_policy_page;
    QLabel *label;
    QTextBrowser *privacy_policy_textBrowser;
    QPushButton *privacy_policy_page_back_button;
    QWidget *contact_us_page;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 630);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1000, 630));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);\n"
"background-color: rgb(0, 98, 143);"));
        welcome_singin_page = new QWidget();
        welcome_singin_page->setObjectName(QString::fromUtf8("welcome_singin_page"));
        welcome_singin_page->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 54, 79);"));
        singin_button_welcome_page = new QPushButton(welcome_singin_page);
        singin_button_welcome_page->setObjectName(QString::fromUtf8("singin_button_welcome_page"));
        singin_button_welcome_page->setGeometry(QRect(100, 530, 151, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        singin_button_welcome_page->setFont(font);
        singin_button_welcome_page->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ADD8E6, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: green\n"
"}\n"
""));
        privacy_policy_button_welcome_page = new QPushButton(welcome_singin_page);
        privacy_policy_button_welcome_page->setObjectName(QString::fromUtf8("privacy_policy_button_welcome_page"));
        privacy_policy_button_welcome_page->setGeometry(QRect(300, 530, 231, 41));
        privacy_policy_button_welcome_page->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ADD8E6, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: green\n"
"}\n"
""));
        contactus_button_welcome_page = new QPushButton(welcome_singin_page);
        contactus_button_welcome_page->setObjectName(QString::fromUtf8("contactus_button_welcome_page"));
        contactus_button_welcome_page->setGeometry(QRect(590, 530, 171, 41));
        contactus_button_welcome_page->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ADD8E6, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: green\n"
"}\n"
"\n"
""));
        exit_button_welcome_page = new QPushButton(welcome_singin_page);
        exit_button_welcome_page->setObjectName(QString::fromUtf8("exit_button_welcome_page"));
        exit_button_welcome_page->setGeometry(QRect(820, 530, 111, 41));
        exit_button_welcome_page->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"font: 75 12pt \"Comic Sans MS\";\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #ADD8E6, stop: 1 #dadbde);\n"
"    min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: green\n"
"}\n"
""));
        label_6 = new QLabel(welcome_singin_page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 40, 381, 31));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(welcome_singin_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(570, 90, 401, 411));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 27pt \"Comic Sans MS\";"));
        label_3 = new QLabel(welcome_singin_page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 90, 491, 411));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/pic/welcome.jpg")));
        label_3->setScaledContents(true);
        stackedWidget->addWidget(welcome_singin_page);
        privacy_policy_page = new QWidget();
        privacy_policy_page->setObjectName(QString::fromUtf8("privacy_policy_page"));
        privacy_policy_page->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));
        label = new QLabel(privacy_policy_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 50, 241, 41));
        label->setStyleSheet(QString::fromUtf8("font: 75 18pt \"Bodoni MT\";\n"
"font: 75 16pt \"Times New Roman\";"));
        privacy_policy_textBrowser = new QTextBrowser(privacy_policy_page);
        privacy_policy_textBrowser->setObjectName(QString::fromUtf8("privacy_policy_textBrowser"));
        privacy_policy_textBrowser->setGeometry(QRect(70, 90, 911, 441));
        privacy_policy_textBrowser->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        privacy_policy_page_back_button = new QPushButton(privacy_policy_page);
        privacy_policy_page_back_button->setObjectName(QString::fromUtf8("privacy_policy_page_back_button"));
        privacy_policy_page_back_button->setGeometry(QRect(760, 540, 186, 31));
        privacy_policy_page_back_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"      background-color: rgb(0,68,99);\n"
"      color:white;\n"
"      border-style: outset;\n"
"      border-width: 2px;\n"
"      border-radius: 10px;\n"
"      border-color: beige;\n"
"      font: bold 14px;\n"
"      min-width: 10em;\n"
"      padding: 6px;\n"
"  }\n"
"QPushButton:pressed {\n"
"    background-color: green;\n"
"}"));
        stackedWidget->addWidget(privacy_policy_page);
        contact_us_page = new QWidget();
        contact_us_page->setObjectName(QString::fromUtf8("contact_us_page"));
        contact_us_page->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 148, 109);"));
        label_2 = new QLabel(contact_us_page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 40, 171, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";\n"
"color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(contact_us_page);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 110, 851, 401));
        textBrowser->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(contact_us_page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(750, 540, 186, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"      background-color: rgb(0,68,99);\n"
"      color:white;\n"
"      border-style: outset;\n"
"      border-width: 2px;\n"
"      border-radius: 10px;\n"
"      border-color: beige;\n"
"      font: bold 14px;\n"
"      min-width: 10em;\n"
"      padding: 6px;\n"
"  }\n"
"QPushButton:pressed {\n"
"    background-color: green;\n"
"}"));
        stackedWidget->addWidget(contact_us_page);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        singin_button_welcome_page->setText(QCoreApplication::translate("MainWindow", "sing in", nullptr));
        privacy_policy_button_welcome_page->setText(QCoreApplication::translate("MainWindow", "privacy and policy", nullptr));
        contactus_button_welcome_page->setText(QCoreApplication::translate("MainWindow", "contact us", nullptr));
        exit_button_welcome_page->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Welcome To Online Banking", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " Alpha Bank Limited", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Privacy and Policy", nullptr));
        privacy_policy_textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:72; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:400; vertical-align:sub;\">&gt; Our online services are not intended for children under 13. We do not knowingly collect personal information from children under 13 without parental consent.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:400; vertical-align:sub;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px;\"><span style=\" font-size:14pt; font-weight:400; vertical-align:sub;\"> &gt; The Customer would be required to cooperate with MidlandBank in order to ensure the security of the information, and it is recommended that the Customers necessarily choose their passwords carefully such that no unauthorized access is made by a third party. To make the password complex and difficult for others to guess, the Customers should use combination of alphabets, numbers and special characters (like !,@,#,$ etc.). The Customers should undertake not to disclose their password to anyone or keep any written or other record of the password such that a third party could access it. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:400; vertical-align:sub;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-in"
                        "dent:0px;\"><span style=\" font-size:14pt; font-weight:400; vertical-align:sub;\">&gt; Information that we may collect about you through \342\200\234midland online\342\200\235 includes information that you voluntarily disclose, such as your name, address, phone number, email address and other contact information, along with transaction information, information resulting from your \342\200\234midland online\342\200\235 activity and your location information. We may also gather additional information associated with your mobile device through cookies and other technologies.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:400; vertical-align:sub;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:400; vertical-align:sub;\"> &gt; If you face any prob"
                        "lem, you\342\200\231ll contact to the branch directly.</span></p></body></html>", nullptr));
        privacy_policy_page_back_button->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\"> Jahirul Islam:  c193083@ugrad.iiuc.ac.bd</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\"> Mainuddin Hossain:  c193070@ugrad.iiuc.ac.bd</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\"> Mahbub Khondokar Whridoy:  c193043@ugrad.iiuc.ac.bd</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; mar"
                        "gin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Taki Hasan:  c193072@ugrad.iiuc.ac.bd </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Tonmoy Roy:  c193047@ugrad.iiuc.ac.bd</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0p"
                        "x; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\"> Tauhidul Islam:  c193054@ugrad.iiuc.ac.bd</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
