//Verification comprehension

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

//Mise en place de la methode de construction par default
ScavTrap :: ScavTrap():ClapTrap("Default")
{
    std::cout <<"Constructor defaut ScavTrap" << std ::endl;
    this -> Set_HitPoints(100);
    this -> Set_EnergyPoint(50);
    this -> Set_AttackDommage(20); 
}

//Il manque la mise en place du destructeur 
ScavTrap :: ~ScavTrap()
{
    std::cout << "I'm destructor ScavTrap" << std ::endl;
}

//Mise en place de la construction par copie
ScavTrap::ScavTrap( const ScavTrap& rhs) : ClapTrap(rhs)
{
    this->_Name = rhs.Get_Name();
    this -> _HitPoints = rhs.Get_HitPoints();
    this -> _EnergyPoints = rhs.Get_EnergyPoint();
    this -> _AttackDommage = rhs.Get_AttackDommage();
    std::cout << "Constructor copie ScavTrap" << std::endl;
}

//Mise en place du constructeur qui est surcharge
ScavTrap :: ScavTrap (const std::string& name): ClapTrap(name)//Pour garder le principe d'encapsulation c'est la bonne pratique 
{
    //Mise en place d'une condition 
    std::cout << "Constructor surcharge ScavTrap" << std::endl;
    //Je n'ai pas besoin d'implementer  le nom ici
    this ->Set_HitPoints(100);
    this ->Set_EnergyPoint(50);//C'est fait manuellement y a t'il pas plus court
    this ->Set_AttackDommage(20);
}


//Mise en place des methodes demander par l'exercicen // Plus con tu meurs
void ScavTrap::guardGate()
{
    if(this->_EnergyPoints <= 0)
    {
        std::cout << "I'm not energie " << std::endl;
        return;
    }
    if(this->_HitPoints <= 0)
    {
        std::cout << "I'm dead" <<  std::endl;
    }
    std::cout << "It's guard gate" << std::endl;
}
    void ScavTrap::attack(const std::string& target)
    {
        if(this->_HitPoints>0)
        {
            if(this->_EnergyPoints > 0)
            {
                std::cout << "ClapTrap Attack to"<<  target << Get_AttackDommage() <<std::endl;
            }
            else    
                 std::cout << "I'm tired what are you doing"  "\n" << std::endl;
        }
        else
             std::cout << "I'm dead what are you doing"  "\n" << std::endl;
    }
