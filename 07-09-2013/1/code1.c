#include<stdio.h>

int main()
{	int i,t,no_of_classes,no_of_students,total;
	scanf("%d",&t);
	while (t--)
	{	total = 0;
		scanf("%d", &no_of_classes);
		for (i=0; i<no_of_classes;i++)
		{	scanf("%d",&no_of_students);
			total = total + no_of_students;
		}
		printf("%d\n",total);
	}
	return 0;
}
