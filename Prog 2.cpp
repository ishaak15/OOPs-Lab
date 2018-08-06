#include<iostream>
using namespace std;
int main()
{
    int i, j=0;
    cin>>i;
    while(i>0)
    {
        j++;
        i/=10;
    }
    cout<<j;
    return 0;

}
