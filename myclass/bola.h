#include <iostream>
using namespace std;

class Bola{
    public:
    double radius;
    double volume;

    public:
    //Constructor
    Bola( double radius = 0){
        Bola::radius =radius;
    }
    //Destructor
    ~Bola()
    {
        cout<<"Sudah selesai menggunakan object bola"<<endl;
    }


    void hitungVolume(double radius)
    {
        volume= (4/3) * 3.14 * (radius * radius * radius);
        cout<< "volume dari bola tersebut adalah : "<< volume << ""<<"m3"<<endl;
    }
    void cetakInfo(){
        volume= (4/3) * 3.14 * (radius * radius * radius);
        cout<<"Jika radius bola = "<<Bola::radius<< " Maka volume dari bola adalah : "<<Bola::volume<<"m3"<<endl;
    }
    void setRadius( double radius)
    {
        Bola::radius=radius;
    }
    void setVolume(double volume)
    {
        Bola::volume=volume;
    }
    double getRadius()
    {
        return Bola::radius;
    }
    double getVolume()
    {
        return Bola::volume;
    }

};