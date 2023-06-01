#ifndef GAME_WIDGET_H
#define GAME_WIDGET_H

#include <QMainWindow>

namespace Ui {
class game_widget;
}

class game_widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit game_widget(QWidget *parent = nullptr);
    ~game_widget();

private:
    Ui::game_widget *ui;
};

#endif // GAME_WIDGET_H
