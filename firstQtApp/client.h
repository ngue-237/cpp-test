#ifndef CLIENT_H
#define CLIENT_H
#include <QString>



class Client
{
private:
    QString cin, nom, prenom;
public:
    Client();
    void setCin(QString cin1 );
    void setNom(QString nom1);
    void setPrenom(QString prenom1);
    QString getNom();
    QString getPrenom();
    QString getCin();

};

#endif // CLIENT_H
