#include <iostream>
#include <algorithm>

using namespace std;
 
int main() {
    int c; 
    int sn; //street number
    cin>>c;
 
    while (c>0) 
    {
        
        int number[20]; //stores
        cin>>sn;
        for (int i = 0; i < sn; i++) 
        {
            cin>>number[i];    
        }
        sort(number,number+sn);

        
        cout << (number[(sn-1)] - number[0])*2<<"\n";
        c--;
    }
    return 0;
 
 
}