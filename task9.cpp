#include <iostream>
using namespace std;
int sum();
main()
{
    int result=sum();
    cout << "sum of 100 natural number is ="<< result << endl;
}
int sum()
{
    int sum=0;
    for (int x=1;x<=100;x=x+1)
     {
        sum=sum+x;
     }
     return sum;
}