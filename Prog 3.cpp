#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,j,k,f=0;
            i=1;
        j=0;
    while(f==0)
    {

        k=(((i*10)+i)*100)+((j*10)+j);
        int s=(int)(sqrt(k));
        if(s*s==k && i!=j)
        {
            cout<<k;
            f=1;
            break;

        }
        else
        {
            if(i!=9)
                {
                    i++;
                    if(i==j)
                    i++;
                }
            else
            {
                j++;
                i=0;
            }
        }

    }

    return 0;

}
