#include <iostream>  
using namespace std;  
   
int main() {  
    int a, b, c;  
    int n = 0;  
    int l = 0;  
    bool ch = false;  
    int max = 0;  
    while(cin >> a >> b)  
    {  
        if(a > b)  
        {  
            c = a;  
            a = b;  
            b = c;  
            ch = true;  
        }  
   
        for(int i = a; i <= b; i++)  //開始計算n的長度
        {  
            int n = i;   //n從a開始
            l = 1;  //自己也算長度
            while(true)  
            {  
                if(n == 1)  
                {  
                    break;  
                }  
                if(n % 2 == 0)  
                {  
                    n = n / 2;  
                }  
                else  
                {  
                    n = 3 * n + 1;  
                }  
                l++;  
            }  
            if(l > max)  //max
            {  
                max = l;  
            }  
            l = 0;  
        }  
        if(ch)  //switch if change=true
        {  
            c = a;  
            a = b;  
            b = c;  
        }  
        cout << a << " " << b << " " << max << endl;  
        max = 0;  
        ch = false;  
    }  
    return 0;  
}  