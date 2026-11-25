//Object_pointer_First.cpp
#include<bits/stdc++.h>
using namespace std ;
class Cricketer{
public :
string name ;
int runs ;
float avg ;
Cricketer(string name , int runs , float avg){
    this->name = name ;
    this->runs = runs ;
    this->avg = avg ;
}
} ;

int main () {
    Cricketer c1("Virat Kohli",25000,55.2) ;
    Cricketer c2("Rohit Sharma",18000,47.9) ;
    Cricketer* p1 = &c1 ;  // This is Objects Pointer
    // Object pointer stores address of an object
    cout<<(*p1).runs<<endl;  //c1.runs //p1->runs
    (*p1).avg = 77.5 ; //p1->runs 
    cout<<c1.avg<<endl;
    return 0 ;
}

// a->b means (*a).b