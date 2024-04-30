#include<stdio.h>
int main(){
    FILE *fp = fopen("Newfile.txt","wt");
    if(fp==NULL){
        printf("File not found\n");
        return 1;
    }
    fclose(fp);
}