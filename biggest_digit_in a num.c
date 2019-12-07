
#include<stdio.h>
int main()
{
	int n,i,r;
	scanf("%d",&n);
	i=0;
	r=0;
	while(n!=0)
	{
		r=n%10;
		if(r>i)
		i=r;
		n=n/10;
	}
			printf("%d",i);
	return 0;
}

