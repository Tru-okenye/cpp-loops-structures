#include <iostream>
using namespace std;
int main(){
    auto num = 23;
    int x, y;
    int sum=0;
    string name;
    cout << "hello there world, I am"<< num << "years old" <<endl ;
    --num;
    // cout<<(num < 30);
    cout<<"my name is: ";
    getline (cin, name);
    cout<<"your name is "<<name;
    // cout <<"enter a number: ";
    // cin >> x;
    // cout <<"enter another number: ";
    // cin >> y;
    // sum = x+y;
    // cout<< sum;
    return 0;
}