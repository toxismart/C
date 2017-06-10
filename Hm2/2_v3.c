#include<stdio.h>
int main(){
    char ss[255];
    FILE *spaces;
    spaces = fopen("textFileV2.txt","r");
    fgets (ss, 255, spaces);
    fclose(spaces);
    int ch, spacenum = 0;
    for(ch=0;ch<255;ch++)
        if(ss[ch] == ' ')
            spacenum++;
    printf("%d Spaces:", spacenum);
    getchar();
    return 0;
}
