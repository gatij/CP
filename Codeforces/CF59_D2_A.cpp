#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		c++;
	}
	if(c<=((int)(s.length())-c))
	{
		for(int i=0;i<s.length();i++)
	{
		s[i]=tolower(s[i]);
	}
	}
	else
	{
		for(int i=0;i<s.length();i++)
	{
		s[i]=toupper(s[i]);
	}
	}
	cout<<s;
	return 0;
}
