#include "function.h"

/* gives count of book in particular category*/

int noOfBooksByDepartment(char cat_ty[],int count){
	int departmentBookCount = 0;
	for (int i = 0; i < count; i++) {

				if (strcmp(cat_ty,
						book[i].catagory)
					== 0)
					departmentBookCount++;
			} 
			return departmentBookCount;
}