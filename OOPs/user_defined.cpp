#include<bits/stdc++.h>
using namespace std ;
class Student {
  public:
      string name ;
      int rno ;
      float gpa ;
      

} ;
int main (){
    Student s1 ;
    s1.name = "Ashutosh Tiwari";
    s1.rno = 17 ;
    s1.gpa = 9.6 ;
    Student s2 ;
    s2.name = "Himanshu" ;
    s2.rno = 39 ;
    s2.gpa = 9.8 ;
    cout<<s1.name<<" "<<s1.gpa<<endl;
    cout<<s2.name<<endl;
}
