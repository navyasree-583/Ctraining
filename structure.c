#include<stdio.h>
typedef struct book_rec{
    char book_name[31];
    int nofpages;
    char auth[31];
    float cost;
    int qoh;
} BOOK;

int main(){
    BOOK book;

    
    printf("Input book name\n");
    gets(book.book_name);

    printf("Input No of pages\n");
    scanf("%d",&book.nofpages);

    getchar();
    printf("Input author name\n");
    gets(book.auth);

    printf("Input cost\n");
    scanf("%f",&book.cost);

    printf("Input Qty of books\n");
    scanf("%d",&book.qoh);
    //printf("Size of the book re %d\n", sizeof(struct book_rec));
    printf(" Book name: %s\n No of pages: %d\n Author name: %s\n Cost :%.2f\n Qty of books :%d\n",book.book_name, book.nofpages, book.auth, book.cost, book.qoh);
    return 0;
}