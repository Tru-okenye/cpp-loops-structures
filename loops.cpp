#include <iostream>
using namespace std;
int main(){
    int i;
    int num[5]={2, 3, 12, 9, 5};
    // while(i<=6){
    //     cout<<i <<endl;
    //     i++;
    // }
    // do
    // {
    //    cout<<i;
    //    i--;
    // } while (i>=1);
    // do
    // {
    //    cout<<"enter a random number: ";
    //    cin>>i;
    // } while (i>=0);
    
    // for(int number: num){
    //     cout<< number;
    // }
    string fruits[4]={"banana", "mango", "apple", "oranges"};
    for(int i=0; i<4; i++){
        cout<< fruits[i] <<endl;
    }
    return 0;
}