#include <iostream>   
#include <algorithm>

using namespace std;

int main()
{
    int c;
    cin>>c;
    int d[3];
    int t=1;
    while (c>0)
    {
        cin>>d[0]>>d[1]>>d[2];
        sort(d,d+3);
        cout<<"Case "<<t<<": "<<d[1]<<"\n";
        c--;
        t++;
    }
    
    return 0;
}