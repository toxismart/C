#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct newline{
    float x,y,z;
};
void drnew1(struct newline *a){
    a->x = (rand()%100)/5;
    a->y = (rand()%100)/5;
    a->z = (rand()%100)/5;
}
void drnew2(struct newline *a){
    printf("x:%.1f y:%.1f z:%.1f", a->x, a->y, a->z);
}
void drnew3(struct newline *a){
    a->x = 0;
    a->y = 0;
    a->z = 0;
}
int main(int argc, char* argv[]){
    srand(time(NULL));
    struct newline a;
    drnew1(&a);
    drnew2(&a);
    drnew3(&a);
    getchar();
    return 0;
}
