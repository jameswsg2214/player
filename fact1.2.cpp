
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	int n,y=1;
	int get()
	{
	cin>>n;	
	return 0;	
	}
	int calc()
	{
		for(int i=1;i<=n;i++)
		{
			y=y*i;
		}
		cout<<y;
	return 0;	
	}
};
int main()
{
   sample s;
   s.get();
   s.calc();
   return 0;
}
