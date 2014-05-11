#include <stdio.h>

#include<stdio.h>

	int dynamic()
	{
		int *ptr_one;

		ptr_one = *(int *)malloc(sizeof(int));

		char *ptr_two;
		ptr_two = (char*)malloc(sizeof(char)*256);

		if (ptr_one == 0)
		{
			printf("ERROR: Out of memory\n");
			return 1;
		}
		ptr_two[0]='a';
        ptr_two[1]='b';
		*ptr_one = 25;
		printf("%d\n", *ptr_one);
        printf("%c\n",ptr_two[0]);
		free(ptr_one);
        free(ptr_two);
		return 1;
	}
