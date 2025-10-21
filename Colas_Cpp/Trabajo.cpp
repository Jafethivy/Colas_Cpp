#include "Trabajo.h"

Trabajo::Trabajo(std::string t, std::string a) : title(t), author(a), printed(false) {}

std::string Trabajo::getTitle() {
	return title;
}
void Trabajo::setTitle(std::string t) {
	title = t;
}
std::string Trabajo::getAuthor() {
	return author;
}
void Trabajo::setAuthor(std::string a) {
	author = a;
}
bool Trabajo::isPrinted() {
	return printed;
}
void Trabajo::setPrinted(bool p) {
	printed = p;
}