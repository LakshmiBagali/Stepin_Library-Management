#include "function.h"

/* edit the book information */
void updateBook(int count){
	int bookid,choosedeptr,flag=0;;
	printf("\n\n\t\t\tENTER BOOK ID:");
	scanf("%d",&bookid);
    printf("\n\t\t\t----------------------------------------------\n");
	
	for(int i=0;i<count;i++){
		if(book[i].books_id==bookid){
			flag=1;
			printf("\n\t\t\tBOOK ID%d",book[i].books_id);
			printf(" AVAILABLE.....");
			printf("\n\t\t\tEnter new name:"); // Enter the new book name
			scanf("%4s", book[i].bookName);
			printf("\n\t\t\tEnter new author:"); // Enter new author name
			scanf("%4s", book[i].authorName);
			printf("\n\t\t\tEnter new department = "); // Enter new department
	        printf("\n\t\t\t1.Dictionary\n\t\t\t2.Health_Fitness\n\t\t\t3.Philosophy\n\t\t\t4.Textbook\n\t\t\t5.Autobiography\n\t\t\t6.Fiction\n\t\t\t");
	        scanf("%d",&choosedeptr);
			switch(choosedeptr){  // switch to choose department 
				case 1:strcpy(book[i].department,"Dictionary");
		        break;
		        case 2:strcpy(book[i].department,"Health_Fitness");
		        break;
		        case 3:strcpy(book[i].department,"Philosophy");
		        break;
		        case 4:strcpy(book[i].department,"Textbook");
		        break;
		        case 5:strcpy(book[i].department,"Autobiography");
		        break;
		        case 6:strcpy(book[i].department,"Fiction");
		        break;
		        default:strcpy(book[i].department,"Others");
				}
			printf("\n\t\t\tEnter new no pages = ");
	        scanf("%d", &book[i].pages);
            printf("\n\t\t\tEnter new price = ");
	        scanf("%f", &book[i].price);
		}
	}
	if(flag==0)
		printf("\n\t\t\tBOOK NOT AVAILABLE");
}