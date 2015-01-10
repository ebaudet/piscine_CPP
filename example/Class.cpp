#include "Class.hpp"

Class::Class() {
  std::cout << "constructeur de Class sans argument" << std::endl;
  Class::_nbClass++;
  return ;
}

Class::Class(const int age, const std::string name) : _age(age), _name(name) {
  std::cout << "constructeur de Class avec argument" << std::endl;
  Class::_nbClass++;
  return ;
}
Class::Class(const Class &c) {
  std::cout << "constructeur de Class par copie" << std::endl;
  *this = c;
  Class::_nbClass++;
  return ;
}
Class::~Class() {
  std::cout << "destructeur Class" << std::endl;
  Class::_nbClass--;
  return ;
}
Class	&Class::operator=(Class const &c) {
  this->_name = c.getName();
  this->_age = c.getAge();
  return *this;
}

int		Class::getAge() const {
  return this->_age;
}
std::string	Class::getName() const {
  return this->_name;
}
bool		Class::setAge(const int age) {
  this->_age = age;
  return true;
}
bool		Class::setName(const std::string name) {
  this->_name = name;
  return true;
}
std::ostream	&operator<<(std::ostream &o, Class const &c) {
  o << "Class : name = " << c.getName() << ", age = " << c.getAge();
  return o;
}
int	Class::_nbClass = 0;
