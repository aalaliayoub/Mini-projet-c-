#include<iostream>
using namespace std;
class KeyPad{
public :
    int getSelection(){
        int emplace;
        cout<<"saisir le numéro de l'emplacement du produit à partirduquel le produit doit être éjecté. Une valeur de -1 sert ici d’avort.";
        cin>>emplace;
        return emplace;
    }

};
