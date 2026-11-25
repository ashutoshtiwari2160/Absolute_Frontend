//Dynamic_Allocation
#include<bits/stdc++.h>
using namespace std ;
class Cricketer {
    public:
    string name ;
    int runs ;
    float avg ;
    Cricketer (string name , int runs , float avg ){
        this->name = name ;
        this->runs = runs ;
        this->avg = avg ;
    }
} ;
int main (){
    int *ptr = new int(5245) ;
    cout<<*ptr<<endl;
    return 0 ;
}
