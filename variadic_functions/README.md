Welcome to the projet C - Variadic functions

Flowchart – Schéma du fonctionnement projet 2 tasks 3-print_all

Debut
-> va_start(args, format)
-> format est-il NULL ?

format est-il NULL ?
? Oui -> Ne rien faire
? Non -> Boucler sur chaque caractère de format

Boucler sur chaque caractère de format
-> Caractère reconnu ? (c, i, f, s)

Caractère reconnu ? (c, i, f, s)
? Oui -> Afficher la valeur selon le type
? Non -> Ignorer ce caractère et passer au suivant

Ignorer ce caractère et passer au suivant
-> Boucler sur chaque caractère de format

Afficher la valeur selon le type
-> Afficher le séparateur si nécessaire
-> Mettre le séparateur à ", "
-> Boucler sur chaque caractère de format

Fin de la chaîne format
-> Afficher '\n'
-> va_end(args)
-> Fin
