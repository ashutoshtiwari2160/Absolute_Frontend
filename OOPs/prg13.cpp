//Access_Modifiers.cpp
#include<bits/stdc++.h>
using namespace std ;
class Student {
    public:
    int rno ;
    string name ;
    Student(){

    }
    Student(int rno , string name , float marks){
        this->rno = rno ;
        this->name = name ;
        this->marks = marks ;
    }
    float getMarks(){ // getter
        return marks ;
    }
    float setMarks(float m){
      marks = m ;
    }
    private:
    float marks ;
} ;
int main (){
    Student s1(76,"Raghav",92.2) ;
    //private members cannot be accessed directly//cout<<s1.marks<<endl;
   cout<<s1.getMarks()<<endl;
    //Note: Private members can accesses in public memebers
     s1.setMarks(98.2) ;
    return 0 ;
}