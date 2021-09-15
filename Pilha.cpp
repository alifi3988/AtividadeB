#include "Pilha.h"
#include <cstdlib>

//contrutores da classe Pilha

Pilha::Pilha(int tamanho) {
	this->redefinir(tamanho);
}

void Pilha::redefinir(int tamanho) {
	this->topo = -1;
	this->capacidade = tamanho -1;
	this->conteudo = (int*)malloc(tamanho * sizeof(int));
}
bool Pilha::estaVazia() {
	if (this->topo == -1) {
		return true;
	}
	else {
		return false;
	}
}
bool Pilha::estaCheia() {
	if (this->topo == this->capacidade) {
		return true;
	}
	else {
		return false;
	}
}
bool Pilha::empilhar(int valor) {
	if (this->estaCheia()) {
		return false;
	}
	this->topo++;
	this->conteudo[this->topo] = valor;
	return 1;
}
int Pilha::desempilhar() {
	int aux = this->conteudo[this->topo];
	if (this->estaVazia())	
		return false;
	this->topo--;
	return aux;
}

int Pilha::retornaTopo() {
	return this->conteudo[this->topo];
}
