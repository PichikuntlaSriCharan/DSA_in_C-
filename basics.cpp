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

// int main(){
//     int n=-45;
//     if(n>=0){
//         cout << "n is Positive\n";
//     }else{
//         cout << "n is Negative\n";
//     }
//     return 0;
// }

// int main(){
//     int a,b;
//     cout << "Enter a number : ";
//     cin >> a;

//     cout << "Enter another number : ";
//     cin >> b;

//     int sum =a+b;
//     cout << "sum : " << sum << endl;
//     return 0;
// }

// int main(){
//     int marks;
//     cout << "Enter : ";
//     cin >> marks;
//     if(marks>=90){
//         cout << "Distinction";
//     }else if(marks>=80 && marks<90){
//         cout << "A Grade";
//     }else if(marks>=70 && marks<80){
//         cout << "B Grade";
//     }else if(marks>=60 && marks<50){
//         cout << "C Grade";
//     }else{
//         cout << "Fail";
//     }

//     return 0;
// }

// int main(){
//     char a;
//     cout << "Enter a character : ";
//     cin >> a;
//     if(a >= 'A' && a <= 'Z'){
//         cout << "Upper case";
//     }else{
//         cout << "Lower case";
//     }


// int main(){
//     char a;
//     cout << "Enter a character : ";
//     cin >> a;
//     if(a >= 65 && a <= 90){      //Implecet type conversion
//         cout << "Upper case";
//     }else{
//         cout << "Lower case";
//     }


//     return 0;
// }

//Ternery statement
int main(){
    int n=45;
    cout << (n >= 0 ? "Positive" : "Negative") << endl;

    return 0;
}