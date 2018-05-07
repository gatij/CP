#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	cin>>a>>b;
	//double f=1.5;
	int x;
	x=((log10(b)-log10(a))/(log10(3)-log10(2)));
	x++;
	cout<<x;
	return 0;
}
