#include<bits/stdc++.h>
using namespace std ;
class Loading {
    public:
    void sum(string a , string b){
        cout<<a+b<<endl;
    }
    void sum(int a , int b){
        cout<<a+b<<endl;
    }
    void sum(int a , int b , int c){
        cout<<a+b+c<<endl;
    }
    int sum(int a , int b , int c , int d){
        return a+b+c+d ;
    }
} ;
int main (){
    Loading a ;
    a.sum(5,8);
    a.sum(4,5,6);
    a.sum("Ashutosh","Tiwari") ;
    cout<<a.sum(3,5,8,9);
    return 0 ;
}