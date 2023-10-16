#include<stdio.h>
int main()
{
	int n=5,k=4,i,j,s;
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(j=0;j<2*i+1;j++)
		printf("*");
		printf("\n");
		
	}
	for(i=0;i<k;i++)
	{
		for(s=0;s<i+1;s++)
		printf(" ");
		for(j=0;j<2*(k-i)-1;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}

