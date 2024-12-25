#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
    char ms[10];
    char name[50];
    char tg[30];
    int price;
    char ctg[50];
}books;
books a[100],temp[100];
void getChar(char *name,int length){
    fgets(name,length,stdin);
    if(strlen(name)>0&&name[strlen(name)-1]=='\n')name[strlen(name)-1]='\0';
}
char name[10],ms[10];
int n,o,vt,count;
int main(){
    FILE *finp=fopen64("books.bin","rb");
    FILE *fout=fopen64("books.bin","wb");
    do{
        printf("MENU\n1.Nhap so luong va thong tin sach\n2.Luu thong tin sach vao file\n3.Lay thong tin tu file\n4.Hien thi thong tin sach\n5.Thoat\nLua chon cua ban: ");
        scanf("%d",&o);
        getchar();
        switch(o){
            case 1:
                printf("Nhap so sach: ");
                scanf("%d",&n);
                getchar();
                for(int i=0;i<n;i++){
                    printf("Nhap thong tin sach %d\nMa sach: ",i+1);
                    getChar(a[i].ms,10);
                    printf("Ten sach: ");
                    getChar(a[i].name,50);
                    printf("Tac gia: ");
                    getChar(a[i].tg,50);
                    printf("Gia tien: ");
                    scanf("%d",&a[i].price);
                    getchar();
                    printf("The loai: ");
                    getChar(a[i].ctg,50);
                }
                break;
            case 2:
                fwrite(&n,sizeof(int),1,fout);
                fwrite(a,sizeof(books),n,fout);
                fclose(fout);
                printf("Thong tin cuon sach da luu trong file!\n");
                break;
            case 3:
                printf("Nhap ma sach can tim: ");
                getChar(name,10);
                int tg=0;
                fread(&n,sizeof(int),1,finp);
                for(int i=0;i<n;i++){
                    fread(&a[i].ms,sizeof(books),1,finp);
                    if(strcmp(a[i].ms,name)==0){
                        printf("Thong tin ma sach %s:\nTen sach: %s\nTac gia: %s\nGia ban: %d\nThe loai: %s\n",a[i].ms,a[i].name,a[i].tg,a[i].price,a[i].ctg);
                        tg=1;
                        break;
                    }
                }
                if(!tg)printf("Khong tim thay thong tin ma sach %s\n",name);
            case 4:
                int co;
                fread(&co,sizeof(int),1,finp);
                fread(temp,sizeof(books),co,finp);
                fclose(finp);
                break;
            default: continue;
        }
    }while(o!=5);
}
