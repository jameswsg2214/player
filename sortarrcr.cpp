// Example program
#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
	
	int n,x=0;
		int a[];
	int get()
	{
	cin>>n;

	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	return 0;	
	}
	int calc()
	{
	    
	    sort(a,a+n);
	   	for(int i=n-1;i>=n/2;i--)
	{
	    cout<<a[i]<<" ";
	    if(x<n/2){
	        cout<<a[x]<<" ";
	        x++;
	    }
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
