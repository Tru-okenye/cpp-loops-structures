#include <iostream>
using namespace std;

class Car{
    public:
    string brand;
    string color;
    int year;

    Car(string x, string y, int z){
        brand= x;
        color= y;
        year= z;
    };
};

int main(){

    Car myCar("audi", "blueish", 2020);
    cout<<myCar.brand<<endl<<myCar.color<<endl;
    return 0;

}