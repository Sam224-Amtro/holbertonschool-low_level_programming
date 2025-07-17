Welcome to the projet C - Variadic functions

Flowchart – Schéma du fonctionnement tasks 3-print_all.c
Voici un flowchart textuel que tu peux utiliser ou convertir en image avec un outil de

Début
  |
  V
va_start(args, format)
  |
  V
format existe ?
  |
  Oui
  |
  V
Boucle sur chaque caractère de format
  |
  V
+---------------------+
| Est-ce un format ?  |
| ('c', 'i', 'f', 's')|
+---------------------+
  |             |
  Oui           Non
  |             |
  V             V
Traiter selon   Passer
le type         au suivant
  |
  V
Afficher avec le séparateur
  |
  V
Mettre separator = ", "
  |
  V
Suivant caractère
  |
  V
Fin de format ?
  |
  Non ----> Reboucle
  |
  Oui
  |
  V
Afficher '\n'
  |
  V
va_end(args)
  |
  V
Fin
