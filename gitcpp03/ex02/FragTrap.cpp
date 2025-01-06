#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//Mise en place du constructeur par degfaut
FragTrap :: FragTrap():ScavTrap("default"){
    std::cout << "Constructor Default FragTrap" << std::endl;
    this -> Set_HitPoints(100);
    this -> Set_EnergyPoint(100);
    this -> Set_AttackDommage(30); 

};

//Mise en place du constructeur par copie
FragTrap::FragTrap(const FragTrap& rhs):ScavTrap(rhs)
{    
    std::cout << "Constructor Copie FragTrap" << std::endl; 
    //Il me semble que c'est une bonne pratique de rien mettre 
}

//Mise en place du constructeur qui est en surcharge
FragTrap::FragTrap(const std::string& name):ScavTrap(name){
//IL me semble que l'on est pas obliger de mettre le name car il s initialise tous seul
    std::cout << "Constructor Surcharge FragTrap" << std::endl;
    this -> Set_Name(name);
    this -> Set_HitPoints(Get_HitPoints());
    this -> Set_EnergyPoint(Get_EnergyPoint());
    this -> Set_AttackDommage(Get_EnergyPoint());
}

//Mise en place de la fonction  demander par l'exercuce 
void FragTrap::highFivesGuys()
{
    std::cout <<  "High Fives Guys" << std::endl;
}





