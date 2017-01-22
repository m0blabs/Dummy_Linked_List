/*
  Dummy Linked List
  Proudly by: Kingm0b_
*/

#include <stdio.h>
#include <stdlib.h>

static void init(int *** ptr)
{
	if (*ptr != (int **) NULL)
		return;

	*ptr = (int **) malloc(sizeof(int **));

	if (!ptr) {
		fprintf(stderr, " error: malloc()\n");
		exit(1);
	}

	**ptr = (int *) NULL;
}

static void insert(int ** ptr)
{
	while (*ptr != (int *) NULL)
		ptr = (int **) *ptr;

	*ptr = (int *) malloc(sizeof(int **));
	**ptr = (int) NULL;
}

static void print_linked_list(int ** ptr)
{
	while (ptr != NULL) {
		printf(" %p ->", *ptr);
		ptr = (int **) *ptr;
	}

	printf("\b\b  \n"); // Erase the last little arrow
}

int main(void)
{
	int ** head = NULL;

	init(&head);
	for (int c = 0; c < 9; c++)
		insert(head);

	print_linked_list(head);

	return 0;
}