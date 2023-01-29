#include <iostream>
using namespace std;
float amount (int year,float money);
main()
{
    int year;
    float money;
    cout << "enter year to live :";
    cin >> year;
    cout << "enter money :";
    cin >> money;
   amount(year,money);
    
}
  float amount(int year,float money)
{
    int age=18;
    float leftamount;
    for (int x=1800;x<=year;x++)
     {
        if(x%2==0)
         {
            money=(money-12000);
         }
         else
         {
            money=money-(12000+50*age);

          
         }
           age=age+1;

     }      
        if(money>0)
        {
          cout << "YES!!!"<< money << endl;
          
        }
        else if (money<0)
        {
          
          cout << "NOOO!!"<< -money << endl;
        }

        
    
}