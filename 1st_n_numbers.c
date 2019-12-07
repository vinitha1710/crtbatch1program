#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
		//for(i=0;i<=n;i=i+2)   //for even numbers
	for(i=1;i<=n;i=i+2)        //for odd numbers
	printf("%d",i);
	return 0;
}
