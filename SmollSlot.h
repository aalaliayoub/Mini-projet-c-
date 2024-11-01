#include<iostream>
#include"Motor.h"
#include"Slot.h"
using namespace std;
class SmollSlot : public Slot{
private :
    Motor motor1;
public:
    SmollSlot(int slotid,string name,int pri,int motor1,int motor2):Slot(slotid,name,pri,motor1,motor2){}
    void drop();
};
void SmollSlot::drop(){
    cout<<productname<< "livre par logement "<<endl;
}
