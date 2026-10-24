#include<bits/stdc++.h>
using namespace std ;
class Student {
  public:
      string name ;
      int rno ;
      float gpa ;
      // constructor 
      Student (){  // default constructor 

      }
      Student(int r , float g , string s){
        name = s ;
        rno = r ;
        gpa = g ;
      }
      Student(int r){
        rno = r ;
      }
      Student (string s , int r ){  // parametrized  constructor
        name = s ;
        rno = r ;
      
      }
      Student (string s , int r , float g){  // parametrized  constructor
        name = s ;
        rno = r ;
        gpa = g ;
      }
} ;
int main (){
    Student s1("Ashutosh Tiwari",17);
    // s1.name = "Ashutosh Tiwari";
    // s1.rno = 17 ;
     s1.gpa = 9.6 ;
    Student s2 ;
    s2.name = "Himanshu" ;
    s2.rno = 39 ;
    s2.gpa = 9.8 ;
    Student s3("Gagan",13,9.2) ;
    Student s4(45) ;
    Student s5(34,5.3,"Harish") ;
    Student s6 = s1 ; // Deep copy 
    s6.name = "Manish";
    Student s7(s1) ;  // Copy constructor-deep copy
    s7.name = "Vijay";
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.rno<<endl;
    cout<<s5.name<<" "<<s5.gpa<<" "<<s5.rno<<endl;
    cout<<s6.name<<" "<<s6.gpa<<" "<<s6.rno<<endl;
    cout<<s7.name<<" "<<s7.gpa<<" "<<s7.rno<<endl;
    return 0 ;
}
