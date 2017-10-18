#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main() {
	struct node * list;
	struct node * next = 0;
	int count = 63;
	while(count >= 0){
		list = insert_front(next, count);
		next= list;
		count -= 3;;
	}
	//Test Printing the list
	print_list(list);
	//Delete/free the list
	free_list(list);

  return 0;
}
