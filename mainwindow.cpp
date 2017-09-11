#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QWebView>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->webView->setContextMenuPolicy(Qt::NoContextMenu);
    ui->webView->load(url);
}

void MainWindow::closeEvent(QCloseEvent *e) {
    if(winClose) {
        e->accept();
    } else {
        e->ignore();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *e) {
    if(e->modifiers().testFlag(Qt::ShiftModifier) && e->modifiers().testFlag(Qt::ControlModifier)) {
        if(e->key() == Qt::Key_X) {
            winClose = true;
        } else if(e->key() == Qt::Key_R) {
            ui->webView->load(url);
        } else if(e->key() == Qt::Key_A) {
            ui->webView->load(adminUrl);
        }
    }
    if(e->modifiers().testFlag(Qt::AltModifier)) {
        e->ignore();
    }
}

void MainWindow::mousePressEvent(QMouseEvent *e) {
    if(e->button()==Qt::RightButton) {
        e->ignore();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_webView_customContextMenuRequested(const QPoint &pos)
{
    //do-nothing
}
