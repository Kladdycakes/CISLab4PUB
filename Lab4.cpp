//CIS 180
//Assignment 4
//Book, Ian

#include <iostream>
#include <cmath> 
#include <iomanip>
#include <cstdlib> //random numbers
#include <ctime> //needed for seed generation

using namespace std;

int main()
{
	
	int menuChoice;
	
	int num2Add; //addition variables 
	int userAdd;
	int correctAdd;
	int num1Add;
	
	int num1Sub; // subtraction variables
	int num2Sub;
	int userSub;
	int correctSub;
	
	int num1Mult; // multiplication variables
	int num2Mult;
	int userMult;
	int correctMult;
	
	int num1Div; // division variables
	int num2Div;
	int userDiv ;
	int correctDiv;

	
	unsigned seed; //sets random seed based off time
	srand (time(0));
	
	const int RANGE = 10;
	const int RANGE_SINGLE = 9;
	const int MENU_MAX = 5;
	const int MENU_MIN = 1;

	
	do //tests for program end 
	{
		do //tests for valid input
		{
					
			cout << "Menu \n"   //begins menu 
				 << "1. Addition problem \n"
				 << "2. Subtraction problem \n"
				 << "3. Multiplication problem \n"
				 << "4. Division problem \n"
				 << "5. Quit this program \n \n"
				 << "Enter your choice (1-5): ";
			cin >> menuChoice;
			cout << "\n \n";
			while ( menuChoice < MENU_MIN || menuChoice > MENU_MAX )
				{
					cout << "The valid choices are 1, 2, 3, 4, and 5. Please choose: ";
				cin >> menuChoice;
				}
		}while ( menuChoice < MENU_MIN || menuChoice > MENU_MAX );
			
			
			switch (menuChoice)
			{
				case 1: // Addition case
					
					num1Add = rand() % RANGE;
					num2Add = rand() % RANGE;
					correctAdd = num1Add + num2Add;
					
					cout << setw(3) << num1Add << endl;
					cout << "+ " << num2Add << endl;
					cout << "---\n";
					cin >> userAdd;

					
					if ( userAdd != correctAdd )
						{
						cout << "Sorry, the correct answer is " << correctAdd << "\n\n";
						}
					else 
						cout << "Congratulations! That's right.\n \n";
					break;
				
				case 2: // Subtraction Case
						
					num1Sub = rand() % RANGE;
					num2Sub = rand() % RANGE;
					while (num2Sub > num1Sub)
					{
						num2Sub = rand() % RANGE;
					}
					correctSub = num1Sub - num2Sub;
					
					
					cout << setw(3) << num1Sub << endl;
					cout << "- " << num2Sub << endl;
					cout << "---\n";
					cin >> userSub;
					
					if ( userSub != correctSub )
						{
						cout << "Sorry, the correct answer is " << correctSub << "\n\n";
						}
					else 
						cout << "Congratulations! That's right.\n \n";
					break;
					
				case 3: //Multiplication Case
					
					num1Mult = rand() % RANGE + 1;
					num2Mult = rand() % RANGE;
					correctMult = num1Mult * num2Mult;
					
					cout << setw(3) << num1Mult << endl;
					cout << "* " << num2Mult << endl;
					cout << "---\n";
					cin >> userMult;
				
					
					if ( userMult != correctMult )
						{
						cout << "Sorry, the correct answer is " << correctMult << "\n\n";
						}
					else 
						cout << "Congratulations! That's right.\n \n";
					break;
					
				case 4: //Division Case
					  
					num2Div = rand() % RANGE_SINGLE;
					num1Div = num2Div * (rand() % RANGE + 1);
					correctDiv = num1Div / num2Div;
					
					cout << num1Div << " / " << num2Div << " = ";
					cin >> userDiv;

					
					if ( userDiv != correctDiv )
						{
						cout << "Sorry, the correct answer is " << correctDiv << "\n\n";
						}
					else 
						cout << "Congratulations! That's right.\n \n";
					break;
						
				case 5: 
					cout << "Thank you for using math tutor!\n";
					break;
				
				//default:
				//	cout << "The valid choices are 1, 2, 3, 4, and 5. Please choose: ";
			//		cin >> menuChoice;
					
			}
	
	
	}while (menuChoice != MENU_MAX ); //program will continue to run until 5 is entered 
	
	return 0;
}

