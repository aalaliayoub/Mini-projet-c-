#include<iostream>
#include<cstring>
#include<vector>
#include"Slot.h"
#include "CoinSlot.h"
#include"Keypad.h"
#include"DropCheck.h"
using namespace std ;
class automat {
private :
    vector<Slot> slots ;
    int numberslots;
    Slot cached;
    int numProductsPerSlot;
    int insertPos;
    CoinSlot coinslot;
    KeyPad keypad;
    DropCheck dropcheck;
public :
    automat(int nbslots,int nbprperslot){
        numberslots=nbslots;
        vector<Slot> slots[nbslots];
        numProductsPerSlot=nbprperslot;
        cout<<"constructure............"<<endl;
    }
    ~automat();
    bool addslot(int,string,int,int,int);
    bool addslot(string,int,int,int);
    bool addslot(Slot slot);
    Slot searchSlot(int);
    void changeSlot(int,string,int);
    int getPrix(int);
    int getNumPieces(int);
    bool isAvaiable(int);
    bool dropslot(int);
    void fillAll();
    void Fill(int,int);
};
automat::~automat(){
    /*for(Slot slot : slots){
        delete  slot;
    }*/
    cout<<"destructure...............\n";
}
bool automat::addslot(int slotid,string Nameprod,int pri,int motorid1,int motorid2){
    Slot s(slotid,Nameprod,pri,motorid1,motorid2);
    slots.push_back(s);
    cout<<"la taiiel est : "<<slots.size()<<endl;
    return true;
}
bool automat::addslot(string name,int pri,int motor1id,int motor2id){
    Slot s(0,name,pri,motor1id,motor2id);
    slots.push_back(s);
    cout<<"la taille est : "<<slots.size()<<endl;
    return true;
}
bool automat::addslot(Slot s){
    slots.push_back(s);
    cout<<"la taille est : "<<slots.size()<<endl;
    return true;
}
Slot automat::searchSlot(int idslot){
    int i;
    for(i=0;i<slots.size();i++){
        if(slots[i].getid()==idslot){
            return slots[i];
            if(cached.getid()!=slots[i].getid()){
                cout<<"pas encourt : "<<endl;
                cached=slots[i];
            }
            else{
                cout<<"deja mis en cache..............\n";
            }
        }
    }
}
void automat::changeSlot(int slotid,string name,int pri){
    slots[slotid].setProductName(name);
    slots[slotid].setprix(pri);
}
int automat::getPrix(int slotid){
    return slots[slotid].getPrix();
}
int automat::getNumPieces(int slotid){
    int piece=slots[slotid].getNumproducts();
    return piece;
}
bool automat::isAvaiable(int slotid){
    if(slots[slotid].getNumproducts()>0){

        return true;
    }
    else{
        return false ;
    }
}
bool automat::dropslot(int soltid){
    if(slots[soltid].getid()!=0){
        return true;
    }
    else{
        return false;
    }
}
void automat::fillAll(){
    string productname;
    int id;
    int Numproducts=0;
    int prix;
    int m1,m2;
    for(int i=0;i<numberslots;i++){
        for(int j=0;j<numProductsPerSlot;j++){
            cout<<"enter the name of product :"<<j+1<<"of slot "<<i+1;
            cin>>productname;
            cout<<"enter the id of product :"<<j+1<<"of slot "<<i+1;
            cin>>id;
            cout<<"enter the price of product :"<<j+1<<"of slot "<<i+1;
            cin>>prix;
            cout<<"enter motorid1 : ";
            cin>>m1;
            cout<<" enter motorid2: ";
            cin>>m2;
            int pri=20;
            addslot(id,productname,pri,m1,m2);
        }
    }
}
void automat::Fill(int slotid,int Numproducts){
    for(Slot s : slots){
        if(s.getid()==slotid){
            s.setNumproducts(Numproducts);
        }
    }
}
