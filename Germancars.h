#ifndef GERMANCARS_H
#define GERMANCARS_H

class Germancars{
  public:
  Germancars();
  
  void SetName(string carname);
  void SetYear(int caryear);
  void SetModel(int carmodel);
  
  string getName();
  int getYear();
  int getModel();
  
  private:
  string name;
  int year;
  int model;
  
};





#endif
