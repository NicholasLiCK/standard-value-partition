#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double t;//target
    
    while (cin>>t)
    {
        if (t==0.0)break;
        unsigned int c = (int)sqrt(t);
        if ((double)(c*c)==t)cout<<"yes\n";
        else cout<<"no\n";
    }
    
    return 0;


}