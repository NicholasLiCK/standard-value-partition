#include <iostream>

using namespace std;

int main(){
    int c;//test cases
    cin>>c;
    while (c>0){
        
        while (c--){
            int sc=0;//swapcounts
            int l(0);//numbers of carriages
            cin>>l;
            int sq[l];//sequence
            for(int i=1;i<=l;i++){//input seq
                cin>>sq[i];
            }
            
            
            for(int t=l;t>=1;t--){
                if(sq[t]!=t){//if misplace
                    for(int i=1;i<=l;i++){
                        if(sq[i]==t){//found place
                            for(int j=i;j<t;j++){
                                sq[j]=sq[j+1];
                            }
                            sq[t]=t;
                            sc=sc+(t-i);
                        }
                    }
                    
                    
                }
                
            }
                
            
        cout<<"Optimal train swapping takes "<<sc<<" swaps.\n";
        }
        
        
    }
    
    return 0;
}
