
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

    //Mise en place du constructeur par default
    ClapTrap::ClapTrap():_Name("Default"), 
                _HitPoints(100),
                _EnergyPoints(50),
                _AttackDommage(20){
                    std::cout<<"Constructor Default ClapTrap" << std::endl;
                }

    //Mise en place du constructeur par copie
    ClapTrap::ClapTrap(const ClapTrap& rhs) : _Name(rhs._Name),
                                          _HitPoints(rhs._HitPoints),
                                          _EnergyPoints(rhs._EnergyPoints),
                                          _AttackDommage(rhs._AttackDommage) {
                                            std::cout <<"Constructor Copie ClaoTrap"<< std::endl;
                                          }  
    //Mise en d'un constructeur qui est surcharge
    ClapTrap::ClapTrap(const std::string& name):_Name(name),
                _HitPoints(100),
                _EnergyPoints(50),
                _AttackDommage(20){
                    std::cout << "COnstructor qui est surcharge" << std::endl;
                }
    
    //MIse en place du destructeur 
    ClapTrap::~ClapTrap()
    {
        std::cout <<"ClapTrap Call destructor" << std::endl;
    }

    //Les methodes setteur
    void ClapTrap::Set_Name(std::string const& name)
    {
        this->_Name = name;
    }
    void ClapTrap::Set_HitPoints(int healt)
    {
        this->_HitPoints = healt;
    }
    void ClapTrap::Set_EnergyPoint(int energy_points)
    {
        this->_EnergyPoints = energy_points;
    }
    void ClapTrap::Set_AttackDommage(int attack)
    {
        this->_AttackDommage = attack;
    }

    //MIse en place des methodes guetteur
    std::string ClapTrap::Get_Name()const
    {
        return(this->_Name);
    }
    int ClapTrap::Get_HitPoints()const
    {
        return(this->_HitPoints);
    }
    int ClapTrap::Get_EnergyPoint()const
    {
        return(this->_EnergyPoints);
    }
    int ClapTrap::Get_AttackDommage()const
    {
        return(this->_AttackDommage);
    }
    //Mise en place des methodes demander par l'exercice

    void ClapTrap::attack(const std::string& target)
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
    void ClapTrap::takeDamage(unsigned int amount)// Il y a une erreur ici le takedommage
    {
        if(this->Get_EnergyPoint()>0)
        {
            if(this->Get_HitPoints()<=0)
            {
                std::cout << "I'm dead asshole" << std::endl; 
                return;
            }
            std::cout << "I'm take dammage " << amount << std::endl;
            int tmp;
            tmp =  Get_HitPoints() - amount;
            if(tmp>0)
                Set_HitPoints(tmp);
            else 
                Set_HitPoints(0);
            Set_EnergyPoint(Get_EnergyPoint()-1);
            std::cout << "\n"<< std::endl;       
        }
        else
            std::cout << "I don't have energy" <<  std::endl;
    }
    void ClapTrap::beRepaired(unsigned int amount)
    {
        if(this->Get_HitPoints() <=0)
        {
            std::cout << "I'm dead asshole" << std::endl;
            return;
        }
        if(_EnergyPoints >=(int)amount )        // ERREUR: on vérifie juste si > 0, pas >=amount
        {
            _HitPoints +=amount;               // ERREUR: orthographe (_HitPointsh)
            _EnergyPoints -= amount;         // ERREUR: ne doit déduire que 1 point d'énergie, pas amount
            std::cout << "Repared " << amount << " But energy points is " << _EnergyPoints << "\n";  // Message incomplet     
        }
        else    
            std::cout << "Not have Energy" << std::endl;
    }