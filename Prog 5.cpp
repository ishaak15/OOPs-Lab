#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    int i=0;
    string s;
    cin>>s;
    for(i=0;s[i]!='\0';i++);
    cout<<i<<endl;
    return 0;

}
