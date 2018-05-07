#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='A')
		c++;
	}
	if(c==(n-c))
	{
		cout<<"Friendship";
	}
	else if(c>(n-c))
	{
		cout<<"Anton";
	}
	else
	{
		cout<<"Danik";
	}
	return 0;
}
