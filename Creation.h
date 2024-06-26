#ifndef CREATION_H_INCLUDED
#define CREATION_H_INCLUDED
#include<string>
#include<vector>
using namespace std;

class Creation
{

    protected :
      int id;
      string nom;
      string description;
      vector<string> photos;

    public :
       Creation();
       Creation(int,string,string);
       Creation(const Creation &);
       virtual ~Creation(){};
       int getId(); // methode qui retourne l'identifiant de la cr�ation
       string getNom(); //methode qui retourne le nom de la Creation
       string getDescription(); // methode qui retourne la description de la cr�ation
       vector<string> getPhotos(); //methode qui retourne les photos de la cr�ation

       void setId(int); //methode qui permet le saisie de num de cin de la personne
       void setNom(string);//methode qui permet le saisie du nom de la personne
       void setDescription(string);

       void ajouterPhoto(string);
        void saisirCreation();
       virtual void afficher();
       virtual void modifier()=0;

       friend std::ostream& operator<<(std::ostream& o, const Creation& c);
       friend istream& operator>>(istream&, Creation& );
};


#endif // CREATION_H_INCLUDED
