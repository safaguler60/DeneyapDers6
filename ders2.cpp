#include<iostream>
using namespace std;

int Toplama(int sayi1, int sayi2){
   cout<<"Toplama islemi sonucu: "<<sayi1+sayi2<<endl;
}

int Cikarma(int sayi3, int sayi4){
    cout<<"Cikarma islemi sonucu: "<<sayi3-sayi4<<endl;
}
int Carpma(int sayi5, int sayi6){
    cout<<"Carpma islemi sonucu: "<<sayi5*sayi6<<endl;
}
int Bolme(int sayi7, int sayi8){
    cout<<"Bolme islemi sonucu: "<<sayi7/sayi8<<endl;
}
int kareAlma(int kareSayi){
    cout<<kareSayi*kareSayi<<endl;
}


int main(){

    int sayigiris1, sayigiris2;
    cout<<"1. Sayiyi Giriniz: "<<endl;
    cin>>sayigiris1;
    cout<<"2. Sayiyi Giriniz: "<<endl;
    cin>>sayigiris2;


    Toplama(sayigiris1,sayigiris2);
    Cikarma(sayigiris1,sayigiris2);
    Carpma(sayigiris1,sayigiris2);
    Bolme(sayigiris1,sayigiris2);

    kareAlma(5);


}

