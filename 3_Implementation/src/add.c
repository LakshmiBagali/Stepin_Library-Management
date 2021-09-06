#include "function.h"

/* Add book information */
int addingBook()
{
    int chooseCatg;
    printf("ADD NEW BOOKS");
    printf("\n\n\t\t\tENTER YOUR DETAILS BELOW:");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\tBook ID NO  = ");
    scanf("%u",&book[count].books_id);
    printf("\n\t\t\tEnter book name = ");
	scanf("%s", book[count].bookName); // enter book name
	printf("\n\t\t\tEnter author name = ");
	scanf("%s", book[count].authorName); // enter a author name 
	printf("\n\t\t\tEnter catagory = ");
	printf("\n\t\t\t1.History\n\t\t\t2.Arts_Music\n\t\t\t3.Biograhies\n\t\t\t4.Bussiness\n\t\t\t5.Comics\n\t\t\t6.Computer_Tech\n\t\t\t");
	scanf("%d",&chooseCatg);
	switch(chooseCatg){ // switch to choose category 
		case 1:strcpy(book[count].catagory,"History");
		break;
		case 2:strcpy(book[count].catagory,"Arts_Music");
		break;
		case 3:strcpy(book[count].catagory,"Biograhies");
		break;
		case 4:strcpy(book[count].catagory,"Bussiness");
		break;
		case 5:strcpy(book[count].catagory,"Comics");
		break;
		case 6:strcpy(book[count].catagory,"Computer_Tech");
		break;
		default:strcpy(book[count].catagory,"Others");
	}
	//scanf("%s", book[count].catagory);
	//strcpy(book[count].catagory,"History");
	printf("\n\t\t\tEnter pages = ");
	scanf("%d", &book[count].pages);
    printf("\n\t\t\tEnter price = ");
	scanf("%f", &book[count].price);
	count++;
	return count;
	//printf("%d",count);
}
