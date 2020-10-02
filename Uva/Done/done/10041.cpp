#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int c;//case numbers
    int cm[500]={0};//case minimum
    cin>>c;
   
    for(int i=0;i<c;i++)
    {
        int r;//family numbers
        cin>>r;
        int f[500];//family numbers under 500
       
        for(int i=0;i<r;i++)
        {
            cin>>f[i];
        }
        
        int dis=0;
        //sum of distance
        
        sort(f,f+r);
        int best=f[int(r/2)];
        for (int j = 0; j < r; j++)
        {
                       
            cm[i]+=abs(f[j]-best);       
            
        }
        
    }
    for (int i = 0; i < c; i++)
    {
        cout<<cm[i]<<endl;
    }
    
    return 0;
}