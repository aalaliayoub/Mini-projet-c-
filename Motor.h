#include<iostream>
using namespace std;
class Motor {
private :
    int id ;
public :
    Motor(int ID=0){
        id=ID;
    }
    void setid(int ID){
        id=ID;
    }
    void trigger(){
        cout<<"« Moteur "<<id<<" est activé »"<<endl;
    }
};
