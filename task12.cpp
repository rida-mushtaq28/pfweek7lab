#include <iostream>
using namespace std;
void percentage(int number);
main()
{
  int number;
  cout << "enter number:";
  cin >> number;
  percentage(number);


}
 
void percentage(int number)
{
  float p1,p2,p3,p4,p5;
  float sum1=0;
  float sum2=0;
  float sum3=0;
  float sum4=0;
  float sum5=0;
  for (int x=1;x<=number;x=x+1)
   {
    
    int num;
    cout << "enter numbers:";
    cin >> num;
    
     if (num>=1 && num<=199)
     {
        sum1=sum1+1;
     }
     if (num>=200 && num<=399)
     {
        sum2=sum2+1;
     }

     if (num>=400 && num<=599)
     {
        sum3=sum3+1;
     }

     if (num>=600 && num<=799)
     {
        sum4=sum4+1;
     }

     if (num>=800)
     {
        sum5=sum5+1;
     }
    
   }
   p1=(sum1/number)*100;
   p2=(sum2/number)*100;
   p3=(sum3/number)*100;
   p4=(sum4/number)*100;
   p5=(sum5/number)*100;
   
   
    cout << p1 <<"%"<< endl;
    cout << p2 << "%"<< endl;
    cout << p3 << "%"<<endl;
    cout << p4 << "%"<< endl;
    cout << p5 << "%"<<endl;
}