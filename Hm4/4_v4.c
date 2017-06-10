#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct newline{
    float x,y,z;
};
void drnew(struct newline *a){
    a->x = (rand()%100)/5;
    a->y = (rand()%100)/5;
    a->z = (rand()%100)/5;
}
int main(int argc, char* argv[]){
  srand(time(NULL));
    struct newline a;
    drnew(&a);
    getchar();
    return 0;
}
