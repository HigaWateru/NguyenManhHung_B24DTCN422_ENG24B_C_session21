#include <stdio.h>
char c[10005];
int main(){
    FILE *fptr;
    fptr=fopen64("bt01.txt","a");
    fgets(c,1000,stdin);
    fprintf(fptr,"%s",c);
}