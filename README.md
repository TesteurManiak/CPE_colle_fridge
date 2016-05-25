# CPE_colle_power4

Colle fridge :
L'objectif est de créer un frigo contenant plusieurs ingrédients dont la quantité de base est 50 (tomato, ognons, dough, cheese, ham, pepper, pasta, olive). Le programme permet d'exécuter diférente commandes. La commande "disp fridge" permet d'afficher le contenu du frigo, "addToFridge <ingrédient> <quantité>" permet d'ajouter une certaine quantité d'un ingrédient, la commande "exit" permet de quitter le programme, la commande "make <plat>" permet de créer un plat à partir des ingrédients disponibles. Les plats possibles sont "make pizza" et "make pasta". La pizza consommera 5 tomates, 1 pate à pizza, 3 oignons, 8 olives, 8 poivrons, 4 jambons, 3 fromages. Le plat de pates consommera 5 tomates, 2 pasta, 6 olives, 4 jambons, 3 fromages. Il faut également que lorsque la commande "exit" est utilisée un fichier de sauvegarde nommé ".save" soit créé et sauvegarde les quantités d'ingrédients présents dans le frigo. Ce fichier sera lu au lancement du programme, s'il est inexistant ou invalide le programme se lancera normalement avec les quantités d'ingrédients par défaut c'est à dire 50 ingrédients de chaque.

Partie réalisée :
- toutes les commandes sont gérées et fonctionnent parfaitement.
- gestion d'erreur complète (gestion du Ctrl + D, message d'erreur en cas de commandes ou de paramètre invalide)

Partie à faire:
- un fichier ".save" est créé mais rien n'est écrit dedans (problème au niveau des flags du open).
- charger un fichier ".save" au lancement du programme.