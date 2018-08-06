#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cin>>i;
    if(i%7!=0)
        j=(i/7+1)*7;
    else
        j=i;
    cout<<j<<endl;
    return 0;

}
