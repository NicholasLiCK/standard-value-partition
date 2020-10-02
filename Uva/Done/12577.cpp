#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string tar;
    int num(1);
    while(cin>>tar&&tar!="*")
    {
        cout<<"Case "<<num;
        if (tar=="Hajj")
        {
            cout<<": Hajj-e-Akbar\n";
        }
        else if (tar=="Umrah")
        {
            cout<<": Hajj-e-Asghar\n";
        }
        num++;
    }    
    return 0;
}