#include<stdio.h>

void getWord(char *word, FILE *fp);

int main(){

    FILE *fp = fopen("Newfile.txt","rt");
    char word[100];
    if(fp == NULL){
        printf("File not found\n");
        return 1;
    }

    while(!feof(fp)){
        getWord(word,fp);
        if (*word != '\0') {  
            printf("%s, ", word);
        }
    }
    fclose(fp);

}
void getWord(char *word, FILE *fp){
    int c;
   
        do{
            c= fgetc(fp);
        }while(c!=EOF && c==' ');

        while(c!=EOF && c!=' ' && c!='\n'){
            *word =c;
            word++;
            c=fgetc(fp);
        }
        *word='\0';
    
}