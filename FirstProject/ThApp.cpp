#include<iostream>
// Second Week in C++ Elzero course
 /*
    Syntax 
    [Data Type] [Variable_Name] = Value
    */
int main()
{
    int price = 100 ;
    int Price = 100 ; // Declare new variable
    int a ;
    int b , c , d ;
    std :: cout << "Price Is "<< price;
    std :: cout << "\nPrice after Ading 15 Is " << price+15;
    Price = 200 ; // update tha value
    std :: cout << "\n"<<Price;
    std :: cout << "\n<===========>";
    a = 100 ;
    std :: cout << "\n"<<a ;
    std :: cout << "\n<===========>" ;
    b = 10 , c = 20 , d = 30 ;
    std :: cout << "\n"<< b+c+d;
    /*
    Variables Scope 
        Local variables 
        Global variables
    */
//Global Variables are written outside the functions.
// Local Variables are written inside the functions.
/*
Constant Variables
    Read Only Variable
    Can't Declare Without Value
*/
 const int num = 100 ; // cost make variable can;t update its value
  //  num = 200 ;
std :: cout << "\n"<< num ;
    return 0;

}