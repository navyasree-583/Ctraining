#include<stdio.h>
#include<stdlib.h>
// int main(int argc, char *argv[]){
//     printf("THe number of cmd line arguments %d \n",argc);
//         for(int i=0;i<argc;i++){
//             printf("%s\n",argv[i]);
//         }
//     return 0;
// }
int main(int argc, char *argv[]){
    printf("THe number of cmd line arguments %d \n",argc);
        for(int i=0;i<argc;i++){
            printf("%s\n",argv[i]);
        }
        int sum=0;
        for(int i=0;i<argc;i++){
            sum=sum+atoi(argv[i]);
        }
        printf("Sum of command line arguments is %d\n",sum);
    return 0;
}