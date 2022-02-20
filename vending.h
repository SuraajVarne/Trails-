#ifndef VENDINGMAC_H
#define VENDINGMAC_H

class Vendingmachine::Vendingmachine{
  public:
  Vendingmachine();
  
  void setPurchase(int x);
  void setRestock(int y);
  
  int getPurchase();
  int getRestock();
  
  void printinfo();
  
  private:
  int bottles;
};




#endif 
