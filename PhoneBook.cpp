#include "PhoneBook.h"

PhoneBook::PhoneBook(const std::string& name, int number):_name(name),_number(number) {}

const std::string& PhoneBook::GetName() const{
	return _name;
}

void PhoneBook::SetName(const std::string& name){
	_name = name;
}

int PhoneBook::GetNumber() const{
	return _number;
}

void PhoneBook::SetNumber(int number){
	_number = number;
}

bool PhoneBook::operator>(PhoneBook& obj){
	_name.size() > obj.GetName().size();
	return false;
}

bool PhoneBook::operator>=(PhoneBook& obj) {
	_name.size() >= obj.GetName().size();
	return false;
}

bool PhoneBook::operator<(PhoneBook& obj) {
	_name.size() < obj.GetName().size();
	return false;
}

bool PhoneBook::operator<=(PhoneBook& obj) {
	_name.size() <= obj.GetName().size();
	return false;
}

const std::string& PhoneBook::operator[](int index) {
	return _ARRnames[index];
}

void PhoneBook::SetArrNumber(int index, int number){
	if ((index >= 0) && (index < 4))
		_ARRnumber[index] = number;
}

void PhoneBook::SetArrNames(const std::string& name, int index){
	if ((index >= 0) && (index < 4))
		_ARRnames[index] = name;
}
