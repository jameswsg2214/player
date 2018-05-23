#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
    int i,a,n,c=0,count=0;
	int get()
{
cin>>n;
}
int calc(){

	if(n%5==0){
		n=n/5;
		n=n*3;
	}
	else{
		c=n%5;
		n=n/5;
		n=n*3;
		if(c<=2)
			n=n+1;
		else
		n=n+2;
	}
	cout<<n;
	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
