#include "function.h"

/* edit the book information */
void updateBook(int count){
	int bookid,chooseCatg,flag=0;;
	printf("\n\n\t\t\tENTER BOOK ID:");
	scanf("%d",&bookid);
    printf("\n\t\t\t----------------------------------------------\n");
	
	for(int i=0;i<count;i++){
		if(book[i].books_id==bookid){
			flag=1;
			printf("\n\t\t\tBOOK ID%d",book[i].books_id);
			printf(" AVAILABLE.....");
			printf("\n\t\t\tEnter new name:"); // Enter the new book name
			scanf("%s", book[i].bookName);
			printf("\n\t\t\tEnter new author:"); // Enter new author name
			scanf("%s", book[i].authorName);
			printf("\n\t\t\tEnter new department = "); // Enter new catagory
	        printf("\n\t\t\t1.History\n\t\t\t2.Arts_Music\n\t\t\t3.Biograhies\n\t\t\t4.Bussiness\n\t\t\t5.Comics\n\t\t\t6.Computer_Tech\n\t\t\t");
	        scanf("%d",&chooseCatg);
			switch(chooseCatg){  // switch to choose category 
				case 1:strcpy(book[i].department,"History");
		        break;
		        case 2:strcpy(book[i].department,"Arts_Music");
		        break;
		        case 3:strcpy(book[i].department,"Biograhies");
		        break;
		        case 4:strcpy(book[i].department,"Bussiness");
		        break;
		        case 5:strcpy(book[i].department,"Comics");
		        break;
		        case 6:strcpy(book[i].department,"Computer_Tech");
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