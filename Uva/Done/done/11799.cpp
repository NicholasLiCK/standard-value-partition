#include <iostream>

using namespace std;

int main(){
    int t;//test cases
    cin>>t;
    while(t>0){
        int c(1);//case number
        int max(0);//max speed
        while(t--){
            int n(0);//number of creatures
            cin>>n;
            int sp[n];
            for (int i=0;i<n;i++){
                cin>>sp[i];//input speed
                if(max<sp[i])max=sp[i];//find max
            }
            cout<<"Case "<<c<<": "<<max<<endl;
            c++;
            max=0;
        }
       
    }

    return 0;
}