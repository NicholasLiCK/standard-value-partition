#include <iostream>

using namespace std;

int main(){
    unsigned int t;//target
    
    while(cin>>t){
        if(t==0)break;
        
        while(t>=10){
            int temp(0);
            for(int i=1;t!=0;i++){
                int a=(t%10);
                temp=temp+a;
                t=t/10;  
            }
            t=temp;
        }
        cout<<t<<endl;
    }
    
    return 0;
}