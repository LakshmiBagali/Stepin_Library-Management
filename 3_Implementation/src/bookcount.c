#include "function.h"

/* gives count of book in particular department*/

int noOfBooksByDepartment(char cat_ty[],int count){
	int departmentBookCount = 0;
	for (int i = 0; i < count; i++) {

				if (strcmp(cat_ty,
						book[i].department)
					== 0)
					departmentBookCount++;
			} 
			return departmentBookCount;
}