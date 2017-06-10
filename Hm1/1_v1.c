#include <stdio.h>
int main(){
    int ch=0;
    for(ch=0;ch<=21;ch++){
        if(ch%2==0){
            printf("%d ",ch);
        }
    }
    getchar();
    return 0;
}
