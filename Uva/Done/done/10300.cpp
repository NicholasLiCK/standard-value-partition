#include <iostream>

using namespace std;

int main()
{
    int t(0);//test cases
    cin>>t;
    int sum(0);
    while(t>0)
    {
        int f(0);//farmers
        
        cin>>f;
        while(f>0)
        {
            int sqm,anml,ef;
            int pre;
            cin>>sqm>>anml>>ef;
            pre=sqm*ef;
            sum=sum+pre;
            f--;
        }
        
        cout<<sum<<"\n";
        sum=0;
        t--;
    }
    return 0;
}