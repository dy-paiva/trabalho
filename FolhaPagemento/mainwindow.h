#ifndef CADASTRO_H
#define CADASTRO_H

#include <QMainWindow>
#include <string>
#include <vector>

using namespace std;

#include "funcionario.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    vector<Funcionario*> obj;
    bool statusRadio[3];
    string nome;
    float salario;
    int qtGerenciado;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_buttonBox_accepted();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_buttonBox_rejected();

private:
    Ui::MainWindow *ui;
};

#endif // CADASTRO_H
