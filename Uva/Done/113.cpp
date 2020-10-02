#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long double n,p;
    while (cin>>n>>p){
        cout<<powl(p,1.0/n)<<endl;
    }
    return 0;


}

