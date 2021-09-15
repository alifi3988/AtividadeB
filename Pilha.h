#pragma once

    class Pilha {
    private:
        struct noPilha {
            int valor;
            noPilha* proximoNo; // liga��o pr�ximo n�
        };
        typedef noPilha* PonteiroPilha;
        PonteiroPilha topo;
    public:
        Pilha(); //primeira coisa a fazer quando a variavel for chamada
        bool estaVazia();
        bool empilhar(int x); //colocar� na pilha o valor (int valor)
        bool desempilhar(int& x); //pega o elemento que est� no topo (int &valor)
        bool remover(int& x); //remove o elemennto que ets� no topo(int &valor)
        int mostrar(int& x);
        int retornaTopo();
        ~Pilha(); //limpa a mem�ria para fazer o processo novamente
    };

