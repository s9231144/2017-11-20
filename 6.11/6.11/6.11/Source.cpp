#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j,tmp;
	
	int a[10] = { 2,6,4,8,10,12,89,68,45,37 };
	int d = 10; 


		for (i = 0; i < d; i++)
		{
			int f = 0;
			for (j = 0; j<d - 1; j++)
			{
				if (a[j]>a[j + 1])
				{
					tmp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = tmp;
					f = 1;
				}

			}
			if (f!=1)break;
			printf("Loop %d : ", i);
			for (j = 0; j < d; j++)
				printf("%4d", a[j]);
			printf("\n");
		}
	
	system("pause");
}
