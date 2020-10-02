#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;//inputs
    cin>>i;
    int t=0;
    while (i>0)
    {
        string l;
        cin>>l;
        if(l.length()==3)
        {
            
            if(l[0]=='o')t++;
            if(l[1]=='n')t++;
            if(l[2]=='e')t++;

            if(t>=2)cout<<"1\n";
            else cout<<"2\n";
            t=0;
            
        }
        else if(l.length()==5)
        {
            cout<<"3\n";
        }
        
        i--;
    }
    
    return 0;
}
