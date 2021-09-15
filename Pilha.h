#pragma once
class Pilha
{
private:
	int topo;
	int capacidade;
	int *maior;
	int *menor;
	int media;
	int *conteudo;

public:
	void redefinir(int tamanho);
	Pilha(int tamanha);
	bool estaVazia();
	bool estaCheia();
	bool empilhar(int valor);
	int desempilhar();
	int retornaTopo();
};

