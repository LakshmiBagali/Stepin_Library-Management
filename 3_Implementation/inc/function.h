#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOK_NAME   50
#define MAX_AUTHOR_NAME 50
#define MAX_DEPARTMENT_NAME 50

/**
 * @brief structure for a book information
 * 
 */
struct booksInfo
{
    unsigned int books_id; 
    char bookName[MAX_BOOK_NAME];
    char authorName[MAX_AUTHOR_NAME];
    char department[MAX_DEPARTMENT_NAME];
    int pages;
	float price;
};

struct booksInfo book[10];
static int count=0;

/**
 * @brief take pin as input and returns the result
 * 
 * @param pin 
 * @return int 
 */
int init(int pin);

/**
 * @brief add book info and return number of books
 * 
 * @return int 
 */
int addingBook();

/**
 * 
 * @brief function to search for book based on the book name
 * 
 */
void searchBooks();

/**
 * @brief function to list the books
 * 
 */
void viewBooks();

/**
 * @brief to edit the book information with help of bood Id
 * 
 */
void updateBook();

/**
 * @brief return the number of books in particular category
 * 
 * @param dept_ty 
 * @param count 
 * @return int 
 */
int noOfBooksByDepartment(char dept_ty[],int count);

#endif /* #define _FUNCTION_H__ */
