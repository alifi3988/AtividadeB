#include <iostream>
#include <stack> //Biblioteca utilizada em pilhas
#include "Pilha.h"
#define  MAX 5;

using namespace std;

//método para criação do menu inicial
int Criar_menu() {
    int resposta;

    cout << "*** MENU DA PILHA ***" << endl;
    cout << "[1] - Adicionar itens na pilha" << endl;
    cout << "[2] - Inverter ordem da pilha" << endl;
    cout << "[3] - Mostrar topo da Pilha" << endl;
    cout << "[4] - Limpar pilha" << endl;
    cout << "[0] - Encerrar" << endl;
    cout << "A pilha tera 5 posicoes" << endl;
    cout << "Informe uma das opcoes acima: ";
    cin >> resposta;

    return resposta;
}


int main()
{
    //stack<int> pilha; //declarando uma pilha (stck  <tipo>   nome)
    int resp = 0;
    Pilha minhaPilha;
    Pilha Pilhaauxi;
    int number, max = MAX;
    int x;

    while (true) 
    {
        system("cls");
        resp = Criar_menu();
        cout << resp;
        switch (resp) {
            case 1:
                system("cls");
                if (minhaPilha.estaVazia() == 0 or Pilhaauxi.estaVazia() == 0) {
                    cout << " * * * ADCIONAR ITENS NA PILHA * * *" << endl;
                    cout << "Esta cheia!" << endl;
                }
                else {
                    cout << " * * * ADCIONAR ITENS NA PILHA * * *" << endl;
                    cout << "Sera adicionado 5 valores a pilha por voce!" << endl;
                    for (int i = 0; i < max; i++) {
                        cout << "Informe um valor: ";
                        cin >> number;
                        minhaPilha.empilhar(number);
                    }
                }
                system("pause");
                break;
            case 2:
                system("cls");
                cout << "\n * * * INVERTER ORDEM DA PILHA * * * " << endl;
                if (minhaPilha.estaVazia() and Pilhaauxi.estaVazia()) {
                    cout << "Pilha vazia, nao tem como inverter no momento..." << endl;
                }else{
                    if(Pilhaauxi.estaVazia()){
                        for (int i = 0; i < max; i++) {
                            minhaPilha.desempilhar(x);
                            Pilhaauxi.empilhar(x);
                        }
                    }
                    else if (minhaPilha.estaVazia()) {
                        for (int i = 0; i < max; i++) {
                            Pilhaauxi.desempilhar(x);
                            minhaPilha.empilhar(x);
                        }
                    }
                    cout << "\n Pilha invertida com sucesso!" << endl;
                }
                system("pause");
                break;
            case 3:
                system("cls");
                cout << "\n * * * MOSTRANDO A PILHA * * * " << endl;
                if (minhaPilha.estaVazia() and Pilhaauxi.estaVazia()) {
                    cout << "Pilha vazia, nao tem como mostrar no momento" << endl;
                }
                else {
                    if (Pilhaauxi.estaVazia()) {
                        cout << "Topo da pilha e: "<< minhaPilha.retornaTopo() << endl;
                    }
                    else {
                        cout << "Topo da pilha e: "<< Pilhaauxi.retornaTopo() << endl;
                    }
                }
                system("pause");
                break;
            case 4:
                system("cls");
                if (minhaPilha.estaVazia() and Pilhaauxi.estaVazia()) {
                    cout << "Pilha vazia, nao tem como limpar no momento..." << endl;
                    break;
                }
                else {
                    cout << "\n * * * LIMPAR PILHA * * *" << endl;
                    if (minhaPilha.estaVazia()) {
                        for (int i = 0; i < max; i++) {
                            Pilhaauxi.desempilhar(x);
                            
                        }                    
                    }
                    else if (Pilhaauxi.estaVazia()) {
                        for (int i = 0; i < max; i++) {
                            minhaPilha.desempilhar(x);
                        }
                    }
                    cout << "PILHA LIMPA COM SUCESSO! " << endl;
                    system("pause");
                    break;
                }
            default:
                system("cls");
                cout << "Erro inesperado, o sistema sera encerrado" << endl;
                resp = 0;
                break;
        }
        if (resp == 0) {
            cout << "Encerrando o sistema...." << endl;
            break;
        }
    }
    return 0;
}
