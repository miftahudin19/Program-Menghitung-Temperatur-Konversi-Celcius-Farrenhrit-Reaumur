#include <iostream>
using namespace std;

int main ()
	{
		float suhu;
		char unit;
		
			cout <<"---Program Konversi Suhu---"<<endl;
			cout <<"/n C. Celcius /n F.Farrenheit /n R.Reaumur"<<endl;
			cout <<"/n suhu dalam bentuk C,F atau R : ";
			cin >> suhu;
			cout <<"Hasil Konversi Temperatur";
			cin >> unit;
			cout <<endl;
			
		if (unit == 'C' || unit == 'c')
			{
				cout << "Celcius = "<<suhu;
				cout << "Farrenheit = "<< 9.0 / 5.0 * suhu + 32;
				cout << "Reaumur = " << 4.0 / 5.0 * suhu;
			}
		else if (unit == 'F' || unit == 'f')
			{
				cout << "Celcius = "<< 5.0 / 9.0 * (suhu-32);
				cout << "Farrenheit = "<< suhu;
				cout << "Reaumur = " << 4.0 / 5.0 * (suhu-32);
			}
		else if (unit == 'R' || unit == 'r')
			{
				cout << "Celcius = "<< 5.0 / 4.0 * suhu;
				cout << "Farrenheit = "<< 9.0 / 4.0 * suhu + 32;
				cout << "Reaumur = " << suhu;
			}
	}
