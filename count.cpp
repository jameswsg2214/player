#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
    int i,a,n,c,count=0;
	int get()
{
cin>>a>>n;
}
int calc()
	{
		while(a>0){
			c=a%10;
			a=a/10;
			if(c==n){
				count++;
			}
		}
		cout<<count;
	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
