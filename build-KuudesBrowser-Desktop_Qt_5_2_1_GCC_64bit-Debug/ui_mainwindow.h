/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *refreshNappi;
    QPushButton *pushButton;
    QPushButton *kotiNappi;
    QWebView *webView;
    QLabel *label;
    QLineEdit *osoiteAlue;
    QPushButton *taakseNappi;
    QPushButton *menoNappi;
    QLabel *Debug2;
    QLabel *Debug1;
    QLabel *Debug3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(721, 437);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        refreshNappi = new QPushButton(centralWidget);
        refreshNappi->setObjectName(QStringLiteral("refreshNappi"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(refreshNappi->sizePolicy().hasHeightForWidth());
        refreshNappi->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/KuvaLootaLaatikko/forward-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshNappi->setIcon(icon);

        gridLayout->addWidget(refreshNappi, 1, 2, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/KuvaLootaLaatikko/Refresh-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        kotiNappi = new QPushButton(centralWidget);
        kotiNappi->setObjectName(QStringLiteral("kotiNappi"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/KuvaLootaLaatikko/koti.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        kotiNappi->setIcon(icon2);

        gridLayout->addWidget(kotiNappi, 1, 0, 1, 1);

        webView = new QWebView(centralWidget);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        gridLayout->addWidget(webView, 2, 0, 1, 9);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        osoiteAlue = new QLineEdit(centralWidget);
        osoiteAlue->setObjectName(QStringLiteral("osoiteAlue"));

        gridLayout->addWidget(osoiteAlue, 0, 2, 1, 6);

        taakseNappi = new QPushButton(centralWidget);
        taakseNappi->setObjectName(QStringLiteral("taakseNappi"));
        sizePolicy.setHeightForWidth(taakseNappi->sizePolicy().hasHeightForWidth());
        taakseNappi->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/KuvaLootaLaatikko/go-back-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        taakseNappi->setIcon(icon3);

        gridLayout->addWidget(taakseNappi, 1, 1, 1, 1);

        menoNappi = new QPushButton(centralWidget);
        menoNappi->setObjectName(QStringLiteral("menoNappi"));
        sizePolicy.setHeightForWidth(menoNappi->sizePolicy().hasHeightForWidth());
        menoNappi->setSizePolicy(sizePolicy);

        gridLayout->addWidget(menoNappi, 0, 8, 1, 1);

        Debug2 = new QLabel(centralWidget);
        Debug2->setObjectName(QStringLiteral("Debug2"));
        sizePolicy1.setHeightForWidth(Debug2->sizePolicy().hasHeightForWidth());
        Debug2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Debug2, 1, 5, 1, 1);

        Debug1 = new QLabel(centralWidget);
        Debug1->setObjectName(QStringLiteral("Debug1"));
        sizePolicy1.setHeightForWidth(Debug1->sizePolicy().hasHeightForWidth());
        Debug1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Debug1, 1, 4, 1, 1);

        Debug3 = new QLabel(centralWidget);
        Debug3->setObjectName(QStringLiteral("Debug3"));
        sizePolicy1.setHeightForWidth(Debug3->sizePolicy().hasHeightForWidth());
        Debug3->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(Debug3, 1, 6, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 721, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PikkuSelain", 0));
        refreshNappi->setText(QString());
        pushButton->setText(QString());
        kotiNappi->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Osoite", 0));
        taakseNappi->setText(QString());
        menoNappi->setText(QApplication::translate("MainWindow", "Go!", 0));
        Debug2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        Debug1->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        Debug3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
