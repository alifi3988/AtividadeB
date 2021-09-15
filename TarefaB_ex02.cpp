#include <iostream>
#include "Pilha.h"
using namespace std;
	
//Criei métodos para menu, e ações para ficar separado e de melhor entendimento..Vamos ver se consigo deixar tudo certinho
//Além disso vou tentar comentar o código para questões de fixar conhecimento e para futuro estudos

//primeiro método será a criação do menu
int criacaoMenu() {

	int op = 0;
	cout << " * * * M E N U * * * " << endl;
	cout << "[1] - Informar dados para a pilha" << endl;
	cout << "[2] - Informar maior e menor" << endl;
	cout << "[3] - Informar a media dos numeros" << endl;
	cout << "[0] - Encerrar o programa" << endl;
	cout << "Informe uma das opcoes: ";
	cin >> op;
	return op;
}
//segundo método para inlcuir dados na pilha


int main()
{
	int opcao; int valor = 0; int maior = 0, menor = 0;
	int media = 0, soma = 0, contador = 0;
	Pilha minhaPilha(2);
	bool estado = true;
	while (true) {
		system("cls");
		opcao = criacaoMenu();
		switch (opcao) {
		case 1:
			system("cls");
			cout << "* * * INFORMANDO OS VALORES * * * " << endl;
			if (minhaPilha.estaVazia()) {
				cout << "Vamos empilhar, para encerrar digite o vaor 0" << endl;
				while (true) {
					cout << "Informe o valore desejado, para adicionar a pilha: "; cin >> valor;
					if (valor == 0) {
						cout << "Encerrando insercao de valores...";
						break;
					}else if (valor != 0){
						soma = soma + valor;
						minhaPilha.empilhar(valor);
						if (contador == 0) {
							maior = valor;
							menor = valor;
						}else if (contador != 0) {
							if (valor > maior) {
								maior = valor;
							}if (valor < menor) {
								menor = valor;
							}
						}
						contador = contador + 1;
					}
				}
			}else if (minhaPilha.estaCheia()) {
				cout << "Impossivel acrescentar no momento!" << endl;
			}
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "* * * MOSTRANDO O MENOR E MENOR * * *" << endl;
			cout << "O maior valor colocado na pilha é: " << maior << endl;
			cout << "O menor valor colocado na pilha é: " << menor << endl;

			system("pause");
			break;
		case 3:
			system("cls");
			cout << "* * * MOSTRANDO A MÉDIA DOS NUMEROS INFORMADOS * * *" << endl;
			media = (soma / contador);
			cout << "A média é:  " << media << endl;

			system("pause");
			break;
		case 0:
			system("cls");
			cout << " Encerrando o programa. Obrigado por vir..." << endl;
		}
	}
	return 0;
}

