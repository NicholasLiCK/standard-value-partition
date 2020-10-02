#include <iostream>

using namespace std;

int main()
{
    int start, first, second, third;
    int frc(9);

    while(cin>>start>>first>>second>>third)
    {
        int degree(120);
        
        if (start+first+second+third==0)
        {
            break;
        }

        degree+=(40-first+start)%40;
        degree+=(40-second+first)%40;
        degree+=(40-second+third)%40;
        
        cout<<degree*frc<<endl;
    }
    return 0;
}

