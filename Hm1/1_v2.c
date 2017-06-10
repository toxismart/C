#include<stdio.h>
int main(){
    char fs_string[255],sc_string[255];
    gets(fs_string);
    gets(sc_string);
    FILE *openstrings;
    openstrings = fopen("textprogc.txt","w");
    fprintf(openstrings, "%s", fs_string);
    fprintf(openstrings, "\n%s", sc_string);
    fclose(openstrings);
    getchar();
    return 0;
}
