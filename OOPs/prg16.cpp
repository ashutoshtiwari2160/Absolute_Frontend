//multi_level_inheritance.cpp
#include<bits/stdc++.h>
using namespace std ;
class Vehicle {
    public:
    int topSpeed ;
    float mileage ;
    string fuel ;
} ;
class TwoWheeler : public Vehicle {
    public :
} ;
class FourWheeler : public Vehicle {
    public :

} ;
class Scooty : public TwoWheeler {
    public:
} ;
class Bike : public TwoWheeler {
public:
} ;
int main (){
    Bike b1 ;
    b1.topSpeed = 180 ;
    b1.mileage = 12.5 ;
    // b1.gears = 6 ;
}