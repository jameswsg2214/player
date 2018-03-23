#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class sample
{

	public:
	    int n,s[100],i,j;
	int get()

	{
cin>>n;
for(i=0;i<n;i++){
cin>>s[i];
}
return 0;

	}

	int calc()

	{
	    for(i=0;i<n;i++){
                int count=0;
        for(j=0;j<n;j++){

            if(s[i]==s[j] && i!=j){
                count=count+1;
            }
        }
        if(count==0)    {
            cout<<s[i];
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
