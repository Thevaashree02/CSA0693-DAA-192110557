#include<stdio.h>
int main()
{
	int A[5][5],B[5][5],C[5][5];
	int i,j,k,l,m,n;
	printf("enter the rows and columns of A: \n");
	scanf("%d%d",&n,&m);
	printf("enter the rows and columns of B: \n");
	scanf("%d%d",&m,&l);
	printf("enter the elements of matrix A: \n");
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&A[i][j]);
	printf("enter the elements of matrix B: \n");
	for(j=0;j<m;j++)
	for(k=0;k<l;k++)
	scanf("%d",&B[j][k]);
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		{
			C[i][k]=0;
			for(j=0;j<m;j++)
			{
				C[i][k]=C[i][k]+A[i][j]*B[j][k];
			}
		}
	}
	printf("the matrix is....\n");
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		printf("%d\t",C[i][k]);
		printf("\n");
	}
}
