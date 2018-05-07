#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h1,a1,c1,h2,a2,c=0;
	vector<string> v;
	cin>>h1>>a1>>c1>>h2>>a2;
	while(h2>0)
	{
		if(h2<=a1)
		{
			c++;
			v.push_back("STRIKE");
			h2-=a1;
		}
		else
		{
			if(h1<=a2)
			{
				h1+=c1;
				c++;
				v.push_back("HEAL");
				h1-=a2;
			}
			else
			{
				h2-=a1;
				c++;
				h1-=a2;
				v.push_back("STRIKE");
			}
		}
	}
	cout<<c<<"\n";
	for(int i=0;i<c;i++)
	{
		cout<<v[i]<<"\n";
	}
	return 0;
}
