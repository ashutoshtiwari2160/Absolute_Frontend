#include<bits/stdc++.h>
using namespace std ;
class Cricketer {
  public:
      string name ;
      int runs ;
      Cricketer(string name , int runs ){
        name = name ;
        runs = runs ;
      }
} ;
int main (){
  Cricketer c1("Virat Kohli",25000) ;
  Cricketer c2("Rohit Sharma",1000) ;
  cout<<c1.name<<" "<<c1.runs<<endl;
  cout<<c2.name<<" "<<c2.runs<<endl;
  return 0 ;
}