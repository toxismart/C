#include <stdio.h>
int main(int argc, char* argv[]){
    int ch=10;
    float qp=3.14;
    int *uP = &ch;
    float *yP = &qp;
    scanf("%d %f", &ch, &qp);
    printf("Perem: %d | %f\t", ch, uP);
    printf("Ukaz: %d | %f\t", uP, yP);
    getchar();
    return 0;
}
