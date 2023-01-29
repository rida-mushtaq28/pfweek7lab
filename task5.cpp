#include <iostream>
using namespace std ;
int frequencychecker(int num,int digit);
main()
{
    int num,digit;
    int count;
    cout << "enter number:";
    cin  >> num;
    cout << "enter digit:";
    cin>>digit;
    count =frequencychecker(num,digit);
    cout << "no of digits:"<< count << endl;
}
int frequencychecker(int num,int digit)
    {
      int count=0;
      int x;
      while(num>0)
       {
         x=num%10;
         num=num/10;
        if(x==digit)
        {
        count=count+1;
        }
       }
       
       return count;
    }


