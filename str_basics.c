#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char greeting[20]="Hello world!!";
    char car[]="Volvo";
    printf("%s",greeting);

    printf("    Accessing strings of particular index\n");
    printf("%c\n",greeting[0]);

    greeting[0]='J';
    printf("%s",greeting);

    printf("    Looping strings\n");
    for(int i=0;i<5;i++){
        printf("%c",car[i]);
    }
    // size of includes NULL character in the length and always return memory size
    //strlen and sizeoff
    printf("    Find string length\n");
    int len = sizeof(car)/sizeof(car[0]);
    int str_len= strlen(car);
    printf("Size of arr is %d\n",len);
    printf("String length of arr is %d\n ",str_len);
    
    //strcat
    printf("    Concatinating string\n");
    strcat(greeting,car);
    printf("%s\n",greeting);

    //strcpy
    printf("    String copying\n");
    char dest[]="Happy";
    char src[]="Sad";
    strcpy(dest,src);
    printf("%s\n",dest);
    
    //strcmp
    printf("    String comparing\n");
    char strval1[50]="Madam";
    char strval2[50]="Madam";
    if(strcmp(strval1,strval2));
        printf("Strings matched\n");
    
    //strncat
    char new[] = "Hi you";
    char new1[] = "you are world";
    printf("    Concat n number of strings\n");
    strncat(new,new1,5);
    printf("%s\n",new);

    //strncmp
    printf("    String comparing n characters\n");
    if(strncmp(strval1,strval2,4));
        printf("Strings of n characters matched\n");

    //strpbrk locates the of 1st c occ str2 in str1
    printf("    String locating\n");
    char st1[] = "all is well";
    char st2[] = "Stay focussed";
    char *res;
    res = strpbrk(st1,st2);
    if(res) printf("First matching character %c\n",*res);
    else printf("Character not found\n");

    //strrchr locates last occurance of ch in the string
    char s1[] = "hello! How are you?";
    char s2 = '!';
    char *r;
    r= strrchr(s1,s2);
    if(r) printf("String after |%c| is |%s|\n",s2,r);
    
    //memcpy the memcpy function copies the specified number of bytes from one memory location to the other memory location
    char str3[]= "Items";
    char str4[]= "Bread ";
    printf("The string before copying\n");
    printf("%s\n",str3);
    memcpy(str3,str4,sizeof(str4));
    printf("The string after copying\n");
    printf("%s\n",str3);

    //memmove
    char str5[]= "Special";
    char str6[]= "Dress";
    printf("The string before copying\n");
    printf("%s\n",str5);
    memmove(str5,str6,sizeof(str5));
    printf("The string after copying\n");
    printf("%s\n",str5);

    //strspn gives len of initial segment  matching ch of s2 in s1
    char ch[]="Hi friend";
    char ch1[]="Hi";
    int l = strspn(ch,ch1);
    printf("The length of initial segment matching is %d\n", l);

    // strstr returns 1st occ of str2 in str1
    char x[] = "Hello kitty!";
    char y[] = "kitty";
    char* op;
    op=strstr(x,y);
    if(op){
        printf("String found\n");
        printf("The 1st occurance of \"%s\" in \"%s\" is %s\n",y,x,op);
    }
  
    
    return 0;

}