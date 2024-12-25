#include <stdio.h>
char name;
int main(){
    FILE *fptr;
    fptr = fopen64("bt01.txt","r");
    fscanf(fptr,"%c",&name);
    printf("%c",name);
}