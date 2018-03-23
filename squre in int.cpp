#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class sample
{

	public:
	    int n,s,d,c=0;
	int get()

	{
cin>>n;

return 0;

	}

	int calc()

	{
	    while(n>0){
	    	s=n%10;
	        	n=n/10;
	        	d=pow(s,2);
	    	c=c+d;
	     }

	return 0;

	}
	int display(){
		cout<<c;
	}

};

int main()

{

   sample s;
   s.get();
   s.calc();
   s.display();
   return 0;

}
