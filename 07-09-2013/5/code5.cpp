#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	string s;
	getline(cin,s);
	cout<<string(s.rbegin(),s.rend())<<endl;
	
	}
	
	return 0;
}
