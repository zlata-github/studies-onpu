#include <iostream>
using namespace std;
class ElectroMechanism{
protected:
unsigned int voltage;
public:
ElectroMechanism(){
cout<<"Enter voltage:";
cin>>voltage;
}
ElectroMechanism(int v) {
voltage=v;
}
virtual void show(){
cout<<"\nSHOW THE OBJECT ElectroMechanism: \nVoltage: "<<voltage;
}
};
int main()
{
cout<<"OBLECT (constructor with parameters):\n";
ElectroMechanism eM1(1);
eM1.show();
cout<<"\n\nOBLECT (default constructor):\n";
ElectroMechanism eM2;
eM2.show();
return 0;
}