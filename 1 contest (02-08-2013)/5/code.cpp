#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int t,i;
	char s[200],alphabets[]="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int result,temp;
	cin>>t;
	while(t--)
	{
		result=temp=0;
		scanf("%s",s);
		for(i=0;s[i]!='\0';i++)
		{
			if(!isdigit(s[i]))
				printf("your input contains a non-number dumbass!");
			result+=s[i]-'0';
			if(result>9)
			{
				temp=result%10;
				result/=10;
				result+=temp;
			}
			//printf("%d:",result);
		}
		//result*=2;
		printf("%c\n",alphabets[result]);


	}

	return 0;
}
