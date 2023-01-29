#include <iostream>
using namespace std;
void printfibonacci(int num);
main()
{
    int num;
    cout << "how many fibonacci series u want:";
    cin  >> num;
    
    printfibonacci(num);
}
void printfibonacci(int num)
 { 
    int n1=0;
    int n2=1;
    cout << n1 << " " << n2;
    for (int x=1;x<=num-2;x=x+1)
     {
        int next=n1+n2;
        cout << " " << next;
        n1=n2;
        n2=next;
       
     }
 }