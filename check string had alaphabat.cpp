#include <iostream>

using namespace std;
class Feb{
public:
    string s;
    int get()
    {
cin>>s;
return 0;
    }
    int calc()
    {
int n=s.size();
int count=0;
for(int i=0;i<n;i++){
	
	if(isalpha(s[i])){
		count=1;
	}
	
}
if(count>=1)
	cout<<"no";
else
cout<<"yes";
return 0;
    }
};
int main()
{
    Feb s;
    s.get();
    s.calc();
    return 0;
}
