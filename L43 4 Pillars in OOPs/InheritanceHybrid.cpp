//Using more than one type inheritance is hybrid inheritance
#include <iostream>
using namespace std;

class a{

};
class b : public a{//heirarchial

};
class c{

};
class d : public c, public a{//multiple

};
int main(){
    
    return 0;
}