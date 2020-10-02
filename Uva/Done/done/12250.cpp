#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main() {
  string in;
  int c =1;
  
  while (getline(cin,in))
  {
    int l=in.length();
    if (in=="#")break;
    else if (in=="HOLA"&&l==4) 
    {
      cout<<"Case "<<c<<": "<<"SPANISH"<<"\n";
      
    }
    else if (in=="HELLO"&&l==5)
    {
      cout<<"Case "<<c<<": "<<"ENGLISH"<<"\n";
      
    } 
    else if (in=="HALLO"&&l==5)
    {
      cout<<"Case "<<c<<": "<<"GERMAN"<<"\n";
      
    } 
    else if (in=="BONJOUR"&&l==7) 
    {
      cout<<"Case "<<c<<": "<<"FRENCH"<<"\n";
    }
    else if (in=="CIAO"&&l==4) 
    {
      cout<<"Case "<<c<<": "<<"ITALIAN"<<"\n";
    }
    else if (in=="ZDRAVSTVUJTE"&&l==12) 
    {
      cout<<"Case "<<c<<": "<<"RUSSIAN"<<"\n";
    }
    else cout<<"Case "<<c<<": "<<"UNKNOWN"<<"\n";

    c++;
  }
  

  return 0;
}