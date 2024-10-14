#include <bits/stdc++.h>
using namespace std;

int a[100005];
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int maxLength = 0;
	for(int i=0;i<n;i++)
	{
		int tong = 0;
		for(int j=i;j<n;j++)
		{
			tong+=a[j];
			if(tong%k==0)
			{
				maxLength = max(maxLength, j - i + 1);
			}
		}
	}
	cout<<maxLength;
	
	return 0;
}
