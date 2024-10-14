#include <bits/stdc++.h>
using namespace std;
bool giaTri1 (int a, int b)
{
	return abs(a) < abs(b);
}

bool Giatri2 (int a, int b)
{
	return abs(a) > abs(b);
}

int a[1000005];
int main()
{
	int n;
	cin>>n;
	for  (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	
	sort (a,a+n,giaTri1);
	for (int i=0; i<n; i++)
	{  
	    if (a[i]%2!=00)
	    {
	    	cout<<a[i]<<endl;
		}
	}
	
	sort (a,a+n,Giatri2);
	for (int i=0; i<n; i++)
	{
		if (a[i]%2==0)
		{
			cout<<a[i]<<endl;
		}
	}
	return 0;
}
