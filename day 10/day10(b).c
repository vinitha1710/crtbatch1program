#include <stdio.h>

int main()
{
    int p=0,n,i,r,a;
    scanf("%d",&n);
    i=n;
    a:
    while(n!=0)
    {
     r=n%10;
     p=p+r;
     n=n/10;
    }
    if(p>9)
    {
      n=p;
      p=0;
      goto a;
    }
    printf("%d",p);
    return 0;
}
