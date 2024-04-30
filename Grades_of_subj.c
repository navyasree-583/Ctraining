/*
PSUEDO CODE
START GRADE OF SUBJECT
DECLARE SUB_MARKS
DECLARE GRADE

INPUT SUB_MARKS
Scan SUB_MARKS

IF SUB_MARKS>80
   Display "A "

ELIF SUB_MARKS>65
   Display "B"

ELIF SUB_MARKS>40
   Display "C"

ELIF SUB_MARKS>35
   Display "B "
END ELIF
ELSE 
   Display "F"
END ELSE

*/
#include<stdio.h>
    int main(){
        int marks;
        printf("Enter the marks for math");
        scanf("%d",&marks);
        if(marks>80){
           printf("Grade A");
        }
        else if(marks>65){
           printf("Grade B"); 
        }
        else if(marks>40){
           printf("Grade C");
        }
        else if(marks>35){
           printf("Grade D");
        }
        else{
           printf("Grade F");
        }
  return 0;
        
    }
