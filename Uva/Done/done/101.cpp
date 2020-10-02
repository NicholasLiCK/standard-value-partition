#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    int x= 0;
    //fill the bins
    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            cin>>a[j][i];
        
        }
    }
    
    //find color[max] and bin color
    int  m1=0,m2=0,m3=0,b1,b2,b3,c1=0,c2=0,c3=0,b[3][3];
    for(int i=0;i<=2;i++)//first max and color
    {
        for(int j=0;j<=2;j++)
        {
            if (m1<a[j][i])
            {
                m1=a[j][i];
                c1=j;
                b1=i;
                b[j][i]=1;
                
                
            }

        }
    }    
    for(int i=0;i<=2;i++)//second max and color
    {    
        for (int j = 0; j <= 2; j++)
        {
            if (j!=c1&&i!=b1)
            {
                if(m2<a[j][i])
                {
                    m2=a[j][i];                        
                    c2=j;
                    b2=i;
                    b[j][i]=1;
                    
                }
            }
            else continue;
        }
    }
    for(int i=0;i<=2;i++)//third max and color
    {    
        for (int j = 0; j <= 2; j++)
        {
            if(j!=c1&&j!=c2&&i!=b1&&i!=b2)
            {
                if(m3<a[j][i])
                {
                    m3=a[j][i];
                    c3=j;
                    b3=i;     
                    b[j][i]=1;
                    
                }
            }
            else continue;        
        }
        
    }
    

    //get bin tag
    char bt[3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0; j<=2; j++)
        {
            if(b[j][i]==1)
            {
                if (j==0) bt[i]='B';
                if (j==1) bt[i]='G';
                if (j==2) bt[i]='C';
                
            }
            
        }
    }
    //count total steps
    int ts=0;
    //add up
    for(int i=0;i<=2;i++)
    {
        for(int j=0; j<=2; j++)
        {
            ts=ts+a[j][i];
        }
    }
    //minus bm
    ts=ts-m1-m2-m3;
    cout<<bt<<ts<<endl;
 
    
    
    
 
    
 
 
    return 0;
}
