#include "game_widget.h"
#include "ui_game_widget.h"

game_widget::game_widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::game_widget)
{
    ui->setupUi(this);
}

game_widget::~game_widget()
{
    delete ui;
}
