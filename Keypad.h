#include<iostream>
using namespace std;
class KeyPad{
public :
    int getSelection(){
        int emplace;
        cout<<"saisir le num�ro de l'emplacement du produit � partirduquel le produit doit �tre �ject�. Une valeur de -1 sert ici d�avort.";
        cin>>emplace;
        return emplace;
    }

};
