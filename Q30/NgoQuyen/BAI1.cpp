#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int dem=0;
	int demt=0;
	
	for(char c : s)
	{
		if(isalpha(c))
		{
			if(islower(c))
			{
				dem++;
			}
			if(isupper(c))
			{
				demt++;
			}
		}
	}
	cout<<dem<<" "<<demt;
	
	return 0;
}
