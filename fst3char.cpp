#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	string s;
    int i,n,count=0;
	int get()

	{
cin>>s;

}


	int calc()

	{
		n=s.size();
		for(i=0;i<n;i++){
		if(i==0)
		cout<<s[i];
		else if(i%3==0)
		cout<<s[i];
		
		}
		
		
	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
