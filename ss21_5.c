#include <stdio.h>
#include <stdlib.h>
void scanChar(char *a,int length){
    fgets(a,length,stdin);
    if(strlen(a)>0&&a[strlen(a)-1]=='\n')a[strlen(a)-1]='\0';
}
int n;
char name[1005];
int main(){
    FILE *file=fopen64("bt05.txt","a");
    printf("So dong muon ghi: ");
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        scanChar(name,1000);
        fprintf(file,"%s\n",name);
    }

}