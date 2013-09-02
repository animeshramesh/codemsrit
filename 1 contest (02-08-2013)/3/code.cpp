#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{

	string s,temp;
	string::iterator it;
	int t,denominator,numerator;
	cin>>t;
	cin.ignore();
	//getline(cin,s);
	while(t--)
	{
		denominator=numerator=0;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>temp)
			{
				denominator++;
				for(it=temp.begin();it!=temp.end();++it)
						if((*it>=65 && *it<=90)||(*it>=97 && *it<=122))
							numerator++;
			}
			//cout<<numerator<<":"<<denominator<<endl;
			cout<<numerator/denominator<<endl;
		
	}
	return 0;
}