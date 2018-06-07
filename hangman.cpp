#include "stdafx.h"
#include<iostream>
using namespace std;
#include<conio.h>
#include<string>

#include<time.h>

//string dictionary_of_words[] = {"islamabad","lahore","kamra","hattian","karachi","multan","peshawar","quetta","pindi","sibi"};
int actual_integer=0;
int Guess_integer = 0;
char actual_alphabet = 0;
char Guess_alphabet = 0;
int level_three = 0;
string actual_word;
string guess_word;
int count = 0;
int Input = 0;
int choice = 0;
int random_alphabet = 0;
char list_of_alphabets[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
string input3()
{
	cout << "Guess which word is :";
	cin >> guess_word;
	return guess_word;
}
int input2()
{
	cout << "Guess which alphabet is :";
	cin >> Guess_alphabet;
	return Guess_alphabet;
}
int input1()
{
	cout << "Guess which integer is :";
		cin >> Guess_integer;
		return Guess_integer;
}

void Display()
{
	
		 cout << "\t\t\t\t\t  +---+  " << endl; 
		 cout << "\t\t\t\t\t  |   |  " << endl; 
		 cout << "\t\t\t\t\t      |  " << endl; 
		 cout << "\t\t\t\t\t      |  " << endl; 
		 cout << "\t\t\t\t\t      |  " << endl; 
		 cout << "\t\t\t\t\t      |  " << endl; 
		 cout << "\t\t\t\t\t=========" << endl; 
	
}
void For_first_chance()
{
	
		cout << "\t\t\t\t\t  +---+  " << endl;
		cout << "\t\t\t\t\t  |   |  " << endl;
		cout << "\t\t\t\t\t  O   |  " << endl;
		cout << "\t\t\t\t\t      |  " << endl;
		cout << "\t\t\t\t\t      |  " << endl;
		cout << "\t\t\t\t\t      |  " << endl;
		cout << "\t\t\t\t\t=========" << endl;
	
	cout << "Avail your second chance \n";
}
void For_second_chance()
{
	
		 cout << "\t\t\t\t\t  +---+  " << endl; 
		 cout << "\t\t\t\t\t  |   |  " << endl; 
		 cout << "\t\t\t\t\t  O   |  " << endl; 
		 cout << "\t\t\t\t\t /|\\  |  " << endl; 
		 cout << "\t\t\t\t\t      |  " << endl; 
		 cout << "\t\t\t\t\t      |  " << endl;
		 cout << "\t\t\t\t\t=========" << endl;
	
	cout << "Avail your last chance n";
}
void For_third_chance()
{
	
		 cout << "\t\t\t\t\t  +---+  " << endl; 
		 cout << "\t\t\t\t\t  |   |  " << endl;
		 cout << "\t\t\t\t\t  O   |  " << endl; 
		 cout << "\t\t\t\t\t /|\\  |  " << endl; 
		 cout << "\t\t\t\t\t / \\  |  " << endl; 
		 cout << "\t\t\t\t\t      |  " << endl; 
		 cout << "\t\t\t\t\t=========" << endl<<"\t\t\tGame Over\n"; 
		 if (level_three==1)
		 {
			 cout << "\t\tthe name of city is :" << actual_word;
		 }
		 
	
}


void third_level()
{
	cout << "\t\t\tLevel three\n";
	int chk = 0;
	int integer, lenght = 0;
	int count = 0;
	
	string  dictionary_of_cities[] = { "islamabad-","lahore-","pindi-","sibi-","faislabad-","attock-","quetta-","karachi-" };
	string list2[] = { "---------","------","-----","----","----------","------","------","-------" };
	srand(time(NULL));
	integer = rand() % 8;
	actual_word = dictionary_of_cities[integer];
	cout<<"\t\t\t\t\t"<<list2[integer];
	//cout << list1[integer];

	for (int j = 0;dictionary_of_cities[integer][j] != '-';j++)
	{
		lenght++;
	}
	cout <<endl<<"\t\t\t\t\t"<<"lenght :"<<lenght;	
	cout << "\nguess which word is\nHint :name of city ";
	cout << "and the fourth word is "<< dictionary_of_cities[integer][3]<<endl;
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			cout << "Guess which word is :\n";
			cin >> guess_word;
		}
		else
		{
			guess_word = input3();
		}
		
		for (int j = 0;j < lenght;j++)
		{
			if (guess_word[j] != actual_word[j])
			{
				chk = 1;
			}	
			else
			{
				chk = 0;
			}
		}
		count++;
		if (chk == 1)
		{
			if (count == 1)
			{
				For_first_chance();
				//chk = 0;
			}
			else if (count == 2)
			{
				For_second_chance();
			}

			else
			{
				For_third_chance();
				break;
			}
		}
		if (chk == 0)
		{
			cout << "\t\t\tCOngratulations You Win level three\n";
			break;
		}
	}
}
void second_level()
{
	cout << "\t\t\tLevel two\n";
	int count = 0;
	srand(time(NULL));
	actual_alphabet = rand() % 26;
	//cout << list_of_alphabets[actual_alphabet];

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			cout << "Guess which alphabet is :";
			cin >> Guess_alphabet;
		}
		else
		{
			Guess_alphabet = input2();
		}
		if (Guess_alphabet != actual_alphabet)
		{
			count++;

			if (count == 1)
			{
				For_first_chance();
			}
			else if (count == 2)
			{
				For_second_chance();
			}

			else
			{
				For_third_chance();
				break;
			}
		}
		else
		{
			cout << "\t\t\tCOngratulations You Win level two\n";
			third_level();
		}
	}
}
void First_level()
{
	cout << "t\t\tLevel one\n";
	int count = 0;
	srand(time(NULL));
	actual_integer = rand() % 10;
	//cout << actual_integer<<endl;	
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			cout << "Guess which integer is :" << endl << "Note :Integer ranges from from 0 to 10\n";
			cin >> Guess_integer;
		}
		else
		{
			Guess_integer = input1();
		}
		if (Guess_integer != actual_integer)
		{
			count++;

			if (count == 1)
			{
				For_first_chance();
			}
			else if (count == 2)
			{
				For_second_chance();
			}

			else
			{
				For_third_chance();
				break;
			}
		}
		else
		{
			cout << "\t\t\tCOngratulations You Win level one\n";
			second_level();
		}
	}
}
int main()
{
	//cout << sizeof(dictionary_of_words);
	cout<<"\t\t\tWelcome to HANGMAN\n";
	cout << "Which Level do you want to play?\n1)First_level :Guess an integer\n2)second_level:Guess an alphabet\n3)third_level:Guess an Word\n4)Exit\nchoice:";
	cin >> choice;
	switch (choice)
	{
	case 1:
		Display();
		First_level();
		break;
	case 2:
		Display();
		second_level();
		break;
	case 3:
		level_three = 1;
		Display();
		third_level();
		break;

	default:
		exit(0);
		break;
	}	
	_getch();
	return 0;
}

