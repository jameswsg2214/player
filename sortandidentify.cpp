#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
    int n,k,i,a[10],count=0;
	int get()

	{
cin>>n>>k;
for(i=0;i<n;i++){
	cin>>a[i];
}
}


	int calc()

	{
		sort(a,a+n);
		for(i=0;i<n;i++){
		if(a[i]==k)
		count++;
		}	
		if(count>0)
		cout<<"yes";
		else
		cout<<"no";
		
		
		
	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
