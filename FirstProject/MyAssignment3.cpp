#include<iostream>
using namespace std ;
int main()
{
    /* Example
false => bool => Boolean

'a'   => Char => Character
'9'   => Char => Character
9     => int  => Integer
true  => bool => Boolean
100   => int  => Integer
-10   => int  => Integer
0     => int  => Integer
false => bool => Boolean
10.9  => float => Float
*/
double salary = 5000.98;
cout << sizeof(salary)<<" bytes"<<"\n";
auto byte =sizeof(salary) ;
cout << byte * 8 <<" bytes" << "\n";
// 8 Bytes
// 64 Bits
cout << "Maximum Integer Number Is => 2147483647"<<"\n";
cout << "Minimum Integer Number Is => -2147483648"<<"\n";
cout << "Maximum Short Integer Number Is => 32767"<<"\n";
cout << "Minimum Short Integer Number Is => -32768"<<"\n";
// Edit Line To Make 8 Become 4
cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 8 => Add f to be 4

}