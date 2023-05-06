#include<stdio.h>
int main ()
{
	int i,n,x,a[10];
	printf("enter the element");
	sacnf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	printf("\n enter the element");
	scanf("%d",&x);
	for (i=0;i<n;i++)
	if (i<n)
	printf("the element is %d",i);
		else
		{
			printf("the element is not found");
		}
	return 0;
}
