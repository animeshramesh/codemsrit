#include<stdio.h>

int main()
{	int t;
	float D,S1,S2,k,ans;
	scanf("%d",&t);
	while(t--)
	{	scanf("%d%d%d",&D,&S1,&S2);
		k = S1/S2;
		ans = (k*D)/(1+k);
		printf("%.2f\n",ans);
	}
	return 0;
}
		
