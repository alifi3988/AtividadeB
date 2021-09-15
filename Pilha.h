#pragma once

    class Pilha {
    private:
        struct noPilha {
            int valor;
            noPilha* proximoNo; // ligação próximo nó
        };
        typedef noPilha* PonteiroPilha;
        PonteiroPilha topo;
    public:
        Pilha(); //primeira coisa a fazer quando a variavel for chamada
        bool estaVazia();
        bool empilhar(int x); //colocará na pilha o valor (int valor)
        bool desempilhar(int& x); //pega o elemento que está no topo (int &valor)
        bool remover(int& x); //remove o elemennto que etsá no topo(int &valor)
        int mostrar(int& x);
        int retornaTopo();
        ~Pilha(); //limpa a memória para fazer o processo novamente
    };

