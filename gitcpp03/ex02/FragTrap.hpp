#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#pragma once

class FragTrap : public ScavTrap
{
    public:
        //Mise en oeuvre du constructeur par default
        FragTrap();

        //Constructeur par copie
        FragTrap(const FragTrap& rhs);

        //Constructeur qui est surcharge(IL y a pas d'autres noms)
        FragTrap(const std::string& name);

        //Mise en liens des methodes que recuperent la classe enfants
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        //Mise au propre des methodes qui sont en liens avec le parents
        void highFivesGuys(void);    
};