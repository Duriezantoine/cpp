#include "ScavTrap.hpp"
#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n=== Test des constructeurs avec héritage ===" << std::endl;
    
        std::cout << "\n--- Création d'un ScavTrap par défaut ---" << std::endl;
        ScavTrap defaultScav;
        
        std::cout << "\n--- Création d'un ScavTrap nommé ---" << std::endl;
        ScavTrap namedScav("Guardian");
        
        std::cout << "\n--- Test du constructeur par copie ---" << std::endl;
        // ScavTrap copyScav(namedScav);
        ScavTrap Intruder("Intruder");
        // ScavTrap Target("Target");
    
        // ClapTrap BB ("sa");
        std::cout<< "sasa" <<std::endl;
        std::cout << "\n=== Test des limites ===" << std::endl;
        // Test d'épuisement d'énergie
        for (int i = 0; i < 6; i++) {
            std::cout << "\nAction " << i + 1 << ": " << std::endl;
            defaultScav.attack("Target");
            namedScav.beRepaired(5);
        }

        // Test de mort
        std::cout << "\n--- Test de mort du ScavTrap ---" << std::endl;
        // namedScav.takeDamage(200);
        defaultScav.attack("charle");
        namedScav.guardGate();
        
        std::cout << "\n=== Les destructeurs vont être appelés ===" << std::endl;
     // Les destructeurs seront appelés ici

    std::cout << "\n=== Test de coexistence ClapTrap et ScavTrap ===" << std::endl;
    {
        ScavTrap Target1("Target1");
        ScavTrap Target2("Target2");
        ClapTrap clap("Clappy");
        ScavTrap scav("Scavy");
        
        std::cout << "\n--- Comparaison des attaques ---" << std::endl;
        clap.attack("Target1");
        scav.attack("Target2");
        
        std::cout << "\n=== Fin du test de coexistence ===" << std::endl;
    }

    return 0;
}