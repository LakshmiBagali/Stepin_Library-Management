#include "function.h"

/* Add book information */
int addingBook()
{
    int choosedeptr;
    printf("ADD NEW BOOKS");
    printf("\n\n\t\t\tENTER YOUR DETAILS BELOW:");
    printf("\n\t\t\t---------------------------------------------------------------------------\n");
    printf("\n\t\t\tBook ID NO  = ");
    scanf("%u",&book[count].books_id);
    printf("\n\t\t\tEnter book name = ");
	scanf("%s", book[count].bookName); // enter book name
	printf("\n\t\t\tEnter author name = ");
	scanf("%s", book[count].authorName); // enter a author name 
	printf("\n\t\t\tEnter department = ");
	printf("\n\t\t\t1.Dictionary\n\t\t\t2.Health_Fitness\n\t\t\t3.Philosophy\n\t\t\t4.Textbook\n\t\t\t5.Autobiography\n\t\t\t6.Fiction\n\t\t\t");
	scanf("%d",&choosedeptr);
	switch(choosedeptr){ // switch to choose department 
		case 1:strcpy(book[count].department,"Dictionary");
		break;
		case 2:strcpy(book[count].department,"Health_Fitness");
		break;
		case 3:strcpy(book[count].department,"Philosophy");
		break;
		case 4:strcpy(book[count].department,"Textbook");
		break;
		case 5:strcpy(book[count].department,"Autobiography");
		break;
		case 6:strcpy(book[count].department,"Fiction");
		break;
		default:strcpy(book[count].department,"Others");
	}
	//scanf("%s", book[count].department);
	//strcpy(book[count].department,"History");
	printf("\n\t\t\tEnter pages = ");
	scanf("%d", &book[count].pages);
    printf("\n\t\t\tEnter price = ");
	scanf("%f", &book[count].price);
	count++;
	return count;
	//printf("%d",count);
}
