#include <iostream>
using namespace std;
void printtable(int num);
main()
{
 int num;
 cout << "enter number:";
 cin>> num;
 printtable(num);

}
void printtable(int num)
{
  for (int x=1;x<=10;x=x+1)
   {
    int multiple=num*x;
    cout << num << "*" << x << "=" << multiple << endl;
   }

  
}