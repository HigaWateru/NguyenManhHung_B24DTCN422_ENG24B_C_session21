#include <stdio.h>
#include <stdlib.h>
char name[1000];
int main(){
    FILE *file=fopen64("bt01.txt","r");
    fgets(name,sizeof(name),file);
    printf("Dong dau tien trong file: %s",name);
    fclose(file);
}