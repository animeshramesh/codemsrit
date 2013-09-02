#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <sstream>
#define ll long long int
using namespace std;
typedef stringstream sss;
int main()
{

	int t;
	scanf("%d\n\n",&t);
	string s;
	



	while(t--)
	{

		getline(cin,s);
		replace(s.begin(),s.end(),'+',' ');
		replace(s.begin(),s.end(),'=',' ');
		stringstream ss(s);
		string a,b,c;
		ss>>a;
		ss>>b;
		ss>>c;
		
		if(a.find("codemsrit")!=string::npos)
		{
						ll ba,ca;
						sss bas,cas;
						bas<<b;
						cas<<c;
						bas>>ba;
						cas>>ca;

						printf("%lld+%lld=%lld\n",ca-ba,ba,ca);
		}

		else if(b.find("codemsrit")!=string::npos)
		{
						ll ba,ca;
						sss bas,cas;
						bas<<a;
						cas<<c;
						bas>>ba;
						cas>>ca;

						printf("%lld+%lld=%lld\n",ba,ca-ba,ca);
		} 
		else if(c.find("codemsrit")!=string::npos)
		{
						ll ba,ca;
						sss bas,cas;
						bas<<b;
						cas<<a;
						bas>>ba;
						cas>>ca;

						printf("%lld+%lld=%lld\n",ca,ba,ca+ba);
		} 
 
		scanf("\n");

	}



	return 0;
}
