#include <stdio.h>
#include <string.h>

typedef struct Books
{
    char title [50];
    char author [50];
    char subject[100];
    int book_id;
}Book;

int main()
{
    Book book;

    strcpy(book.title,"C教程");
    strcpy(book.author,"Runoob");
    strcpy(book.subject,"编程语言");
    book.book_id = 12345;

    printf ("书标题：%s\n",book.title);
    printf ("书作者：%s\n",book.author);

    return 0;
    
}