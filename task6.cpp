#include <iostream>
using namespace std ;
int totalsum(int num);
main()
{
    int num;
    int sum;
    cout << "enter number:";
    cin  >> num;
    sum =totalsum(num);
    cout << "sum:"<< sum;
}
int totalsum(int num)
    {
      int sum=0;
      while(num>0)
       {
        
        int x=num%10;
        sum=sum+x;
        num=num/10;
        
       }
       return sum;
    }


