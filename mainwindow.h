#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUrl>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    bool winClose = false;
    QUrl url = QUrl("LINK QUESTIONARIO");
    QUrl adminUrl = QUrl("LINK SET CLASSE");

protected:
    void closeEvent(QCloseEvent *);
    void keyPressEvent(QKeyEvent *);

private slots:
    void on_webView_customContextMenuRequested(const QPoint &pos);
    void mousePressEvent(QMouseEvent *);
};

#endif // MAINWINDOW_H
