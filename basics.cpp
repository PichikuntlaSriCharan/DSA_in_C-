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
// int main(){
//     int n=45;
//     cout << (n >= 0 ? "Positive" : "Negative") << endl;

//     return 0;
// }

// //Practice question 1
// int main(){
//     int n=0,sum=0,j;
//     cout << "Enter a number : ";
//     cin >> n;
//     j=n;
//     for(int i=0;i<=n;i++){
//         sum+=i;
//         if(i==5){
//             break;
//         }
//     }

//     cout << "Sum of " << j << " numbers is " << sum << endl;


//     return 0;
// }

// int main(){
//     int n=0,sum=0,j;
//     cout << "Enter a number : ";
//     cin >> n;
//     j=n;
//     for(int i=0;i<=n;i+=2){
//         sum+=i;
//     }

//     cout << "Odd Sum of " << j << " odd numbers is " << sum << endl;


//     return 0;
// }

// int main(){
//     do{
//         cout << "Hello world";
//     } while(3>5);
//     return 0;
// }

// int main(){
//     int n,i,j=0;
//     cout << "Enter a number : ";
//     cin >> n;
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             j++;
//         }
//     }
//     if(j<1){
//         cout << "Prime Number";
//     }else{
//         cout << "Not a prime" << endl;
//     }
// }

// int main(){
//     int n;
//     bool isPrime = true;
//     cout << "Enter a number : ";
//     cin >> n;
//      for(int i=2;i*i<n;i++){         // i*i<n   or   i<n
//         if(n%i==0){
//             isPrime = false;
//             break;
//         }
//      }

//      if(isPrime == true){
//         cout << "Prime numberr \n";
//      }else{
//         cout << "Not Prime number\n";
//      }

//      return 0;
// }

//Nested loops
// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         int m=10;
//         for(int i=1;i<=m;i++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// If else || else if || ternery
//for ,while, do-while
//Break
//Nested Loops

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     for(i=0;i<=n;i)
// }