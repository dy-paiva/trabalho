#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    MainWindow:setWindowTitle("Folha de Pagamento");

    statusRadio[0] = true;
    statusRadio[1] = false;
    statusRadio[2] = false;
    ui->label_6->show();
    ui->spinBox->show();
    ui->frame->setGeometry(210,10,191,141);
    ui->frame->setGeometry(210,10,191,141);
    ui->radioButton->setChecked(true);

    this->setGeometry(500,200,441,359);

    ui->widget_2->show();
    ui->widget_3->hide();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_radioButton_clicked() {
    statusRadio[0] = true;
    statusRadio[1] = false;
    statusRadio[2] = false;
    ui->label_6->show();
    ui->spinBox->show();
    ui->frame->setGeometry(210,10,191,141);
    ui->frame->setGeometry(210,10,191,141);
    ui->dadosTipo->setText("Gerente");
}

void MainWindow::on_radioButton_2_clicked() {
    statusRadio[0] = false;
    statusRadio[1] = true;
    statusRadio[2] = false;
    ui->label_6->hide();
    ui->spinBox->hide();
    ui->frame->setGeometry(210,10,191,91);
    ui->frame->setGeometry(210,10,191,91);
    ui->dadosTipo->setText("Estagiario");
}

void MainWindow::on_radioButton_3_clicked() {
    statusRadio[0] = false;
    statusRadio[1] = false;
    statusRadio[2] = true;
    ui->label_6->hide();
    ui->spinBox->hide();
    ui->frame->setGeometry(210,10,191,91);
    ui->frame->setGeometry(210,10,191,91);
    ui->dadosTipo->setText("Programador");
}

void MainWindow::on_buttonBox_accepted() {
    if(ui->lineEdit->text() != NULL) {
        if(ui->lineEdit_2->text() != NULL) {
            if(statusRadio[0]) {
                if(ui->spinBox->value()) {
                    #include "gerente.h"
                    Gerente add;
                    add.setNome(nome);
                }
            } else {

            }
        }
    }
}

void MainWindow::on_pushButton_3_clicked() {
    this->close();
}

void MainWindow::on_pushButton_clicked() {
    ui->widget_2->hide();
    ui->widget_3->show();
    MainWindow:setWindowTitle("Cadastro");
    this->setGeometry(500,200,412,259);
}

void MainWindow::on_buttonBox_rejected() {
    ui->widget_2->show();
    ui->widget_3->hide();
    this->setGeometry(500,200,441,359);
}
