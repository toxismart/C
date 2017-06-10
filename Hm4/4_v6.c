#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dc(FILE *txt){
    char string[255];
    fgets(string, 255, txt);
    int ch=0,el=0;
    for(;ch<strlen(string);ch++){
      if(string[ch]== '.'){
          el++;
      }
  }
  printf("%s", string);
  return el;
}
int main(){
    FILE *text = fopen("text.txt", "r");
    text != NULL ? printf("%d", dc(text)) : exit(5);
    getchar();
    return 0;
}
