//Creation de la class ClapTrap

#include <iostream>
#include <string>
#pragma once
class ClapTrap
{
    protected:
        std::string _Name;
        int     _HitPoints;
        int     _EnergyPoints;
        int     _AttackDommage;
    public:
        //Mise en place des constructeur par default
        ClapTrap();

        ///Mise en place du constructeur par copie
        ClapTrap(const ClapTrap& rhs);
        
        //Mise en place d;un constructeur de surcharge 
        ClapTrap(const std::string& name);

        //Mise en place du destructeur 
        ~ClapTrap();

        //Mise en place des methodes demander par l'exercice
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
    //Mise en place des setteur
    void Set_Name(std::string const& );
    void Set_HitPoints(int);
    void Set_EnergyPoint(int);
    void Set_AttackDommage(int);

    //Mise en place des guetteurs
    std::string Get_Name()const;
    int Get_HitPoints()const;
    int Get_EnergyPoint()const;
    int Get_AttackDommage()const;
};