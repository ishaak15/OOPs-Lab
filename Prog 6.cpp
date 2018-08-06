#include<iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
char* concat(string s,string t)
{
    int i,j,k;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++);

    char *q=(char*) malloc((i+j)*sizeof(char));
    for(k=0;k<(i+j);k++)
    {
        if(k<i)
            q[k]=s[k];
        else if(k>=i)
            q[k]=t[k-i];
    }
    q[k]='\0';
    return q;

}
int main()
{
    string s,t;
    cin>>s>>t;
    int i,j;
    char *st=concat(s,t);
    cout<<st<<endl;
    return 0;

}
