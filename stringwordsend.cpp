#include <iostream>


#include<bits/stdc++.h>

using namespace std;

class sample

{

	public:
	    string a;    int n,i,count=0;
	int get()

	{
cin>>a;
}


	int calc()

	{
		n=a.size();
		for(i=0;i<n;i++){
			
			if(a[i]=='('){
				count++;
			}
			else if(a[i]==')'){
				count--;
			}
		}
		if(count==0)
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
