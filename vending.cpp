#include <iostream> 
#include "vendingmac.h"
#include <string>

using namespace std; 

Vendingmachine::Vendingmachine()
{
    bottles = 20;
}
void setPurchase(int x)
{
    bottles -= x;
}
int getPurchase()
{
    return bottles;
}
void setRestock(int y)
{
    bottles += y;
}
//int getRestock()
//{
 //   return bottles;
//}
void printinf()
{
    cout << "Inventory: " << bottles << endl; 
}
