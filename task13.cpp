#include <iostream>
using namespace std;
float amount(int age,int machinePrice,int toyPrice);
main()
{
    int age,toyPrice,machinePrice;
    cout << "enter age of lilly:";
    cin >> age;
    cout << "enter toyprice:";
    cin >> toyPrice;
    cout << "enter machineprice:";
    cin >> machinePrice;
    amount(age ,machinePrice,toyPrice);

}

 float amount(int age ,int machinePrice,int toyPrice)
  {
       int savedmoney=0;
       int moneyofbirthday=10;
       int numberoftoys=0;     
           for (int x=1;x<=age;x++)
            {
              if(x%2==0)
              {
                savedmoney=savedmoney+(moneyofbirthday-1);
                moneyofbirthday=moneyofbirthday+10;

              } 
              else
              {
                numberoftoys=numberoftoys+1;
              }

            } 
            savedmoney=savedmoney+(numberoftoys*toyPrice);
              float remaining=savedmoney-machinePrice;
              float required=machinePrice-savedmoney;
              if(savedmoney>=machinePrice)
              {
                cout <<"YES!"<< remaining<<endl;
              }

              if(savedmoney<machinePrice)
              {
                cout <<"no!"<< required<<endl;
              } 
 }            
