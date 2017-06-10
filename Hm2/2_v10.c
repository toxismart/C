#include<stdio.h>
int main(){
    int quq;
    FILE *pup;
    pup = fopen("numbers.txt","w");
    int ch=0;
    while(ch!=5){
      printf("Enter %d num: ", ch);
      scanf("%d", &quq);
      if(quq<25){
          fprintf(pup, "%d ", quq);
          ch++;
      }
      else{
          printf("err!\n");
      }
    }
    fclose(pup);
    getchar();
    return 0;
}
