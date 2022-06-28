//Hoppock, Zachary
//10/21/2020
//mailingAddress.cpp
//Input details about your name and address and it will be outputted
//Version #1

/*
Write a program that outputs:
Your name 
Address 
City, State 
Zip code
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first_name;
  string last_name;
  string address_number;
  string address_street;
  string city;
  string state;
  string zip;

  cout << "What is your first name?"<< endl;
  getline(cin, first_name);

  cout << "What is your last name?"<< endl;
  getline(cin, last_name);

  cout << "What is your address number?"<< endl;
  getline(cin, address_number);

  cout << "What street do you live on?"<< endl;
  getline(cin, address_street);

  cout << "What city do you live in?"<< endl;
  getline(cin, city);

  cout << "What state do you live in?"<< endl;
  getline(cin, state);

  cout << "What is your Zip Code?"<< endl;
  getline(cin, zip);

  cout << "\033[2J\033[0;0H";

  cout << first_name << " " << last_name << endl;
  cout << address_number << " " << address_street << endl;
  cout << city << ", "<< state << endl;
  cout << zip;
  return 0;
}