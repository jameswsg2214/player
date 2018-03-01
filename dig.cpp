// Example program
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
class sample
{
public:
	int i,j,c=0;
	int a[10][10];
	int get(int n)
	{
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
		}
	return 0;	
	}
	int calc(int n)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
		{
			if(i==j)
			{
			    c=c+a[i][j];
			}
			
		}
		}
		while(i==0){
		    
			}
		cout<<c;
	return 0;	
	}
};
int main()
{
   sample s;
   int c;
   cout<<"enter";
   cin>>c;
   s.get(c);
   s.calc(c);
   return 0;
}
