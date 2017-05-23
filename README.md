# Projet Génie Logiciel - Analyse médicale

[![license](https://img.shields.io/github/license/Embraser01/INSA-GL-Analyse-medicale.svg)](./LICENSE.md)
[![build](https://api.travis-ci.org/Embraser01/INSA-GL-Analyse-medicale.svg?branch=prod)](https://travis-ci.org/Embraser01/INSA-GL-Analyse-medicale)

## Presentation
  Ceci est un projet fait en Génie Logiciel 3IF à l'INSA de Lyon. Le sujet est disponible [ici](./doc/sujet.pdf)
  Auteurs :
*    Marc-Antoine FERNANDES
*    Julia LU DAC
*    Lucas ONO
*    Tianhao WU
*    Ye YUAN

## Utiliser l'application

### Serveur
L'application serveur permet d'évaluer les maladies possibles qui peuvent être incluses dans un génôme. Il s'appuie sur un fichier contenant un dictionnaire des maladies qu'il est capable d'évaluer.

##### Démarrage du serveur
Lorsque l'interface est lancée, un numéro de port sur lequel doit démarrer le serveur est demandé. C'est le port sur lequel sera lancée l'application serveur.
Un serveur en exécution est capable de répondre à des requêtes de client arrivant sur son adresse IP et son numéro de port. Ces requêtes doivent concerner l'une des trois fonctions : 
* Fournir la liste des maladies du dictionnaire
* Indiquer si un risque de maladie est présente dans un génôme
* Fournir la liste des risques de maladie dans un génôme

##### Diffusion de l'adresse IP et du port via multicast
Un bouton "Start Multicast" permet au serveur d'envoyer à intervalles réguliers (2.5 s) son adresse IP et le port de connexion sur une adresse multicast, pour en informer les clients. L'adresse IP est 225.6.7.8 et le port est 5678.
Le bouton "Stop Multicast" permet d'arrêter ces envois.

##### Quitter
Un bouton permet de fermer le serveur à tout moment.

### Client

## Contribuer

### Dépendance

* [cmake 3.7+](https://cmake.org/)

### Configurer l'environnement

Le projet utilise cmake. Cela permet d'être compatible avec CLion, 
Code Blocks mais également Visual Studio.

#### Visual Studio

> Visual Studio 15 (2017) Supporte cmake nativement !

Pour les anciennes versions de VS, cmake permet de générer les fichiers de configuration :
```bash
mkdir _cmake_vs_build
cd _cmake_vs_build/
cmake .. -G "Visual Studio 14 Win64"
```

Après ça, des fichiers de solutions Visual Studio devraient être créés

#### CLion

CLion prend en charge nativement les projets cmake,
donc il suffit de cloner le repo et ouvrir le projet.


### Lancer les tests unitaires

Les tests unitaires sont déjà configurés dans le `CMakeLists.txt`.

## Licence

[Copyright (C) 2017  Marc-Antoine FERNANDES, 
Julia LU DAC, Lucas ONO, Tianhao WU, Ye YUAN](./LICENSE.md)
