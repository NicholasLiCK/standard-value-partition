#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double a=0,b=0;
    cin>>a>>b;
    while (!cin.eof())
    {
        cout<<max(a,b)-min(a,b)<<endl;
        
    }

    return 0;
}