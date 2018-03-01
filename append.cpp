#include <iostream>
#include <string>
using namespace std;

void appendDemo(string str)
{

    str.append(1, '.');
    cout << "After append() : ";
    cout << str;
  
}

int main()
{
    string str;
  cin>>str;
    cout << "Original String : " << str << endl;
    appendDemo(str);
   
    return 0;
}
