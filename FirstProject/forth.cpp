#include <iostream>
using namespace std;
int main()
{
    // Every Data Type Has Its Size
    int num =10 ;
    string name = "Mayada" ;
    bool status = true ;
    cout << sizeof(num)<<"\n";
    cout << sizeof(name)<<"\n";
    cout << sizeof(status)<<"\n";
    /* 
    Data Size :
    Bit => [Bi]nary Dig[t] => Smallest Uint in the storage store only 0 or 1
    Byte => A Group of 8 bit => Store Single Character like (A).
    Kilo Byte => 1024 Byte
    Mega Byte => 1024 Kilobytes
    Giga Byte => 1024 Megabytes 
    Tara Byte => 1024 Gigabytes


    Data Type size :
    int => 2 or 4 bytes 
    Number Fractional component
    float => 4 bytes [18.5656565656]
    double => 8 byte [18.5656565656]
    Char => 1 byte => "A" , "B" , "C"
    Boolean => 1 byte => true , false
    ASCII => American Standard Code For Information Interchange
    */
    return 0 ;


}