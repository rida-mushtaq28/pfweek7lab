#include <iostream>
using namespace std;
int positive(int num);
main ()
{
    int num;
    cout << "enter num :";
    cin  >> num;
    positive(num);
} 
  int positive(int num)
   {
    while (num>0)
    {  
           cout << num << endl;
    }
     cout << "error! insert a number greater than 0" << endl;
     cout << "enter num:";
     cin>> num;


   }