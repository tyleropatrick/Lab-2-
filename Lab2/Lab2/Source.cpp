// CS215
// Author: Tyler Patrick
//Section: 402
// Last modified: 1/24/2019

#include<IOStream>
#include<string>
using namespace std;

int main()
{
	int Num1, Num2, Num3; // Initalize Variables
	int Max, Mid, Min;
	int Allepo, Banana, Cayenne, Dragons;
	string choice;
	cout << "Enter Number 1: "; // Sets Number 1
	cin >> Num1;
	cout << "Enter Number 2: "; // Sets Number 2
	cin >> Num2;
	cout << "Enter Number 3: "; // Sets Number 3
	cin >> Num3;
	if (Num1 > Num2) // Set o
	{
		if (Num1 > Num3)
		{
			Max = Num1;
			if (Num3 > Num2)
			{
				Mid = Num3;
				Min = Num2;
			}
			else
			{
				Mid = Num2;
				Min = Num3;
			}
		
		}
		else 
		{
			Max = Num3;
			Mid = Num1;
			Min = Num2;
		}
	}
	else
	{
		if (Num2 > Num3)
		{
			Max = Num2;
			if (Num3 > Num1)
			{
				Mid = Num3;
				Min = Num1;
			}
			else
			{
				Mid = Num1;
				Min = Num3;
			}
		}
		else
		{
			Max = Num3;
			Mid = Num2;
			Min = Num1;
		}
	}
		// Print Numbers
		cout << "Sorted They are: " << Min << " " << Mid << " " << Max << endl;

		//Print Menu
		cout << " \n A. Allepo Pepper" << endl;
		cout << " B. Bannana Pepper" << endl;
		cout << " C. Cayenne Pepper" << endl;
		cout << " D. Dragon's Breath" << endl;
		cout << " Enter a letter to choose a pepper: ";

		// Heat Values
		Allepo = 30000;
		Banana = 1000;
		Cayenne = 40000;
		Dragons = 2480000;
		// Displays Pepper heat
		cin >> choice;
		if (choice == "A" || choice == "a")
		{
			cout << "Thats " << Allepo << " Scovilles of heat!";



		}
		else if (choice == "B" || choice == "b")
		{
			cout << "Thats " << Banana << " Scovilles of heat!";
		}
		else if (choice == "C" || choice == "c")
		{
			cout << "Thats " << Cayenne << " Scovilles of heat!";
		}
		else if (choice == "D" || choice == "d")
		{
			cout << "Thats " << Dragons << " Scovilles of heat!";
		}
		else
		{
			cout << "That Pepper is not on the list";
		}
		system("PAUSE");

	}


		
	
		
	



