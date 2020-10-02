#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t(0);//test cases
    cin>>t;
    while(t>0){
        int c(0);//cases    
        while(t--){
            cin>>c;
            int sc[c];
            int sum(0), mean(0);
            for(int i=0;i<c;i++){
                cin>>sc[i];
                sum=sum+sc[i];
            }
            mean=(sum/c);
            double n(0), a(0), per(0);
            for (int i=0;i<c;i++){
                if (sc[i]>mean)a++;
                }
            n=c;
            per=1000.0*((a*100.0)/n);
            double temp= round(per);
            per=temp/1000.0;
            printf( "%.3f%%\n", per );
        }
    }
}