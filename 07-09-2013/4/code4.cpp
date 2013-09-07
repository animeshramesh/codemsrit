#include<iostream>
#include<algorithm>	//needed for sorting the array

using namespace std;

int main()
{	int t;
	cin>>t;
	while (t--)		// Iterating through the test cases
	{	int students;
		cin>>students;
		vector<int> ref;	
		
		// Vectors are 'super' arrays. They can do a lot of cool stuff which arrays cant. :P
		
		for (int i=0; i<students;i++)
		{	int k;
			cin>>k;
			ref.push_back(k);
		}
		
		sort(ref.begin(),ref.end());	//Sorting the input 
		
		if (students < 3)				// Its going to be in an Arithmetic Progression series anyway if no. of students < 3
		{	printf("YES\n");
			continue;
		}
		int flag = 0;
		int diff = ref[1]-ref[0];		// Considering constant 'gap' or difference
		for (i=2; i<students; i++)
		{	if (ref[i]-ref[i-1]!=diff)
			{	flag++;
				break;
			}
		}
		if (flag == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
		
