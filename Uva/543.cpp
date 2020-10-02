#include <iostream>


using namespace std;

int main()
{
    bool composite[1000005] = {true, true};
    bool find;
    int a;
    const int m = 1000000;
    for( int i = 2; i<= m; i++)
    {
        if( !composite[i])
            for(int j = i+i; j <= m; j += i)
                composite[j] = true;
    }
    cout<<composite[2]<<endl;
    cout<<composite[999998]<<endl;
    int n;
    while (cin>>n&&n!=0)
    {
        find = false;
        for( a = 2; a <= n/2; a++)
        {
            if ((!composite[a])&&(!composite[n-a]))
            {
                 
                find = true;
                break;
            }
            
        }
        if(find) cout<<n<<" = "<<a<<" + "<<n-a<<endl;
        else
        {
            cout<<"Goldbach's conjecture is wrong.\n";
        }
        
    }
    
        
    
    return 0;
}