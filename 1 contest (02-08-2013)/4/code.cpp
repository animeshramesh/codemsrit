#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{

	int t;
	cin>>t;
	string s;	
	cin.ignore();
	string::iterator it;
		while(t--)
			{
				set<char> characters;
				getline(cin,s);
				for(it=s.begin();it!=s.end();it++)
					characters.insert(*it);
				cout<<characters.size()<<endl;
			}


	return 0;
}