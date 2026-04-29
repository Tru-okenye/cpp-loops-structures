#include <iostream>
using namespace std;


// void myFunction(int numbers[5]){
//     for(int i=0; i<5; i++){
//         cout<< numbers[i];
//     }
// }
// int main(){
//    int numbers[5] = {5,4,3,8,7};
//    myFunction(numbers);
//     return 0;

// }
int sum(int k){
    if(k> 0){
        return k + sum(k-1);
    }else{
        return 0;
    }
    
}
int main(){
    int result= sum(6);
    cout<< result;
    return 0;
}