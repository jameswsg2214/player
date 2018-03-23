#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	string s;
	int get()
	{
	cin>>s;	
	return 0;	
	}
	int calc()
	{
		if(s[0]=='s'||s[0]=='S'){
			cout<<"yes";
		}
		else{
			cout<<"no";
		}
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
