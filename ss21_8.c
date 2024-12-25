#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int id;
    char name[100];
    int age;
}sinhvien;
sinhvien a[105];
int main(){
    FILE *file=fopen64("students.txt","r");
    int n=0;
    while(fscanf(file,"%d\n",&a[n].id)==1){
        fgets(a[n].name,100,file);
        if(strlen(a[n].name)>0&&a[n].name[strlen(a[n].name)-1]=='\n')a[n].name[strlen(a[n].name)-1]='\0';
        fscanf(file,"%d\n",&a[n].age);
        n++;
    }
    fclose(file);
    for(int i=0;i<n;i++)printf("%4d | %30s | %3d\n",a[i].id,a[i].name,a[i].age);
}
