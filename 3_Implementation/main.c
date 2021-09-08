#include "function.h"

//-----------------------------------------------------------------------------------------------------------------------------------------------------

/* function to show the operation menu*/
void menu(){
    int choice = 0,deptBookCnt,deptchoice;
	char dept_ty[30];
	int count1=0;
    do{
        printf("\n\n\n\n-------  CONTENTS  --------");
        printf("\n1.Add Books");
        printf("\n2.Search Books");
        printf("\n3.View Books");
        printf("\n4.Update Book");
		printf("\n5.Department Book Count");
        printf("\n0.Exit");
        printf("\n\n\nEnter choice => ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            count1=addingBook();
            break;
        case 2:
            searchBooks(count1);
            break;
        case 3:
            viewBooks(count1);
            break;
        case 4:
            updateBook(count1);
            break;
        case 5:
		    printf("\n\n\t\t\tSELECT DEPARTMENT :");
            printf("\n\t\t\t------------------------------------------------\n");
		    printf("\n\t\t\t1.Dictionary\n\t\t\t2.Health_Fitness\n\t\t\t3.Philosophy\n\t\t\t4.Textbook\n\t\t\t5.Autobiography\n\t\t\t6.Fiction\n\t\t\t7.Others");
			printf("\n\t\tMAKE CHOICE:");
			scanf("%d",&deptchoice);

			switch(deptchoice){
				case 1:strcpy(dept_ty,"Dictionary");
				break;
				case 2:strcpy(dept_ty,"Health_Fitness");
				break;
				case 3:strcpy(dept_ty,"Philosophy");
				break;
				case 4:strcpy(dept_ty,"Textbook");
				break;
				case 5:strcpy(dept_ty,"Autobiography");
				break;
				case 6:strcpy(dept_ty,"Fiction");
				break;
				case 7:strcpy(dept_ty,"Others");
				break;
				default:printf("Invalid choice");
			}
			//scanf("%s", dept_ty);
            deptBookCnt=noOfBooksByDepartment(dept_ty,count1);
			printf("NUMBER OF BOOKS: %d",deptBookCnt);
            break;
        case 0:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...");
        }                                            
    }
    while(choice!=0);                                        
}

//------------------------------------------------------------------------------------------------------------------------------------------------------

int main() 
{
	int Pin,pinflag;
    printf("\n\n\nWELCOME TO BOOK HOUSE\n");
    printf("------------------------------------------------");
	printf("\n\nPIN : ");
	scanf("%d",&Pin);
	pinflag = init(Pin);
	if(pinflag == 0)
    {
        printf("\nTRY AGAIN SOMETIME");
        exit(0);
    } 
    else 
    {
        printf("\nSUCCESSFUL");
    }
	menu();	
	return 0;
}