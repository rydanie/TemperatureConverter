//written by Ryley Danielson

#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

//Function prototypes
double celsius(double n);
double fahrenheit(double n);
double ConvertMiles(double n);
double ConvertKilometers(double n);

int main()
{
	int choice = -1;

	//Loop to continue processing
	do
	{
		system("cls");
		cout << "\n Conversion Menu\n\n";
		cout << "1. Convert Celcius\n";
		cout << "2. Convert Fahrenheit\n";
		cout << "3. Convert Kilometers\n";
		cout << "4. Convert Miles\n";
		cout << "5. Quit Program\n\n";
		cout << "Enter your choice: ";

		double num = 10;

		//Input validation
		while (!(cin >> choice) || (choice < 1 || choice > 5))
		{
			cin.clear(); //Clear the buffer
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\nChoose an option on the list: 1, 2, 3, 4, or 5: \n" << endl;
		}

		if (choice == 1)
		{
			cout << "Enter a temperature in Cecius ";
			while (!(cin >> num))
			{
				cin.clear(); //Clear the buffer
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Enter a valid temperature in Celcius " << endl;
			}
			
			cout << "\nThe temperatue in fahrenheit is " << celsius(num);
			cout << "\nEnter to Continue ";
			cin.get();
			cin.get();
		}
		else if (choice == 2)
		{
			cout << "Enter a temperature in fahrenheit: ";
			while (!(cin >> num))
			{
				cin.clear(); //Clear the buffer
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Enter a valid temperature in fahrenheit: " << endl;
			}
			
			cout << "\nThe temperatue in Celcius is " << fahrenheit(num);
			cout << "\nEnter to Continue ";
			cin.get();
			cin.get();
		}
		else if (choice == 3)
		{
			cout << "Enter a distance in Kilometers ";
			while (!(cin >> num) || (num < 0))
			{
				cin.clear(); //Clear the buffer
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Enter a valid distance in Kilometers " << endl;
			}
			
			cout << "\nThe distance in Miles is " << ConvertKilometers(num);;
			cout << "\nEnter to Continue ";
			cin.get();
			cin.get();
		}
		else if (choice == 4)
		{
			cout << "Enter a distance in Miles ";
			while (!(cin >> num) || (num < 0))
			{
				cin.clear(); //Clear the buffer
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Enter a valid distance in Miles " << endl;
			}
			
			cout << "\nThe distance in Kilometers is " << ConvertMiles(num);;
			cout << "\nEnter to Continue ";
			cin.get();
			cin.get();
		}

	} while (choice != 5);

	return 0;
}


double celsius(double n)
{
	//cout << setprecision(4) << endl;
	double tempFahrenheit = ((9.0 / 5.0)*n) + 32;
	return (tempFahrenheit);
}
double fahrenheit(double n)
{
	//cout << setprecision(2) << endl;
	double tempCelsius = (n - 32)*5 / 9;
	return (tempCelsius);
}
double ConvertMiles(double n)
{
	//cout << setprecision(1) << endl;
	double tempKilo = n * 1.609;
	return (tempKilo);
}
double ConvertKilometers(double n)
{
	//cout << setprecision(1) << endl;
	double tempMile = (n * 0.62150404);
	return (tempMile);
}