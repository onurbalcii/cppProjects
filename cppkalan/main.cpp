#include <iostream>

using namespace std;


/*Even ? */
/*int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    if (n % 2 == 0)
        cout << n << " is even\n";

    if (n % 2 != 0)
        cout << n << " is odd";
    return 0;
}


/* in CPP write a program  to ask client number and return back square and cube of it */
/*int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int square = num * num;
    int cube = num * num * num;
    cout << "Square of the number is: " << square << endl;
    cout << "Cube of the number is: " << cube << endl;
    return 0;
}


/* Body Mass Index Calculator */
/*int main() {

    float h,w,BMI;
    cout << "Please enter your height in M:";
    cin >> h;
    cout << "Please enter your weight in KG:";
    cin >> w;
    BMI = w/ (h*h);
    cout << "Your BMI is " << BMI << endl;

    if(BMI < 18.5)
        cout << "Underweight";
    if(BMI > 18.5 & BMI < 24.5)
        cout << "Normal";
    if(BMI > 25)
        cout << "Obese";

    return 0;
}

int main() {

    int sayi = 15;
    bool kosul = sayi > 10;

    if(kosul) {
      // sayi, 10'dan büyük olduðu için bu blok çalýþacak
      cout << "Sayi 10'dan buyuk." << endl;
    } else {
      // sayi, 10'dan küçük veya eþit olduðu için bu blok çalýþacak
      cout << "Sayi 10'dan kucuk veya esit." << endl;
    }

    return 0;
}
*/






class rec{
	public:
		rec(int l, int h){
			setrec(l,h);
		}
		void setrec(int l,int h){
			lenght = l;
			hight = h;
		}
		int getrec()
		{
			return lenght*hight;
		}

		void calculate(){
			cout << "the area of rectngle is " << getrec() << endl;
		}
	private:
		int lenght,hight;
};





