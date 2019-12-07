#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 if(n%i==0)
	 count++;
	}
	if(count==2)
	printf("prime");
	else
	printf("not prime");
	return 0;
	
}



#include<stdio.h>
int main()
{
	int n,i,flag=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	 if(n%i==0)
	 {
	     flag=1;
	     break;
	 }
	}
	if(flag==0)
	printf("prime");
	else
	printf("not prime");
	return 0;
	
}


//prints 1st n prime numbers
#include<stdio.h>
int main()
{
	int n,i,flag,j;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	   flag=0;
	   for(j=2;j<=i/2;j++)
	   {
	      if(i%j==0)
	      {
	         flag=1;
	         break;
	      }
	   }   
	if(flag==0)
	printf("%d ",i);
	}
    return 0;
	
}
