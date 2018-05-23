#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
class sample
{
	public:
    int i,k[100],n,c,count=0;
	int get()
{
cin>>n;
for(i=0;i<n;i++){
	cin>>k[i];
}
}
int calc(){
	for(i=0;i<n;i++){
		if(k[i]>=k[i+1]){
		count++;
		}
	}
	if(count>0)
	cout<<"no";
	else 
	cout<<"yes";
	}

};

int main()

{

   sample s;

   s.get();

   s.calc();

   return 0;

}
