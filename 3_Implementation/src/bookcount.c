#include "function.h"

/* gives count of book in particular category*/

int noOfBooksByCatagory(char cat_ty[],int count){
	int catagoryBookCount = 0;
	for (int i = 0; i < count; i++) {

				if (strcmp(cat_ty,
						book[i].catagory)
					== 0)
					catagoryBookCount++;
			} 
			return catagoryBookCount;
}