//overriding.cpp
#include<bits/stdc++.h>
using namespace std ;
class Scooty {
public:
int topSpeed ;
float mileage ;
virtual void sound(){
    cout<<"vroom vrom"<<endl;
}
private:
int bootspace ;
};
class Bike:public Scooty{
    public:
    int gears ;
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};
class SuperBike:public Scooty{
    public:
    void sound(){
        cout<<"Zroom Zroom"<<endl;
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
    Scooty* sc = new Scooty() ;
    sc->sound();
    (*sc).sound() ;

    // 
    Scooty* bs = new Bike() ;
    (*bs).sound() ;
    Bike* bx = new Bike() ;
    (*bx).sound() ;
    SuperBike* c = new SuperBike() ;
    c->sound() ;
    Scooty*cx = new SuperBike() ;
    cx->sound() ;
    return 0 ;
}