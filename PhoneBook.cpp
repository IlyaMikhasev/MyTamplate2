#include "PhoneBook.h"

PhoneBook::PhoneBook(){
	_index = 0;
	_names = new std::string[_index];
	_numbers = new int[_index];
}

PhoneBook::~PhoneBook(){
	delete[] _names;
	delete[] _numbers;
}

void PhoneBook::AddContact(const std::string& name, int number) {

		std::string* newnames = new std::string[_index + 1];
		int* newnum = new int[_index + 1];
		for (size_t i = 0; i < _index; i++) {
			newnames[i] = _names[i];
			newnum[i] = _numbers[i];
		}
		newnames[_index] = name;
		newnum[_index] = number;
		delete[] _names;
		_names = newnames;
		delete[] _numbers;
		_numbers = newnum;
		_index++;
	
}

void PhoneBook::SetContact(int index){
	std::string newname;
	int newNumber;
	std::cout << "Контакт: " << _names[index] << "\t" << _numbers[index] << '\n';
	std::cout << "Введите новое имя ->";
	std::cin >> _names[index];
	std::cout << "Введите новый номер ->";
	std::cin >> _numbers[index];
}

const std::string PhoneBook::GetName(int index) const{
	return _names[index];
}

int PhoneBook::GetNumber(int index) const{
	return _numbers[index];
}

void PhoneBook::ShowBook(){
	for (size_t i = 0; i < _index; i++)	{
		std::cout << _names[i] << '\t' << _numbers[i] << '\n';
	}
	std::cout << std::endl;
}


bool PhoneBook::operator>(PhoneBook& obj){
	return _names->length() > obj._names->size();
}

bool PhoneBook::operator>=(PhoneBook& obj){
	return _names->size() >= obj._names->size();
}

bool PhoneBook::operator<(PhoneBook& obj){
	return _names->size() < obj._names->size();
}

bool PhoneBook::operator<=(PhoneBook& obj){
	return _names->size() <= obj._names->size();
}

const std::string& PhoneBook::operator[](int index){
	return _names[index];
}
