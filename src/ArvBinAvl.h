/*
TRABALHO DE IMPLEMENTACAO DE ARVORE BINARIA DE BUSCA BALANCEADA (AVL)
AUTOR: LUIZ GUSTAVO FALQUETO e ERIC RABELO
DATA CRIACAO: 11/03/2021
ARQUIVO: .h
*/

#ifndef ARVBINAVL_H
#define ARVBINAVL_H

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*------------------------------------------ Estrutura dos nohs da arvore ------------------------------------*/

typedef struct nodeAvl{
    void *chave;
    int fatorBal;
    struct nodeAvl *right, *left;
}NodeAvl;

/*------------------------------------------ Estrutura da raiz da arvore -------------------------------------*/
typedef struct radixAvl{
    NodeAvl *raiz;
}Avl;

/*------------------------------------------ Assinaturas das funcoes -----------------------------------------*/
NodeAvl* criaNode(void *chave); //Funcao que cria uma instancia do node
Avl* criaAvl(); //Funcao que inicializa a arvore

void RotationLL(NodeAvl **node); //Funcao de Rotacao simples para a direita
void RotationRR(NodeAvl **node); //Funcao de Rotacao simples para a esquerda
void RotationLR(NodeAvl **node); //Funcao de Rotacao dupla para a direita
void RotationRL(NodeAvl **node); //Funcao de Rotacao dupla para a esquerda

int insertAvl(NodeAvl **node, void *chave, int (compararValores)(void*,void*)); //Funcao de Insercao da arvore
// NodeAvl* searchAvl(NodeAvl *node, void *chave, int (compararValores)(void*, void*)); //Funcao de Busca de um node
// int deleteAvl(NodeAvl **node, int chave); //Funcao de Remocao de um node

int heightAvl(NodeAvl *raiz); //Funcao que retona a altura da raiz

void imprimeArvore(NodeAvl *T, int nivel, void (imprimirArvore)(void*,void*)); //Funcao para imprimir arvore

/*Demais funcoes*/
void limparTela(); //Limpa a tela para melhor visualizaçao
void menu(Avl *avl); //Apresenta um menu para realizacao das operacoes
void destroyAvl(Avl *avl); //Destroi a arvore
void auxDestroyAvl(NodeAvl *node) ;//Auxiliar de 'destroyAvl' que libera no por no

#endif //ARVBINAVL_H