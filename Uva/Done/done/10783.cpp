#include <iostream>

using namespace std;

int main()
{
    int t;//tasks
    while(cin>>t)
    {
        int c=1;//case number
        int a(0),b(0);
        while(cin>>a>>b)
        {
            int sum(0);
            if(a%2==0&&b%2==0)
            {
                for (int i=(a+1);i<=(b-1);i=i+2)
                {
                    sum=sum+i;
                }
            }
            else if(a%2==1&&b%2==0)
            {
                for (int i=a;i<=(b-1);i=i+2)
                {
                    sum=sum+i;
                }
            }
            else if(a%2==1&&b%2==1)
            {
                for (int i=a;i<=b;i=i+2)
                {
                    sum=sum+i;
                }
            }
            else if(a%2==0&&b%2==1)
            {
                for (int i=(a+1);i<=b;i=i+2)
                {
                    sum=sum+i;
                }
            }
            cout<<"Case "<<c<<": "<<sum<<"\n";
            c++;
        }
        
    }

    return 0;
}