#include <iostream>
using namespace std;
int main(){
    int time= 16;
    bool isMorning= time < 12;
    bool isEvening= time > 12;
    if(isMorning){
        cout<<"Too early to get married";
    }else{
        cout<<"do wateva you want";
    }

    int day=4;
    switch (day)
    {
    case 1:
        cout<<"its still a monday mahn!";
        break;
    case 3:
        cout<<"smells like a thursday";
        break;
    case 4:
        cout<<"its a fridayyyy";
        break;
    default:
        cout<<"looks like a boring day";
        break;
    }
    return 0;
}