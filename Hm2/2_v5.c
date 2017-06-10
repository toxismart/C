#include<stdio.h>

int main(){
    double k,v,pls;
    FILE *fileopen;
    fileopen = fopen("a.txt","r");
    fscanf(fileopen,"%lf", &k);
    fscanf(fileopen,"\t%lf", &v);
    fclose(fileopen);
    pls=k+v;
    printf("Result: %lf", pls);
    getchar();
    return 0;
}
