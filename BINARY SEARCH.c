#include<stdio.h>
int main()
{
	int A[10],i,n,flag=0,key,f,l,mid;
	printf("enter the no of elements: \n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("enter the element to be search:");
	scanf("%d",&key);
	f=0;
	l=n-1;
	while(f<=l)
	{
		mid=(f+l)/2;
		if(A[mid]==key)
		{
			flag=1;
			break;
		}
		else if(A[mid]<key)
		f=mid+1;
		else if(A[mid]>key)
		l=mid-1;
	}
	if(flag==1)
	printf("element is found");
	else
	printf("element is not found");
}
