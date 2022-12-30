#pragma once
#include <string>
#include <iostream>
class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void AddContact(const std::string& name, int number);
	void SetContact(int index);
	const std::string GetName(int index)const;
	int GetNumber(int index)const;
	void ShowBook();
	bool operator>(PhoneBook& obj);
	bool operator>=(PhoneBook& obj);
	bool operator<(PhoneBook& obj);
	bool operator<=(PhoneBook& obj);
	//так как это массив string, мы возвращаем string, из-за того что строка может быть большой передаем по ссылке
	//и чтобы невозможно было изменить случайно имя делаем ее const
	const std::string& operator[](int index);
private:
	unsigned int _index;
	std::string* _names;
	int* _numbers;
};
