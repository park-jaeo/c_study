#include <stdio.h>
#include "book_str.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#define REALLOC_COUNT 5

// 단일 포인터를 인자로 전달하면, 기존 포인터 위치가 변경되기 때문에
// 2중 포인터를 인자로 전달한다.
int get_book_info(Book * book, int i)
{    
    printf(" # %d번 도서 정보 입력 #\n\n", i+1);
    printf("저자 : ");
    fgets(book[i].author, sizeof(book[i].author), stdin);
    printf("제목 : ");
    fgets(book[i].subject, sizeof(book[i].subject), stdin);

    printf("페이지 수 : ");
        
    scanf("%d", &book[i].page);
    getchar();
    
    printf("계속 입력하시겠습니까? [원하지 않을경우 N 입력]");
    char sig = getc(stdin);
    getchar();
            
    sig = toupper(sig);

    return sig;
}


void print_book_info(Book * book, int size)
{
    for(int i = 0; i < size ; i++)
    {
        printf(" # %d번 도서 정보 입력 #\n\n", i+1);
        printf("저자 : ");
        printf("%s", book[i].author);
        printf("제목 : ");
        printf("%s", book[i].subject);
        printf("페이지 수 : ");
        printf("%d", book[i].page);
        printf("\n\n");
    }
    
}

int main()
{
    int size = 0;
    int nsize = REALLOC_COUNT;
    char sig;
    int i=0;

    // initial memory allocation
    Book * book = (Book *)malloc(sizeof(Book)*3);

    for(int i=0 ; i < 3 ; i++) {
        sig = get_book_info(book , i);
        size++;
    }

    // memory reallocation
    while(sig != 'N'){
        if(size == nsize) {
            book = (Book *)realloc(book,sizeof(Book)*(size+REALLOC_COUNT));
            size += REALLOC_COUNT;
            nsize = size+REALLOC_COUNT;
        }
        else {
            for(int i=0 ; i < nsize-size && sig !='N' ; i++){
                sig = get_book_info(book , i);
            }
        }
    }
    print_book_info(book,size);    
    free(book);

    return 0;
}