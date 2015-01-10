#include <iostream>
#include "Class.hpp"

int main()
{
  Class toto = Class();
  Class tata = Class(35, "tata");
  Class titi = Class(tata);

  std::cout << "toto : " << toto << ";" << std::endl << "tata : " << tata << ";" << std::endl<< "titi : " << titi<< std::endl; 

  std::cout << std::endl;
  toto.setName("toto");
  toto.setAge(13);
  std::cout << "toto : " << toto << ";" << std::endl << "tata : " << tata << ";" << std::endl<< "titi : " << titi<< std::endl; 

  std::cout << std::endl;
  titi.setName("titi");
  std::cout << "toto : " << toto << ";" << std::endl << "tata : " << tata << ";" << std::endl<< "titi : " << titi<< std::endl; 

  return 0;
}
