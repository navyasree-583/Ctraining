// int main(){
//     int num=1;
//     int sum=0;
//     do{
//        if(num%4!=0 && num%8!=0 && num%12!=0){
//         num++;
//         continue;
//        }
//        sum+=num;
//        num++;
       
//     }while(num<=100);
//     printf("sum is = %d",sum);

// }

// int main(){
//     int sum=0;
//     for(int num=1;num<=100;num++){
//         if(num%4!=0 && num%6!=0 && num%8!=0){
//             continue;
//         }
//         sum+=num;
//     }
//     printf("sum is %d",sum);
//     return 0;
// }
#include<stdio.h>
int main(){
    int sum=0;
    int num=1;
    while(num<=100){
        if(num%4!=0 && num%6!=0 && num%8!=0){
            num++;
            continue;
        }
        sum+=num;
        num++;
    }
    printf("sum is %d",sum);
    return 0;
}