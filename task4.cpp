#include <iostream>
using namespace std ;
int totaldigit(int num);
main()
{
    int num;
    int count;
    count =totaldigit(num);
    cout << "no of digits:"<< count;
}
int totaldigit(int num)
    {
      
      cout << "enter number:";
      cin  >> num;
      int count=0;
      while(num>0)
       {
        count=count+1;
        num=num/10;
       }
       return count;
    }
