#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void newp(const int el){
    int mas[el];
    int ch;
    for(ch=0; ch<el;ch++){
      mas[ch] = rand() % 100;
      printf("%d ", mas[ch]);
    }
}
int main(int argc, char *argv[]){
    srand(time(NULL));
    int bl;
    scanf("%d", &bl);
    newp(bl);
    getchar();
    return 0;
}
