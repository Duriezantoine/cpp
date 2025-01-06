//Verification des connaissances

//Mise en place des bibliotheque demande
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#pragma once
class ScavTrap : public ClapTrap
{
    public:
        //Il manqye le destructor connards
        ~ScavTrap();
        //MIse en place du constructeur par default 
        ScavTrap();
        //Mise en place de la construction par copie
        ScavTrap(const ScavTrap& rhs);

        //Mise en place du constructeur qui est alors surcharge 
        ScavTrap(const std::string& name);

        //Mise en place des methodes demander par l exercice
        void guardGate();

    // private:
        //Mise en place des methodes propres a la classe
};