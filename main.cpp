#include <iostream> 
#include <string> 
#include "Germancars.h"

using namespace std; 

int main()
{
    Germancars gcobj;
    gcobj.SetName("BMW");
    gcobj.SetYear(2016);
    gcobj.SetModel(8);
    
    cout << gcobj.getName() << endl;
    cout << gcobj.getYear() << endl;
    cout << gcobj.getModel() << endl;
}
