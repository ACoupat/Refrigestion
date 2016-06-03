#include "gestiondefichiers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <QDebug>
#include <iostream>
#include <QFile>
#include <recette.h>

using namespace std;

GestionDeFichiers::GestionDeFichiers()
{
    //qDebug()<< "Salut je suis un Lutiné";
    /*cout << "Salut je suis un Lutiné" << endl;
    ControleEspace("Salut je suis un Lutiné");*/
    ajoutFichier(NULL,new Ingredient("TomateBite",12,"3",QDate(2018,8,8),"Coucou.tamere"));
    qDebug() << ajoutFichier(new Recette("duhubvoqidufbaep","10 min mais 30 min",QList<Ingredient>(),"Mettre des trucs dans le tacos","Alarache","tacos.jpg"),NULL);

}
/*
 * Ajoute un ingredient au fichier listeIngredients.rfg si ing est renseigné
 * Ajoute un fichier portant le nom de la recette si recette est renseigné,
 *  le contenu de ce fichier correspond à la recette passée en paramètre.
 *
 * Renvoie 0 si l'opération a réussi, 1 sinon.
 */
int GestionDeFichiers::ajoutFichier(Recette* recette, Ingredient* ing)//Static ?
{
    //Tester si le fichier existe déja
    //ControleEspace et MIN de Nom
    if(recette == NULL && ing !=NULL)
    {
        QFile fichier("listeIngredients.rfg");
        if(fichier.open(QIODevice::ReadWrite | QIODevice::Append))
        {
            //fichier.write();
            QTextStream flux(&fichier);
            flux << creerLigneIngredient(ing);
            fichier.close();
            return 0;
        }
        else
        {
            cout << "Erreur d'ouverture de fichier" << endl;
        }
    }
    else if(recette != NULL && ing == NULL)
    {
           qDebug() << "bleh";
           QString nomFichier = "Recettes/"+recette->getNom()+".rfg";
           qDebug() << nomFichier;
        QFile fichier(nomFichier);

        if(fichier.open(QIODevice::ReadWrite | QIODevice::Append))
        {
            //fichier.write();
            QTextStream flux(&fichier);
            flux << creerStringRecette(recette);
            fichier.close();
            return 0;
        }
        else
        {
            cout << "Erreur d'ouverture de fichier" << endl;
        }
    }
    else
    {
        return 1;
    }




}

QString GestionDeFichiers::creerLigneIngredient(Ingredient *ing)
{
    QString ligne(ing->getNom());
    ligne +=  ";" + ing->getDate().toString() + ";" + QString::number(ing->getQuantite()) + ";" + ing->getUnite() + "\n" ;
    return ligne;
}

QString GestionDeFichiers::creerStringRecette(Recette* recette)
{
    QString ligne(recette->getNom());
    ligne += "\n"+ recette->getDureePreparation() +"\n"+ recette->getCheminImage()+"\n" ;//à compléter
    return ligne;
}

void GestionDeFichiers::ControleEspace(QString Nom)
{
    /*//int i;
    //int car;

    //longueurchaine=strlen(Nom);


    //for(i=0;i<Nom.size();i++)
    //{*/
        //cout << "Salut !";
        //car=Nom.at(i).toLatin1() ;
        /*if (car == -126 || car == -112 || (car>=-120 && car<=-118))
        {
            //Nom.replace(Nom.at(i),'e');
        }else if((car>=-125 && car <=-122)||(car >=-114 && car <=-113))
        {
            Nom[i]=97;
        }else if(car>=-117 && car <=-115)
        {
            Nom[i]=105;
        }else if((car>=-109 && car <=-107)||car==-103)
        {
            Nom[i]=111;
        }else if((car>=-106 && car <=-105)||car == -102||car == -127){
            Nom[i] = 117;
        }else if(car == -128 || car == -121)
        {
            Nom[i]=99;
        }else if(car == -104)
        {
            Nom[i]=121;
        }else if((car<97&&car>57)||(car<48&&car!=45&&car!=41&&car!=40&&car!=39)||car>122)
        {
            Nom[i]='_';
        }*//*else{
            //Nom[i]=car;
        }*/

    //}
    //cout << Nom;
}
