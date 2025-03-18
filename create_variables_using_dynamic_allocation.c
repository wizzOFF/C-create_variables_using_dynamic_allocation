
#include <stdio.h>
#include <stdlib.h>
/*
typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    printf("Coordonnees : %d octets\n", sizeof(Coordonnees));

    return 0;
}
*/

void* malloc(size_t nombreOctetsNecessaires);

int* memoireAllouee = NULL; // On crée un pointeur sur int

memoireAllouee = malloc(sizeof(int)); // La fonction malloc inscrit dans notre pointeur l'adresse qui a été reservée.