#ifndef CLASS_HPP
# define CLASS_HPP
# include <iostream>
class Class
{
private:
  int		_age;
  std::string	_name;
  static int	_nbClass;

public:
  Class(); // constructeur
  Class(const int age, const std::string name);
  Class(const Class &c); // constructeur par copie
  ~Class(); // destructeur
  
  int		getAge() const;
  std::string	getName() const;
  bool		setAge(const int age);
  bool		setName(const std::string name);
  
  Class		&operator=(Class const &c);
};
std::ostream 	&operator<<(std::ostream &o, Class const &c);
#endif
