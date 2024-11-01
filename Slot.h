#include<iostream>
#include<cstring>
#include"Motor.h"
using namespace std;
class Slot{
private:
    string productname;
    int id;
    int Numproducts=0;
    int prix;
    Motor motor1;
    Motor motor2;
public:
    Slot(int ID,string name,int pri,int m1,int m2);
    ~Slot(){
        cout<<"destructure...............\n";
    }
    void drop();
    int getPrix();
    void setprix(int);
    int getNumproducts();
    void setNumproducts(int);
    int getid();
    string getProductname();
    void setProductName(string);
};
Slot::Slot(int ID=0,string name=0,int pri=0,int m1=0,int m2=0){
    productname=name;
    id=ID;
    prix=pri*100;
    motor1.setid(m1);
    motor2.setid(m2);
}
int Slot::getPrix(){
    return prix;
}
void Slot::setprix(int pri){
    prix=pri;
}
int Slot::getNumproducts(){
    return Numproducts;
}
void Slot::setNumproducts(int Num){
    Numproducts=Num;
}
int Slot::getid(){
    return id;
}
string Slot::getProductname(){
    return productname;
}
void Slot::setProductName(string name){
    productname=name;
}
