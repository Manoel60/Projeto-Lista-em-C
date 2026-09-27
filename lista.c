#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// Estrutura lista
struct lista
{
    int info;
    Lista *prox;
};

// Criar uma lista vazia
Lista* lst_cria()
{
    return NULL;
}

// Testar se uma lista é vazia
int lst_vazia(Lista* l)
{
    return (l == NULL);
}

// Insere elemento novo na lista
Lista* lst_insere(Lista* l, int info)
{
    Lista* ln = (Lista*)malloc(sizeof(Lista));
    ln->info = info;
    ln->prox = l;
    return ln;
}

// Imprimir os elementos da lista
void lst_imprime(Lista* l)
{
     Lista* lAux = l;
     //rintf("Lista: ");
     while(lAux != NULL)
     {
         printf(" %d ",lAux->info);
         lAux = lAux->prox;
     }
}

// Imprimi de forma recursiva
void lst_imprime_rec(Lista* l)
{
     //Lista* lAux = l;
     if ( l->prox!=NULL )
         lst_imprime_rec(l->prox);
     printf(" %d ", l->info);
}

//  Remove recursivamente
Lista* lst_remove_rec(Lista* l, int info)
{
    Lista* lAux = l;
    if ( lAux->info != info)
        lAux = lst_remove_rec(lAux->prox, info);
    else
    {
        l->prox = lAux->prox;
        free(lAux);
    }
    return l;
}

// Concatena duas listas
Lista* lst_conc(Lista* l1, Lista* l2)
{
	Lista* lAux[2] = {l1,l2};
}
// liberar a fila
void lst_libera(Lista* l)
{
	Lista* lAux;
	
	while(l != NULL)
	{
		l = lAux->prox;
		free(lAux);
		
		lAux = l;
	}
}