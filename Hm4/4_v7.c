#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void intinf(FILE *txt){
    int ch;
    for(ch=0;ch<10;ch++)
    {
      fprintf(txt, "%d ", rand() % 10);
    }
    fprintf(txt, "\n");
}
int main(int argc, char* argv[]){
    srand(time(NULL));
    FILE *text = fopen("text.txt", "a");
    text != NULL ? intinf(text) : exit(1);
    fclose(text);
    getchar();
    return 0;
}
