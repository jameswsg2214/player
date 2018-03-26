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
if(s[i]==' ')
		{
		count=count+1;
		}
if(count==0|| count<1){
    cout<<s[i];
}
else if(count==1){
    cout<<" ";
}
}
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
