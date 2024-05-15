//Tasks for week 4 for elzero web school c++ course.
//Task1 :
#include<iostream>
using namespace std;

int ftask() { // Function declaration with return type int
    int num = 3;
    cout << num + num << "\n";                 // 6
    cout << num * num - num << "\n";           // 6
    cout << (num * num) - num << "\n";         // 6
    cout << (num + num + num) - num << "\n";   // 6
    cout << (num + num) / (num / num) << "\n"; // 6
    cout << (num * num) - (num = num) << "\n"; // 6
    cout << (num - num) + (num + num) << "\n"; // 6
    return 0;
}

int stask() {
    cout << ((10 +20 +15 - 3 + 190 + 100)== 400) << "\n"; // 0
    return 0 ;
}

int thtask() {
    // Do Not Edit
int num = 3;
/*
  Write Code Here
  Do Not Use num = 6 :)
*/
num+=num ;
// Do Not Edit
cout << num << "\n"; // 6
return 0 ;
}
int fhtask(){
    cout << int(10.5) * 5 + int(40.5) + int(10.1) << "\n"; // 100
    return 0 ;
}
//!! Can not do it??
int fthtask(){
    // Assign The Values
    char a = 'a';  
    char b = 'b';    
    char c = 'c';  

// Do Not Edit
cout << b * c + a << "\n"; // 1000
    return 0 ;
}
int sthtask(){
    /*
  We Need To Use This Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/

int a = 10;
int b = 25;
int c = 15;

cout << (a != b) << "\n";          // True
cout << (c > a) << "\n";          // True
cout << (a + c >= b) << "\n";     // True
cout << (c >= a) << "\n";         // True
cout << (c <= b) << "\n";         // True
cout << (b + a && b > c) << "\n"; // True
cout << !(a > b) << "\n";         // True
cout << (a || b <= b + a) << "\n"; // True
return 0 ;
}
int svtask(){
    int a = 10;
int b = 20;

cout << a + b * a + b + a * a * a << "\n";       // 10000

// Hint For Help
cout << 10 + (5 * 20) << "\n";   // 5 * 20 = 100 + 10 = 110
cout << (10 + 5) * 20 << "\n"; // 10 + 5 = 15 * 20 = 300
return 0;
}
int etask(){
int num = 10;
cout << --num << " | " << num++ << " | " << ++num << "\n"; // 9 | 9 | 11
cout << num << " | " << ++num << " | " << num-- << "\n"; // 11 | 12 | 12
cout << num << " | " << --num << " | " << --num<< "\n"; // 11 | 10 | 9
return 0;
}

int main() {
    ftask(); 
    stask();
    thtask();
    fhtask();
    fthtask();
    sthtask();
    svtask();
    etask();
// Calling the function ftask , stask , thtask() , fhtask() , fthtask() , sthtask() , svtask() and etask()
    return 0;
}
