#include <iostream>
using namespace std;
int num = 50;

int read()
{
  int num = 100;
  cout << num<<"\n";
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

void five()
{
  // Do Not Edit Below
  int a = 210, b = -50, c = -40;

  // Write Your cout Code Here
    cout << "Result = " << a-b-c <<"\n" ;

}


void forth()
{
  // Do Not Edit Below
  int a, b, c =100 ;

  // Add Your Code Here
    a = b = c;
  // Do Not Edit Below
  cout << a + b + c <<"\n"; // 300
}
void Third()
{
  // Write my_text Variable Content Here
  string my_text = "============\n== Elzero ==\n============\n";

  // Do Not Edit Below
  cout << my_text;
  
}

void second()
{
    int a,b,c ;
  // Write Your One Line Code Here
    
  // Do Not Edit Below
  a = 10, b = 20, c = 70;
  cout << "Sum Of All Number Is: " << a + b + c<<"\n";
}
int main()
{
    int age = 40 ;
    int period = 10 ;
  // Write Your Code Here
    

  // Do Not Edit The Next 2 Lines
  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";

  // Add The Third Line Below
  cout <<"After 10 Years My Age Will Be: " << age + period <<"\n";
     second();
     /*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ Non_Vaild ] => start with num ?
  __name      [ Non_Vaild ] => start with under score ?
  name@name   [ ??? ] => Reason ?
  name10name  [ ??? ] => Reason ?
  name!name   [ ??? ] => Reason ?
  first_NAME  [ ??? ] => Reason ?
  first_name  [ ??? ] => Reason ?
  firstName   [ ??? ] => Reason ?
  first name  [ ??? ] => Reason ?
  fn          [ ??? ] => Reason ?
  public      [ ??? ] => Reason ?
  Public      [ ??? ] => Reason ?
*/
Third();
forth();
five(); 
play();
  return 0;
}
