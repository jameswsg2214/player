#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class sample
{

	public:
	    string s;
	    int n,i;
	int get()

	{
cin>>s;

return 0;

	}

	int calc()

	{
	    n=s.size();
	    for(i=0;i<n;i++){
	    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            s[i]=0;
	    }
	    }
	return 0;

	}
	int display(){
	    for(i=n-1;i>=0;i--){
	    if(s[i]!=0){
		cout<<s[i];
	    }
		}
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
