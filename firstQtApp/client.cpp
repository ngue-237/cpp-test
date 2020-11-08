#include "client.h"

Client::Client()
{
    cin = "";
    nom = "";
    prenom = "";
}

void Client::setNom(QString nom1){
    nom = nom1;
}

void Client::setCin(QString cin1){
    cin = cin1;
}

void Client::setPrenom(QString prenom1){
    prenom = prenom1;
}

QString Client::getCin(){
    return cin;
}

QString Client::getNom(){
    return nom;
}

QString Client::getPrenom(){
    return prenom;
}

