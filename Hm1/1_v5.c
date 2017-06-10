#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char string[255];
    FILE *input;
    input = fopen("input.txt","r");
    if(input != NULL){
      fscanf(input, "%s", string);
    }
    else{
      printf("input.txt err");
    exit(250);
      }
    fclose(input);
    FILE *qeq;
    qeq = fopen("quek.txt","w");
    fprintf(qeq, "%s", string);
    fclose(qeq);
    getchar();
    return 0;
}
