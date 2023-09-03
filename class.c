#include <stdio.h>

int main()
{
	int i,n,c;
	int a[10000];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=a[1];
	for(i=1;i<=n;i++)
	{
		if(a[i]<c)
		{
			c=a[i];
		}
	}
	printf("%d\n",c);
	return 0;
}