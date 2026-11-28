//overriding.cpp
#include<bits/stdc++.h>
using namespace std ;
class Scooty {
public:
int topSpeed ;
float mileage ;
void sound(){
    cout<<"vroom vrom"<<endl;
}
};
class Bike:public Scooty{
    public:
    int gears ;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
} ;
int main (){
    Bike b ;
    b.sound();
    Bike* bc = new Bike() ;
    bc->gears =  6 ;
    cout<<bc->gears<<endl;
    Scooty s ;
    s.sound() ;
    return 0 ;
}