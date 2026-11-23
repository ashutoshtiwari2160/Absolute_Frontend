//class_functions_And_passing objects to functions.cpp
#include<bits/stdc++.h>
using namespace std ;
class Cricketer{
    public:
    string name ;
    int runs ;
    float avg ;;
    Cricketer(string name , int runs ,float avg){
       this->name = name ;
       this->runs = runs ;
       this->avg = avg ;
    }
    void print(int runs){
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        cout<<runs<<endl;
    }
    int matches(){
        return runs/avg ;
    }
} ;
int main (){
    Cricketer c1("Viral Kohli",25000,65) ;
    Cricketer c2("Rohit Sharma",18000,53) ;
    c1.print(5) ;
    c2.print(7) ;
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
    return 0 ;
}