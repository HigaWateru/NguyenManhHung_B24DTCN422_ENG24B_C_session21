#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char id[10];
    char name[30];
    int age;
}sinhvien;
void scanChar(char *a,int length){
    fgets(a,length,stdin);
    if(strlen(a)>0&&a[strlen(a)-1]=='\n')a[strlen(a)-1]='\0';
}
sinhvien a;
int n;
int main(){
    FILE *file=fopen64("students.txt","w");
    printf("So luong sinh vien: ");
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        printf("ID sinh vien %d: ",i+1);
        scanChar(a.id,10);
        printf("Ten sinh vien: ");
        scanChar(a.name,30);
        printf("Tuoi: ");
        scanf("%d",&a.age);
        getchar();
        fprintf(file,"%s %s %d\n",a.id,a.name,a.age);
    }
}
