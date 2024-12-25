#include <stdio.h>
char name[10000];
int main(){
    FILE *fptr;
    fptr = fopen64("bt01.txt","w");
    printf("Nhap gia tri truyen vao file: ");
    fgets(name,10000,stdin);
    fprintf(fptr,"%s",name);
}