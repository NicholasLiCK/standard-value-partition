#include <iostream>

using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        int c;
        for(int i=0; i<s.length();i++)
        {
            c=int(s[i]);
            c=c-7;
            cout<<char(c);
        }
        cout<<endl;
        
    }
    return 0;
}