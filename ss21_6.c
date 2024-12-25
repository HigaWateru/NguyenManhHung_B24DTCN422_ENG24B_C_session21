#include <stdio.h>
#include <stdlib.h>
char ch;
int main(){
    FILE *file1=fopen64("bt01.txt","r");
    FILE *file2=fopen64("bt06.txt","w");
    while((ch=fgetc(file1))!=EOF)fputc(ch,file2);
}