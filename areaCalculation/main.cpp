#include <iostream>
#include <math.h>

using namespace std;

float daireAlan(int r);
int kareAlan(int kenar);
int dikdortgenAlan(int en, int boy);
float paralelAlan(int kisa, int uzun, float sinus);
int ucgenAlan(int yukseklik, int taban);
void alanYazdir(float alan);


int main()
{
    char secim;
    cout << "Hangi seklin alanini hesaplamak istiyorsunuz?";
    cout << "(Daire = d, Dikdortgen = i, Kare = k, Paralelkenar = p, Ucgen = u): ";
    cin >> secim;

    float alan;
    switch(secim){

    case'u':
        int yukseklik, taban;
        cout << "Yuksekligi ve taban degerlini giriniz: ";
        cin >> yukseklik >> taban;
        alan = ucgenAlan(yukseklik, taban);
        alanYazdir(alan);
        break;

    case'd':
        int yaricap;
        cout << "Yaricap giriniz: ";
        cin >> yaricap;
        alan = daireAlan(yaricap);
        alanYazdir(alan);
        break;

    case'i':
        int en,boy;
        cout << "En ve boy giriniz: ";
        cin >> en >> boy;
        alan = dikdortgenAlan(en, boy);
        alanYazdir(alan);
        break;

    case'k':
        int kenar;
        cout << "Kenar uzunlugunu giriniz: ";
        cin >> kenar;
        alan = kareAlan(kenar);
        alanYazdir(alan);
        break;

    case'p':
        int kisa,uzun;
        float x, sinus;
        cout << "Kisa ve uzun kenarlari giriniz: ";
        cin >> kisa >> uzun;
        cout << "Sinus radyanini giriniz: ";
        cin >> x;
        if(x>=181){
            x=360-x;
        }
        sinus = sin(x * M_PI / 180);
        alan = paralelAlan(kisa, uzun, sinus);
        alanYazdir(alan);
        break;

    default:
        cout << "Desteklenmeyen sekil" << endl;
    }

    return 0;
}

float daireAlan(int r){
    return 3.14 * r * r;
}

int kareAlan(int kenar){
    return dikdortgenAlan(kenar, kenar);
}

int dikdortgenAlan(int en, int boy){
    return en*boy;
}

float paralelAlan(int kisa, int uzun, float sinus){
    return (kisa * uzun) * sinus;
}

int ucgenAlan(int yukseklik, int taban){
    return (yukseklik * taban) / 2;
}

void alanYazdir(float alan){
    cout << "Seklin alani: " << alan << endl;
}

