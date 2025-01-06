//Verification des connaissances

//Mise en place des bibliotheque demande
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{//Mise en place d'attack
    public:
        //MIse en place du constructeur par default 
        ScavTrap();
        //Mise en place de la construction par copie
        ScavTrap(const ScavTrap& rhs);

        //Mise en place du constructeur qui est alors surcharge 
        ScavTrap(const std::string& name);

        //IL manque la mise en place du destructeur 
        ~ScavTrap();
        //Mise en place de la methode specifique de l'exercice
        void guardGate();
        void attack(const std::string& target);
        //Mise en place de la fonction attack qui demander par l'exercice
};