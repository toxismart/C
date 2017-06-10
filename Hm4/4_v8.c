#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct coords{
    int k,v,q;
}curmas[3];
void newline(int *k, int *v){
    *v=*k;
}
int main(int argc, char* argv[]){
    srand(time(NULL));
    curmas[1].k=rand()%10;
    printf("X in 1str: %d\n", curmas[1].k);
    printf("X in 2str: %d\n", curmas[2].k);
    newline(&curmas[1].k, &curmas[2].k);
    printf("X in 2str: %d", curmas[2].k);
    getchar();
    return 0;
}
