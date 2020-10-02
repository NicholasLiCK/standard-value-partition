#include <iostream>
#include <string>
using namespace std;

int main()
{
    int o;//operations
    int sum=0;//total donations
    cin>>o;
    while (o>0)
    {
        
        int d;
        string op;
        cin>>op;
        if(op=="donate")
        {
            cin>>d;
            sum=sum+d;
            
        }
        else if(op=="report") 
        {
            cout<<sum<<"\n";
            
        }
        d=0;
        o--;
    }
    
    return 0;
}
