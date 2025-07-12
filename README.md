# Rush00 - Piscine C 42

## Présentation

Ce projet est le tout premier "rush" de la piscine C à 42.  
Le but : écrire un programme capable d’afficher à l’écran un rectangle ou un carré avec des caractères précis, selon des dimensions données en argument.  
Le challenge principal est de bien respecter la norme, de travailler en équipe, et de structurer son code dès le départ !

## Fichiers attendus

- `main.c` : contient la fonction main, qui lance la fonction rush avec les dimensions souhaitées.
- `ft_putchar.c` : contient la fonction utilitaire `ft_putchar` (affiche un caractère à l'écran, à l'aide de `write`).
- `rush00.c` : contient la fonction principale `rush`, qui génère et affiche le rectangle selon les consignes.

## Utilisation

### Compilation

Pour compiler le projet, lancez :

```sh
cc -Wall -Wextra -Werror main.c ft_putchar.c rush00.c -o rush00
