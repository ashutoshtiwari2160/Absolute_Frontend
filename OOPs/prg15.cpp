//Single_level_inheritance_second.cpp
#include<bits/stdc++.h>
using namespace std ;
class Vehicle { //parent Class
    public: 
    int topSpeed ;
    float mileage ;
    string fuel ;
  
} ;
class Car : public Vehicle { //child class /derived class
public:
} ;
class Bike : public Vehicle { //child class / derived  class
public:
   
} ;
class Truck : public Vehicle {//child class / derived class
public :
} ;
int main (){
    Bike b1 ;
    b1.topSpeed = 180 ;
    b1.mileage = 12.5 ;
    b1.gears = 6 ;
}