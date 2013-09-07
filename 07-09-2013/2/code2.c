#include<stdio.h>

int main()
{	int t,LL,UL,count,flag,i,j;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d",&LL);
		scanf("%d",&UL);
		count = 0;
		for (i=LL;I<=UL;i++)
		{	flag = 0;
			for (j=2;j<=sqrt(i);j++)
			{	if((i%j)==0)
				{	flag++;
					break;
				}
			}
			if (flag==0)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
