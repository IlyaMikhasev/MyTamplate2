#pragma once
#include <string>
#include <iostream>
class PhoneBook
{
public:
	PhoneBook(const std::string& name, int number);
	const std::string& GetName()const;
	void SetName(const std::string& name);
	int GetNumber()const;
	void SetNumber(int number);
	bool operator>(PhoneBook& obj);
	bool operator>=(PhoneBook& obj);
	bool operator<(PhoneBook& obj);
	bool operator<=(PhoneBook& obj);
	const std::string& operator[](int index);
	void SetArrNumber(int index, int item);
	void SetArrNames(const std::string& name, int index);
private:
	int _ARRnumber[4];
	std::string _ARRnames[4];
	std::string _name;
	int _number;
	int _index;
};
struct Abonent
{
	std::string name;
	int number;
};
