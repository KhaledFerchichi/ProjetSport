#include<stdio.h>
#include<string.h>

typedef struct {
int code;
} Gender;

typedef struct { 
int day; int month; int year; 
} Date;

typedef struct {
    int     id;
    char    nom[30];
    char    prenom[30];
    Gender  genre;
    Date    date_naissance;
    int     taille_cm;   
    int     poids_kg;   
    char    phone[20];
    char    email[100];
    char    pwd[30];
} Member;

