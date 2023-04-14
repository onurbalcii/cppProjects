#include <iostream>

using namespace std;

int main()
{
    int en, boy;

    do{
        cout << "En giriniz: ";
        cin >> en;

        if(en == -1){
            break;
        }

        cout << "Boy giriniz: ";
        cin >> boy;

        for(int i=0; i< boy; i++){
            for(int j=0; j<en; j++){
                cout << "* ";
            }
            cout << endl;
        }
    }while(en!=-1);

    return 0;
}
