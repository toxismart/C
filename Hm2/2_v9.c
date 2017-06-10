#include<stdio.h>
int main(){
    int pqe;
    FILE *peq;
    peq = fopen("Result.txt","w");
    int ch;
    for(ch=0;ch<10;ch++){
      printf("Enter %d the num: ", ch);
      scanf("%d", &pqe);
      if(pqe<50 && pqe>0)
          fprintf(peq, "%d ", pqe);
    }
    fclose(peq);
    getchar();
    return 0;
}
