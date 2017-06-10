#include <stdio.h>
#include <string.h>
int main(){
    char str[255];
    gets(str);
    int ch=0,cv=0;
    for(ch=0;ch<=strlen(str);ch++){
      if(str[ch]=='w'){
        cv++;
      }
    }
    printf("%d",cv);
    getchar();
    return 0;
}
