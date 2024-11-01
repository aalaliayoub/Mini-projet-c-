#include<iostream>
#include"Motor.h"
#include"Slot.h"
using namespace std;
class WideSlot : public Slot{
private;
    Motor m1;
    Motor m2;
public :
    WideSlot(int slotid,string name,int pri,int motorid1,int motorid2):Slot(slotid,name,prti,motor1,motor2){}
    void drop(){
        cout<< "livrison "<<endl;
    }

};
