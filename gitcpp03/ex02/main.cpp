
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>


int main()
{
    std::cout << "\n=== Test des constructeurs avec héritage ===" << std::endl;
    {
        std::cout << "\n--- Création d'un ScavTrap par défaut ---" << std::endl;
        ScavTrap defaultScav;
        
        std::cout << "\n--- Création d'un ScavTrap nommé ---" << std::endl;
        ScavTrap namedScav("Guardian");
        
        std::cout << "\n--- Test du constructeur par copie ---" << std::endl;
        ScavTrap copyScav(namedScav);
        
        std::cout << "\n=== Vérification des valeurs initiales ===" << std::endl;
        std::cout << "Nom: " << namedScav.Get_Name() << std::endl;
        std::cout << "Points de vie: " << namedScav.Get_HitPoints() << " (devrait être 100)" << std::endl;
        std::cout << "Points d'énergie: " << namedScav.Get_EnergyPoint() << " (devrait être 50)" << std::endl;
        std::cout << "Dommages d'attaque: " << namedScav.Get_AttackDommage() << " (devrait être 20)" << std::endl;

        std::cout << "\n=== Test des fonctionnalités ===" << std::endl;
        namedScav.attack("Intruder");
        namedScav.takeDamage(30);
        namedScav.beRepaired(20);
        namedScav.guardGate();

        std::cout << "\n=== Test des limites ===" << std::endl;
        // Test d'épuisement d'énergie
        for (int i = 0; i < 6; i++) {
            std::cout << "\nAction " << i + 1 << ": " << std::endl;
            namedScav.attack("Target");
            namedScav.beRepaired(5);
        }

        // Test de mort
        std::cout << "\n--- Test de mort du ScavTrap ---" << std::endl;
        namedScav.takeDamage(200);
        namedScav.attack("Target");
        namedScav.guardGate();
        
        std::cout << "\n=== Les destructeurs vont être appelés ===" << std::endl;
    } // Les destructeurs seront appelés ici

    std::cout << "\n=== Test de coexistence ClapTrap et ScavTrap ===" << std::endl;
    {
        ClapTrap clap("Clappy");
        ScavTrap scav("Scavy");
        
        std::cout << "\n--- Comparaison des attaques ---" << std::endl;
        clap.attack("Target1");
        scav.attack("Target2");
        
        std::cout << "\n=== Fin du test de coexistence ===" << std::endl;
    }

    return 0;
}