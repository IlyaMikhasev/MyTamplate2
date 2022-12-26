#include <iostream>
#include "PhoneBook.h"
int main() {
	setlocale(LC_ALL, "Russian");
	PhoneBook abonent1("Alex", 3454545), abonent2("Mary", 2367575), abonent3("Bilbo", 1244778), abonent4("Li", 0235);
	PhoneBook mass[4]{abonent1,abonent2,abonent3,abonent4};
	std::string names[4]{ abonent1.GetName(),
						 abonent2.GetName(),
						 abonent3.GetName(),
						 abonent4.GetName() };
	int number[4]{ abonent1.GetNumber(),
				   abonent2.GetNumber(),
				   abonent3.GetNumber(),
				   abonent4.GetNumber() };
	std::cout << names[2] << "\n";
	std::cout << mass[1].GetName();
	return 0;
}