#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
    int i,k,n,c,count=0;
	int get()
{
cin>>n;
}
int calc(){
	for(i=1;i<n;i++){
		k=pow(2,i);
		if(n==k){
		count++;
		i=n;
		}
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
