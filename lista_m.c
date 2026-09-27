#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main ()
{
    Lista* l1 = lst_cria();
    Lista* l2 = lst_cria();
    l1 = lst_insere(l1, 20);
    l2 = lst_insere(l2, 202);
    
    lst_imprime(l1);
    
    lst_imprime(lst_conc(l1, l2));
    
    return 0;
}
