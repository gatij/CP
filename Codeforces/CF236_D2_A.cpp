#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	set<char>myset;
	int l=s.length();
	for(int i=0;i<l;i++)
	{
		myset.insert(s[i]);
	}
	if(myset.size()%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
	return 0;
}
