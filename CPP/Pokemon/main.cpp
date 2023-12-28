#include "Pokemon_Class/Pokemon.hpp"
#include "Pokemon_Class/WaterPokemon.hpp"
#include "Pokemon_Class/FirePokemon.hpp"
#include "Pokemon_Class/GrassPokemon.hpp"
#include "Pokemon_Class/ElectricPokemon.hpp"

#include "Dresseur_Class/Dresseur.hpp"

#include "Arene_Class/Arene.hpp"
#include "Arene_Class/Badge.hpp"

int main(int, char**) {
    
    ElectricPokemon pikachu("Pikachu", 100, Electric, 100, 100, 100, 100, 100, 100);
    WaterPokemon carapuce("Carapuce", 100, Water, 100, 100, 100, 100, 100, 100);
    FirePokemon salameche("Salameche", 100, Fire, 100, 100, 100, 100, 100, 100);
    GrassPokemon bulbizarre("Bulbizarre", 100, Grass, 100, 100, 100, 100, 100, 100);

    Dresseur TOTO("TOTO");
    TOTO.AjouterPokemon(pikachu);
    TOTO.AjouterPokemon(carapuce);

    Dresseur TITI("TITI");
    TITI.AjouterPokemon(salameche);
    TITI.AjouterPokemon(bulbizarre);

    Badge red_badge("badge", Red);
    Arene arene("arene", TOTO, red_badge);

    bool res_TITI = arene.challenger(TITI);
    if (res_TITI) {
        std::cout << "TITI a perdu" << std::endl;
    } else {
        std::cout << "TITI a ganié" << std::endl;
    }

    TITI.afficherBadge();




    return 0;
}

/**
 * Exception exemplaire
*/
/*
class Chaine {
    public:
    class ExceptionBornes {};

    char& operator[] (int index) {
        if (index < 0 || index >= taille) {
            throw ExceptionBornes();
        }
        return chaine[index];
    }
};
*/