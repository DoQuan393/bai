#include <bits/stdc++.h> 
using namespace std;
int main() 
{
    string xau;
    getline(cin, xau);

    const int n= 100;
    int viTri[n], dem = 0;
    
    bool kt=false;
    for (int i = 0; i < xau.size(); ++i) {
        if (isdigit(xau[i]) && dem < n)
		 {
            viTri[dem++] = i;
            kt=true;
        }
    }
    
    for (int i = 0; i < dem; ++i) {
        cout << viTri[i] <<endl;
        kt=true;
    }
    
     if (!kt)
     {
     	cout<<"KHONG";
	 }
    return 0;
}
