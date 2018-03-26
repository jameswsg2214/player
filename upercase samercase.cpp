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

for(int i=0;i<n;i++){
if(s[i]>96)
		{
			s[i]=s[i]-32;
		}
		else if(s[i]<91)
		{
			s[i]=s[i]+32;
		}	
}
cout<<s;
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
