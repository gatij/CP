#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,x,y,c1=0,c2=0,c3=0,c4=0;
	string s;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>x>>y;
		if(x>0 &&y>0)
		{
			c1=1;
		}
	    else if(x>0 &&y<0)
		{
			c2=1;
		}
		else if(x<0 &&y>0)
		{
			c3=1;
		}
		else if(x<0 &&y<0)
		{
			c4=1;
		}
	}
	cout<<c1+c2+c3+c4;
	return 0;
}
