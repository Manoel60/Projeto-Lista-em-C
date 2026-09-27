#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main ()
{
    Lista* l1 = lst_cria();
    l1 = lst_insere(l1, 20);
    
    lst_imprime(l1);
   
    return 0;
}
