#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int c;//case numbers
    cin>>c;
    signed int n;//test number
    int o;//output
    while (c!=0)
    {
        cin>>n;
        int temp=0;
        temp=((315*n)+36962);
        o=abs(temp/10%10);
        cout<<o<<"\n";
        n= 0;
        c--;
    }
    
    return 0;
}