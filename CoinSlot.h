#include<iostream>
class CoinSlot{
private:
    int insertdAmount;
    int coinvalue[7]={200,100,50,20,10,5,1};
public :
    CoinSlot(){
        insertdAmount=0;
    }
    int updatecoinamount();
    int getcoinamount();
    void Clear();
    int returncoins(int);
};
int CoinSlot::updatecoinamount(){
    int n;
    cout<<"insérer une pièce ou à entrer -1 pour annuler le processus d'achat . ";
    cin>>n;
    if(n==-1){
        exit(0);
    }
    else{
        insertdAmount+=n;
        return insertdAmount;
    }
}
int CoinSlot::getcoinamount(){
    return insertdAmount;
}
void CoinSlot::Clear(){
    insertdAmount=0;
}
int CoinSlot::returncoins(int prix){
    int pri;
    pri=getcoinamount();
    cout<<"le retoure est :  "<<prix-pri<<endl;
    return prix-pri;
}
