#include<iostream>
using namespace std;

// int main(){
//     int age;
//     cout << "Enter your age:";
//     cin >> age;

//     if(age>=18){
//         cout << "You can Vote";
//     }else{
//         cout << "You can't Vote";
//     }
//     return 0;
// }

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(n%2==0){
        cout << "Even number";
    }else{
        cout <<"Odd number";
    }
}