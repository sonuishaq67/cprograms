#include <stdio.h>
struct book readBook();
void displayBook(struct book);
struct book
{
    int price, year;
    char author[20], title[20];
};
int main()
{
    struct book book1;
    book1 = readBook();
    displayBook(book1);
}
struct book readBook()
{
    struct book book1;
    printf("price\tyear\tauthor\ttitle\n");
    scanf("%d %d %[^\n] %[^\n]", &book1.price, &book1.year, book1.author, book1.title);
    return book1;
};
void displayBook(struct book book1)
{
    printf("the price of the book %d and year published is %d,the author %s,title %s\n", book1.price, book1.year, book1.author, book1.title);
}
