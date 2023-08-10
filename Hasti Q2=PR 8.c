#include<stdio.h>

  udf(int b)
    {
    	int cube=b*b*b;
    	
    	printf("Cube is: %d",cube);
	}
void main()
{
	int b;
    int n;
	int i,j;
	int a[10][10];

    printf(" Enter array's size :- ");
	scanf("%d",&n);
		
	int *p[n][n];
		
	
		printf("Enter array's elements  : \n");
	
    	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("array[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		p[i][j]=&a[i][j];
		}
	}
	
	printf("Cube of each elements : \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		*p[i][j] = (*p[i][j])* (*p[i][j]) * (*p[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("a[%d][%d] = %d\n",i,j,*p[i][j]);
		}
	}
}

/*
 Enter array's size :- 2
Enter array's elements  :
array[0][0] = 2
array[0][1] = 3

array[1][0] = 4
array[1][1] = 5

Cube of each elements :
a[0][0] = 8
a[0][1] = 27
a[1][0] = 64
a[1][1] = 125
*/
