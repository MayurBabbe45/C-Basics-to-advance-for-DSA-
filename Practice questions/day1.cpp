#include <iostream>
using namespace std;

int main()
{
     cout << "Welcome to calculator" << endl;

     int cond = true;

     while (cond == true)
     {

          cout << "Enter 1 for addition" << endl;
          cout << "Enter 2 for subtraction" << endl;
          cout << "Enter 3 for multiplication" << endl;
          cout << "Enter 4 for division" << endl;
          cout << "Enter 5 for modulus" << endl;
          cout << "Enter 6 for exit" << endl;

          int choice;
          cin >> choice;

          switch (choice)
          {
          case 1:{
               int a, b;
               cout << "Enter the value of a and b" << endl;
               cin >> a >> b;
               cout << "The addition of " << a << " and " << b << " is " << a + b << endl;
               break;
          }
          case 2:{
               int c, d;
               cout << "Enter the value of c and d" << endl;
               cin >> c >> d;
               cout << "The subtraction of " << c << " and " << d << " is " << c - d << endl;
               break;
          }
          case 3:{
               int e, f;
               cout << "Enter the value of e and f" << endl;
               cin >> e >> f;
               cout << "The multiplication of " << e << " and " << f << " is " << e * f << endl;
               break;
          }
          case 4:{
               int g, h;
               cout << "Enter the value of g and h" << endl;
               cin >> g >> h;
               cout << "The division of " << g << " and " << h << " is " << g / h << endl;
               break;
          }
          case 5:{
               int i, j;
               cout << "Enter the value of i and j" << endl;
               cin >> i >> j;
               cout << "The modulus of " << i << " and " << j << " is " << i % j << endl;
               break;
          }
          case 6:{
               cond = false;
               cout << "Exiting the calculator" << endl;
               break;  
          }         
          default:{
               cout << "Invalid choice" << endl;
               break;
          }
          }
     }
}