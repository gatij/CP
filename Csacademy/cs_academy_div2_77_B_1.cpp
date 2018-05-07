#include <iostream>     // std::cout, std::fixed
#include <iomanip>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long d1,d2,k,mn,mx,diff;
	double f=2.000000,ans;
	std::cin>>d1>>d2>>k;
	diff=abs(d2-d1);
	mn=min(d1,d2);
	mx=max(d1,d2);
	if(diff<=k)
	{
		mn+=diff;
		k-=diff;
		mx+=(k/2);
		mn+=(k-(k/2));
	}
	else
	{
		mn+=k;
	}
	
	ans=(float)((float)(mx)*(float)(mn)/f);
	//cout<<mn<<" "<<mx<<" "<<ans<<"\n";
	cout<<std::setprecision(6)<<ans;
	return 0;
}
