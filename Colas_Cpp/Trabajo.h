#pragma once
#include <string>

class Trabajo{
private: 
	std::string title;
	std::string author;
	bool printed;

public:
	Trabajo(std::string t, std::string a);

	std::string getTitle();
	void setTitle(std::string t);
	std::string getAuthor();
	void setAuthor(std::string a);
	bool isPrinted();
	void setPrinted(bool p);
};

