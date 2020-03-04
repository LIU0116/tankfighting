#include<string>
#include<iostream>

class myClass
{
private:
	char* str;
public:
	myClass(char* str1 = "default string")
	{
		str = new char[strlen(str1) + 1];
		strcpy(str, str1);
		std::cout << "constructor called" << std::endl;
	}
	~myClass()
	{
		std::cout << "destrustor called" << std::endl;
	}

	void showChar()
	{
		std::cout << str << std::endl;
	}

	myClass& operator=(const myClass& ele)
	{
		delete[] str;
		str = new char[strlen(ele.str) + 1];
		strcpy(str, ele.str);
		return *this;
	}
};


int main()
{
	myClass class1("string1");

	myClass class2;
	class2.showChar();

	class2 = class1;

	class1.showChar();
	class2.showChar();
	
	std::cin.get();
	return 0;
}