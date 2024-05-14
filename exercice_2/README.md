
# Introduction au Projet d'Activation

Ce projet est une application simple conçue pour vérifier l'état d'activation d'un utilisateur en utilisant une clé d'activation spécifique sur une application. L'utilisateur dispose d'un certain nombre de tentatives pour entrer la clé d'activation avant que l'accès à l'application ne soit limité.

## Structure du Projet

Le projet est organisé en plusieurs parties clés :

### Source Code (`src`)

- **Activation.cpp** : Implémente la logique d'activation, y compris la vérification de la clé d'activation et la gestion du nombre de tentatives.
- **main.cpp** : Point d'entrée de l'application, initialise l'objet `Activation` et gère l'affichage des résultats.

### Données (`data`)

- **numberOfTry.txt** : Stocke le nombre de tentatives restantes pour l'activation.
- **userSerial.reg** : Fichier contenant la clé d'activation attendue.

### En-têtes (`header`)

- **Activation.hpp** : Définit la classe `Activation`, incluant ses méthodes et attributs privés.

### Scripts (`run.sh`)

- **run.sh** : Script shell pour automatiser la compilation et l'exécution du projet. Ce script compile le code source en une bibliothèque partagée et exécute l'application principale.

## Installation et Exécution

### Prérequis

- Un compilateur C++ (par exemple, g++).
- Un environnement de développement intégré (IDE) ou un éditeur de texte.
- Accès à un système Linux pour l'exécution du script `run.sh`.

### Compilation et Exécution Automatisée

Pour compiler et exécuter le projet automatiquement, utilisez le script `run.sh` situé dans le répertoire racine du projet. Ouvrez un terminal, naviguez jusqu'au répertoire contenant le script et exécutez :

```bash
chmod +x run.sh
./run.sh
```

## Utilisation

L'application fonctionne de la manière suivante :

1. L'utilisateur lance l'application.
2. L'application vérifie si l'utilisateur est activé en comparant la clé d'activation entrée avec la clé attendue.
3. Si la clé est correcte, l'utilisateur est activé et peut accéder à l'application indéfiniment.
4. Si la clé est incorrecte, le nombre de tentatives est réduit et l'utilisateur est informé qu'il doit essayer à nouveau pour avoir un accés ilimiter à l'utilisation de l'application.

## Notes Importantes

- La clé d'activation par défaut est "AZERTY". Vous pouvez modifier cette clé dans le fichier `header/Activation.hpp`.
- Le nombre de tentatives pour l'activation est stocké dans le fichier `data/numberOfTry.txt`. Ce nombre est réduit à chaque tentative infructueuse.