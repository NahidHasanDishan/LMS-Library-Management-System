#include <stdio.h>
#include <stdlib.h>

struct books {
    int id;
    char bookName[50];
    char authorName[50];
    char date[12];
};

void booksList()
{
    FILE *fp;
    struct books b;

    system("cls");
    printf("<== Available Books ==>\n\n");
    printf("%-10s %-30s %-20s %s\n\n",
           "Book id", "Book Name", "Author", "Date");

    fp = fopen("books.txt", "rb");
    if (!fp) {
        printf("File Error! No books found.\n");
        return;
    }

    while (fread(&b, sizeof(b), 1, fp) == 1) {
        printf("%-10d %-30s %-20s %s\n",
               b.id, b.bookName, b.authorName, b.date);
    }
    fclose(fp);
}


int isValidListCount(int count)
{
    return (count > 0);
}