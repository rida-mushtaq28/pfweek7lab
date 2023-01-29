#include <iostream>
using namespace std;
int calculateGCD(int n1,int n2);
int calculateLCM(int n1,int n2);
main()
{
    int n1,n2;
    int gcd,lcm;
    cout << "enter n1:";
    cin >> n1;
    cout << "enter n2:";
    cin >> n2;
    gcd=calculateGCD(n1,n2);
    cout << "gcd of n1 and n2 will be :"<< gcd<< endl;
    lcm=calculateLCM(n1,n2);
    cout << "lcm of n1 and n2 will be :"<< lcm<< endl;


}
int calculateGCD(int n1,int n2)
{   int gcd;
    for (int x=1;x<=n1 && x<=n2;x++)
     {
        if (n1%x==0 && n2%x==0)
          {
            gcd=x;
          }
     }
     return gcd;
}

int calculateLCM(int n1,int n2)
{
    int lcm=(n1*n2)/calculateGCD(n1,n2);
    return lcm;
}
