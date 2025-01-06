
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main()
{
    std::cout << "=== Test des constructeurs ===" << std::endl;
    
    // Test du constructeur par défaut
    ClapTrap defaultTrap;
    std::cout << "\nClapTrap par défaut créé" << std::endl;
    
    // Test du constructeur avec nom
    ClapTrap namedTrap("Bob");
    std::cout << "ClapTrap nommé créé: " << namedTrap.Get_Name() << std::endl;
    
    // Test du constructeur par copie
    ClapTrap copyTrap(namedTrap);
    std::cout << "ClapTrap copié créé: " << copyTrap.Get_Name() << std::endl;

    std::cout << "\n=== Test des setteurs ===" << std::endl;
    defaultTrap.Set_Name("Alice");
    defaultTrap.Set_HitPoints(100);
    defaultTrap.Set_EnergyPoint(50);
    defaultTrap.Set_AttackDommage(20);
    
    std::cout << "\n=== Test des getters ===" << std::endl;
    std::cout << "Nom: " << defaultTrap.Get_Name() << std::endl;
    std::cout << "Points de vie: " << defaultTrap.Get_HitPoints() << std::endl;
    std::cout << "Points d'énergie: " << defaultTrap.Get_EnergyPoint() << std::endl;
    std::cout << "Dommages d'attaque: " << defaultTrap.Get_AttackDommage() << std::endl;

    std::cout << "\n=== Test des actions ===" << std::endl;
    // Test de l'attaque
    defaultTrap.attack("Target");
    
    // Test des dégâts
    defaultTrap.takeDamage(30);
    std::cout << "Points de vie après dégâts: " << defaultTrap.Get_HitPoints() << std::endl;
    
    // Test de la réparation
    defaultTrap.beRepaired(15);
    std::cout << "Points de vie après réparation: " << defaultTrap.Get_HitPoints() << std::endl;

    // Test avec points d'énergie épuisés
    for (int i = 0; i < 11; i++) {
        std::cout << "\nTentative d'attaque " << i + 1 << ": ";
        defaultTrap.attack("Target");
    }

    std::cout << "\n=== Test de prise de dégâts mortels ===" << std::endl;
    defaultTrap.takeDamage(20000);
    std::cout <<"Finish \n"<< std::endl;
    defaultTrap.attack("Target"); // Ne devrait pas fonctionner car plus de points de vie

}