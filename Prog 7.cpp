#include<iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int strend(string s,string t)
{
    int i,j,k,x=0,f=0;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++);


    for(k=i-j;k<i;k++)
    {
        if(s[k]==t[x])
            f++;
        //cout<<s[k]<<endl;

        x++;
    }
    if(f==j)
        return 1;
    else
    return 0;

}
int main()
{
    string s,t;
    cin>>s>> t;
    int i,j;
    int f=strend(s,t);
    cout<<f<<endl;
    return 0;

}
