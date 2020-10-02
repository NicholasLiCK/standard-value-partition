#include<iostream>
#include<cstdio>
using namespace std;

unsigned int reverse( unsigned int num ){
  int rev = 0;
  while( num ){
    rev = rev*10 + num%10;
    num /= 10;
  }
  return rev;
}

int main(){
  int N, ct;
  unsigned int num, rev;
  while( cin>>N ){
    for( int i = 1 ; i <= N ; i++ ){
      cin>>num;
      ct = 0;
      rev = reverse(num);
      do{
        num = num + rev;
        ct++;
        rev = reverse(num);
      }while( num != rev );
      cout<<ct<<" "<<num<<endl ;
    }
  }
  return 0;
}