#include <iostream>

using namespace std;
class Feb{
public:
    int i,n,m,p,len;
    int get()
    {
cin>>n>>m;
return 0;
    }
    int calc()
    {
if(n<=100000&&m<=100000){
 if(n<m)       {
len=n;}
else
{
len=m;
 }
 for(i=2;i<=len;i++)
 {
     if(n%i==0 && m%i==0)
     {
         cout<<i;
         break;
     }
else {
    cout<<"dived by 1 only";
    break;
}
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
