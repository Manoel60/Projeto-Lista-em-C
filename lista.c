#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

// Função buscar
Lista* lst_busca(Lista* l, int  info)
{
	Lista* lAux = l;
	while( lAux != NULL)
	{
		if ( lAux->info == info )
		    return lAux;
		lAux = lAux->prox;
	}
	return NULL;
}

// Imprimir os elementos da lista
void lst_imprime(Lista* l)
{
     Lista* lAux = l;
     printf("Lista:");
     while(lAux != NULL)
     {
         printf(" %d ",lAux->info);
         lAux = lAux->prox;
     }
     printf("\n");
}

// Imprimi de forma recursiva
void lst_imprime_rec(Lista* l)
{
     
     if ( l->prox!=NULL )
     {
     	printf(" %d ", l->info);
	    lst_imprime_rec(l->prox);
	}
}

// Imprimi de forma recursiva invertidamente
void  lst_imprime_invertida_rec(Lista* l)
{
	
	Lista* lAux = l;
	if ( lAux->prox != NULL)
	    lst_imprime_invertida_rec(lAux->prox);
	else
		printf("Lista:");
	printf(" %d ", lAux->info);	
	    
}

//  Remove recursivamente
Lista* lst_remove_rec(Lista* l, int info)
{
    Lista* lAux = l;
    if ( lAux->info != info)
        lAux->prox = lst_remove_rec(lAux->prox, info);
    else
    {
        l = lAux->prox;
        free(lAux);        
    }
    return l;
}

// Concatena duas listas
Lista* lst_conc(Lista* l1, Lista* l2)
{
	Lista* lAux = l1;
	
	while(lAux->prox != NULL)
	{
		lAux = lAux->prox;		
	}	
	
	lAux->prox = l2;
	
	return  l1;
}

// Funçao que retira os os elementos de l1 que forem iguais a l2
Lista* lst_diferenca(Lista* l1, Lista* l2)
{

	Lista* lAux = l2;
	Lista* lAux2 = l1; 
	while(lAux != NULL)
	{
		Lista* l_b = lst_busca(l1, lAux->info);
		//if (l_b != NULL)
		   l1 = lst_remove_rec(l1, 4);
		
		lAux = lAux->prox;
		
	}
	return l1;
}

// Retorna o número de nós menor que n
int menores(Lista* l, int n)
{
	Lista* lAux = l;
	int count = 0;
	
	while(lAux->prox != NULL)
	{
		if ( lAux->info < n)
			count++;
		lAux = lAux->prox;
	}
	
	return count;
}

// Calcula o número de nós da lista
int comprimento(Lista* l)
{
	Lista* lAux = l;
	int count = 0;
	
	if ( lst_vazia(l) )
		return 0;
		
	while( lAux != NULL )
	{
		lAux = lAux->prox;
		count++;
	}
	
	return count;
}

// Soma o campo info de todos os nós
int soma(Lista* l)
{
	Lista* lAux = l;
	int count = 0;
	
	while( lAux != NULL)
	{
		count += lAux->info;
		lAux = lAux->prox;
	}
	
	return count;
}

// Função que retorna o número de nós primos da lista
int primos(Lista* l)
{
	Lista* lAux = l;
	int nPrimos = 0;
	while( lAux != NULL)
	{
		int count = 2,  boolPrimo = 0;
		int rq = sqrt( lAux->info );
		int info = lAux->info;
		
		while (count < rq )
		{
			
			if ( (info % count) == 0 )
			{
				
				boolPrimo = 0;
				break;
			}
			else
				boolPrimo = 1;
				
			count++;
		}
		
		if (boolPrimo)
		{
			nPrimos++;
		}
		lAux = lAux->prox;
    }
	
	return nPrimos;
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