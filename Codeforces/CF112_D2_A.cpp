#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		{
			
		}
		else
		{
			s1[i]=(s1[i]-'A');
			s1[i]='a'+(s1[i]);
		}
		if(s2[i]>='a'&&s2[i]<='z')
		{
			
		}
		else
		{
			s2[i]=(s2[i]-'A');
			s2[i]='a'+(s2[i]);
		}
	}
	if(s1==s2)
	cout<<"0";
	else if(s1>s2)
	cout<<"1";
	else
	cout<<"-1";
	return 0;
}
