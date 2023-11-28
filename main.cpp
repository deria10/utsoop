#include <iostream>
#include "myclass/bola.h"
using namespace std;

int main(){
    Bola bola1;
    bola1.hitungVolume(2);
 
    Bola bola2(4);
    bola2.cetakInfo();

    bola2.setRadius(5);
    bola2.cetakInfo();

    cout<<bola2.getRadius()<<endl; 
    cout<<bola2.getVolume()<<endl; 
}