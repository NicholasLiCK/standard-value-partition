#include <iostream>

using namespace std;

int main()
{
    int b(0);
    int t;
    string des[3]={"ABUNDANT","PERFECT","DEFICIENT"};
    string planks[5]={"    ","   ","  "," ",""};
    cout<<"PERFECTION OUTPUT\n";
    while (cin>>t)
    {
        
        if(t==0)//EOF
        {
            cout<<"END OF OUTPUT\n";
            break;
        }

        int sum=0;
        int output=t;
        for ( int i = 1; i < t; i++)
        {
            int p=t%i;
            if (p==0)
            {
               sum=sum+i;
            }
              
        }
        if (sum>t)
        {
            b=0;
        }
        else if (sum==t)
        {
            b=1;
        }
        else
        {
            b=2;
        }
        
        int sp(0);
        for (int y = 0; t > 0; y++)//個十百
        {
            sp++;
            t=t/10;
        }
        sp=5-sp;
        

        
        
        cout<<string( sp, ' ' )<<output<<"  "<<des[b]<<endl;

    } 
    
    return 0;
}