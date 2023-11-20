### Nom du projet : Simulateur de combat Pokémon

#### Description du projet
Créez un simple simulateur de combat Pokémon. Dans ce simulateur, les joueurs peuvent choisir différents Pokémon à combattre. Chaque Pokémon possède ses propres attributs, tels que le type, la santé (HP), la puissance d'attaque et la puissance de défense. Pendant la bataille, deux Pokémon s'attaquent à tour de rôle jusqu'à ce que la santé de l'un atteigne zéro.

#### Exigences de compétences
- Conception orientée objet (création et héritage de classes)
- Utilisation de collections (pour stocker et gérer des objets Pokémon)
- Gestion des exceptions (gestion des entrées utilisateur invalides, etc.)
- Flux de contrôle de base (boucles et jugements conditionnels)

#### Détails du projet

1. **Concevoir une classe Pokémon**
    - Créez une classe `Pokemon` de base, contenant des propriétés telles que `name` (nom), `type` (type), `hp` (valeur de santé), `attack` (puissance d'attaque) et `defense` (puissance de défense) .
    - Ajoutez la méthode `attack(Pokemon target)` à cette classe, qui est utilisée pour attaquer un autre Pokémon pendant le combat.

2. **Créez différents types de Pokémon**
    - Étendez la classe `Pokemon` pour créer différents types de Pokémon, tels que `FirePokemon`, `WaterPokemon`, etc.
    - Chaque sous-classe peut avoir des propriétés ou des méthodes spéciales, telles que différentes méthodes d'attaque.

3. **Mettre en œuvre la logique de combat**
    - Créez une classe `Battle` pour simuler une bataille entre deux Pokémon.
    - Pendant la bataille, les Pokémon s'attaquent à tour de rôle jusqu'à ce que les PV d'un camp atteignent zéro.

4. **Interaction utilisateur**
    - Permet aux utilisateurs de sélectionner Pokémon dans une liste pour combattre.
    - Pendant la bataille, les résultats de chaque attaque et les PV restants du Pokémon sont affichés.

5. **Gestion des exceptions**
    - Gérez les erreurs de saisie de l'utilisateur, telles que la sélection d'un Pokémon qui n'existe pas ou la saisie de commandes illégales.