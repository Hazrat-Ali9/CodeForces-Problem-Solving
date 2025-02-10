#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m,n;
	while(cin>>m)
	{
		n=0;
		n=2*(m/3);
		if(m%3>0)
			n++;
		cout<<n<<endl;
	}
	return 0;
}
