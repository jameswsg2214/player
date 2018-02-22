
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	int temp;
	int sum = 0;
	int get()
	{
	cin>>temp;	
	return 0;	
	}
	int calc()
	{
	while (temp)
	{
		sum*=10;
		sum += temp%10;
		temp/=10;
	}
	cout<<sum;
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
