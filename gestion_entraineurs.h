#ifndef GESTION_ENTRAINEURS_H
#define GESTION_ENTRAINEURS_H

#include <stdio.h>
#include<stdlib.h>
#include<string.h>


// Structure pour représenter un entraîneur (basée sur les champs des interfaces)
typedef struct {
int id;
char nom[100];
char prenom[100];
char sexe[10]; // &quot;Homme&quot; ou &quot;Femme&quot;
char num_tel[20];
char specialite[100];
char email[100];
int jour,mois,annee;
char disponibilite[100]; // Centres sportifs, jours, heures, etc.
char centre_sportif[100];
char jour[20]; 
int heure_debut;
int heure_fin;
int prive; // 1 pour OUI, 0 pour NON
} Entraineur;

// Fonctions 
void ajouter_entraineur(Entraineur *e);
void modifier_entraineur(int id, Entraineur *e);
Entraineur* rechercher_entraineur(int id);
void supprimer_entraineur(int id);
void afficher_entraineur(Entraineur *e);
void rafraichir_liste_entraineurs(void);

#endif // GESTION_ENTRAINEURS_H
