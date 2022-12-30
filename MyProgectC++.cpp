#include <iostream>
#include "PhoneBook.h"
int main() {
	setlocale(LC_ALL, "Russian");
	std::string name = "Alex", name2 = "Hanry", name3 = "Marck", name4 = "Bob", name5 = "Dilan";
	PhoneBook b1, b2;
	b1.AddContact(name, 3454545);
	b1.AddContact(name2, 555444);
	b1.AddContact(name3, 657567);
	b2.AddContact(name4, 2343434);
	b2.AddContact(name5, 777788);
	std::cout << b1[0] << "\n";
	std::cout << "Список контактов:\n";
	b1.ShowBook();
	b1.SetContact(2);
	b1.ShowBook();
	if (b1 > b2)
		std::cout << "Записная книга №1 больше!";
	else
		std::cout << "Записная книга №2 больше!";
	return 0;
}