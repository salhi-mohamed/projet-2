#include"personne.h"
#include<iostream>
#include<vector>
using namespace std;
personne::personne()
{

    /**cout<<"saisir le numero de cin : "<<endl;
    cin>>Cin;
    cout<<"saisir le nom : "<<endl;
    cin>>nom;
    cout<<"saisir le prenom : "<<endl;
    cin>>prenom;
    cout<<"saisir le num de telephone : "<<endl;
    cin>>tel;
    cout<<"saisir l email : "<<endl;
    cin>>email;
    cout<<"saisir l adresse : "<<endl;
    cin>>adresse;
    cout<<"saisir le nombre de de langues :  "<<endl;
    cin>>nblangues;
    for(int i=0;i<nblangues;i++)
    {
        string langue;
        cout<<"saisir la langue numero : "<<i+1<<endl;
        std::cin>>langue;
        langues.push_back(langue);}*/

}
personne::personne(int c,string n,string p ,int t ,string e,string a,int nblg)
{

    Cin=c;
    nom=n;
    prenom=p;
    tel=t;;
    email=e;
    adresse=a;
    nblangues=nblg;
   for(int i=0;i<nblangues;i++)
    {
        string langue;
        cout<<"saisir la langue numero : "<<i+1<<endl;
        std::cin>>langue;
        langues.push_back(langue);}




}
void personne::saisir_personne()
{
    cout<<"saisir le numero de cin : "<<endl;
    cin>>Cin;
    cout<<"saisir le nom : "<<endl;
    cin>>nom;
    cout<<"saisir le prenom : "<<endl;
    cin>>prenom;
    cout<<"saisir le num de telephone : "<<endl;
    cin>>tel;
    cout<<"saisir l email : "<<endl;
    cin>>email;
    cout<<"saisir l adresse : "<<endl;
    cin>>adresse;
    cout<<"saisir le nombre de de langues :  "<<endl;
    cin>>nblangues;
    for(int i=0;i<nblangues;i++)
    {
        string langue;
        cout<<"saisir la langue numero : "<<i+1<<endl;
        std::cin>>langue;
        langues.push_back(langue);}
}
personne::personne(const personne &p)
{
    Cin=p.Cin;
    nom=p.nom;
    prenom=p.prenom;
    tel=p.tel;
    email=p.email;
    adresse=p.adresse;
    nblangues=p.nblangues;
    for(int i=0;i<(p.langues).size();i++)
    {
        string langue;
        langue=p.langues[i];
        langues.push_back(langue);
    }
}/*personne::~personne()
{
    for (int i=0;i<langues.size();i++)
    {
        delete
    }
    langues.clear();
}*/
int personne::getcin()
{

    return Cin;
}
string personne::getnom()
{

    return nom;
}
string personne::getprenom()
{
    cout<<"le prenom de ce personne est : "<<endl;
    return prenom;
}
int personne::gettel()
{
    cout<<"le numero de t�l�phone de ce personne est : "<<endl;
    return tel;
}
string personne::getemail()
{
    cout<<"l'adresse email de ce personne est : "<<endl;
    return email;
}
string personne::getadresse()
{
    cout<<"l'adresse de ce personne est : "<<endl;
    return adresse;
}
void personne::getlangues()
{
    cout<<"Les langues que ce personne maitrisent sont : "<<endl;
    for(int i=0;i<langues.size();i++)
    {
        cout<<"langue "<<i+1<<" : "<<langues[i]<<endl;
    }
}
void personne::setcin(int c)
{
    Cin=c;
}
void personne::setnom(string nom)
{
    this->nom=nom;
}
void personne::setprenom(string)
{
    this->prenom=prenom;
}
void personne::settel(int tel)
{
   this->tel=tel;
}
void personne::setemail(string email)
{
    this->email=email;
}
void personne::setadresse(string adresse )
{
    this->adresse=adresse;
}
void personne::saisirlangues()
{
    int nblg;
    cout<<"saisir le nombre de de langues :  "<<endl;
    cin>>nblg;
    for(int i=0;i<nblg;i++)
    {
        string langue;
        cout<<"saisir la langue numero : "<<i+1<<endl;
        std::cin>>langue;
        langues.push_back(langue);}}

void personne::afficherPersonne()
{
    cout<<"Affichage des informations relatives � ce personne : "<<endl;
    cout<<"Cin : "<<Cin<<endl;
    cout<<"Nom : "<<nom<<endl;
    cout<<"Pr�nom : "<<prenom<<endl;
    cout<<"Num�ro de t�l�phone : "<<tel<<endl;
    cout<<"Adresse email :  "<<email<<endl;
    cout<<"Adresse de r�sidence : "<<adresse<<endl;
    cout<<"Nombre de langues : "<<nblangues<<endl;
    getlangues();

}
void personne::modifier()
{
    char rep,reponse;
    do
    {
        cout<<"Que voulez-vous modifiez ? T :num�ro de t�l�phone , A : adresse de r�sidence , M : adresse mail  "<<endl;
        cin>>rep;
        switch(rep)
        {
            case 'T':
              cout<<"saisir le nouveau num�ro de telephone : "<<endl;
              cin>>tel;
            break;
            case 'A':
             cout<<"saisir la nouvelle adresse de r�sidence : "<<endl;
             cin>>adresse;
             break;
            case 'M':
              cout<<"saisie la nouvelle adresse mail : "<<endl;
              cin>>email;
            break;
            default :
              cout<<"r�ponse invalide !"<<endl;
              break;


        }
        cout<<"voulez-vous modifiez encore ? , O : Oui , N : Non "<<endl;
        cin>>reponse;

    }
    while(reponse!='N');
}
void personne::ajouterLangue()
{
   int nb_langues;
  cout<<"combien de langues voulez-vous ajoutez ? "<<endl;
  cin>>nb_langues;
  string lang;
  for(int i=0;i<nb_langues;i++)
  {
      cout<<"saisir la langue" <<i+1<<"que vous voulez ajouter : "<<endl;
      cin>>lang;
      langues.push_back(lang);
  }
  nblangues=nblangues+nb_langues;


}
void personne::supprimer_langue(int i )
{
    langues.erase(langues.begin()+i);
    cout<<"suppression effectu�e avec succ�es : "<<endl;     /* int Cin;
      string nom;
      string prenom;
      int tel;
      string email;
      string adresse;*/
      nblangues=nblangues-1;
}

