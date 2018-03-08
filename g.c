#include<stdio.h>
int main()
{
	int A[10],I,j,t,n;
	scanf("%d",&n);
	for(I=0;I<n;I++)
	{
		scanf("%d",&A[I]);
	}
	for(I=0;I<n-1;I++)
	{
		for(j=I+1;j<n;j++)
		{
			if(A[I]>A[j])
			{
			t=A[I];
			A[I]=A[j];
			A[j]=t;
			}
		}
	}
	printf("%d",A[n/2]);
	return 0;
}
