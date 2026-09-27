
typedef struct lista Lista;

// Função que cria lista
Lista* lst_cria();

// Função testar lista vazia
int lst_vazia(Lista* l);

// Função para inserir um novo elemento na lista
Lista* lst_insere(Lista* l, int info);

// Função para imprimir a lista
void lst_imprime(Lista* l);

// Função para imprimir de forma recursiva
void lst_imprime_rec(Lista* l);

// Função  para remover de forma recursiva
Lista* lst_remove_rec(Lista* l, int info);

// Calcula o número de nós da lista
int comprimento(Lista* l);

// Retorna os números de nós que tem o com campo info com valor menor que n
int menores(Lista* l, int n);

// Função que soma o campo info de todos os nó
int soma(Lista* l);

// Função que retorna o número de nós primos da lista
int primos(Lista* l);

// Função que cria uma lista concatenando l2 no final da lista l1
Lista* lst_conc(Lista*  l1, Lista* l2);

// Funçao que retira os os elementos de l1 que forem iguais a l2
Lista* lst_diferenca(Lista* l1, Lista* l2);

// Função buscar
Lista* lst_busca(Lista* l, int  info);

// Concatena duas listas
Lista* lst_conc(Lista* l1, Lista* l2);

// Função leberar
void lst_libera(Lista* l);
