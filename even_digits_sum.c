#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,p=0;
	scanf("%d",&n);
	do
	{
		r=n%10;
		if(r%2==0)
		p=p+r;
		n=n/10;
	}while(n!=0);
	printf("%d",p);
	return 0;
}
