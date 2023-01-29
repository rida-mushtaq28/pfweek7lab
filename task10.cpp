#include <iostream>
using namespace std;
main()
{
    int num;
    cout << "enter number:";
    cin  >> num;
    cout << "counting with for loop"<< endl;
    for (int x=1;x<=num;x=x+1)
     {
        cout << x << endl;
     }
    cout << "counting with while loop"<< endl;
    int x=1;
    while(x<=num)
    {
        cout << x<< endl;
        x=x+1;
    }
}