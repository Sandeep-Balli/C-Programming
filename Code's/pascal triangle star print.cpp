#include<stdio.h>
int main()
{
	int i,j,k,row;
	printf("Enter the no of rows :");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			if(k==1 ||k==i)
			printf("1 ");
			else
			printf("%d ",i-k-1);
		}
		printf("\n");
	}
	return 0;
}
