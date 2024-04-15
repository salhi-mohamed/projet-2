#include<iostream>
#include"evaluation.h"
#include<string>
using namespace std;
evaluation::evaluation()
{

}
void evaluation::saisir_evaluation()
{
    cout<<"saisir l'id de l'evaluation : "<<endl;
    cin>>id_evaluation;
    cout<<"saisir la date de l'evaluation "<<endl;
    cin>>date_evaluation;
    cout<<"saisir les points correspendants a cet evaluation : "<<endl;
    cin>>points;
    cout<<"saisir l'id de l'artisan correspendant a cette evaluation : "<<endl;
    cin>>artisan_id;
}
evaluation::evaluation(int id,int points,string date,int id_artisan)
{
    id_evaluation=id;
    date_evaluation=date;
    this->points=points;
    artisan_id=id_artisan;
}
void evaluation::setId(int id)
{
    id_evaluation=id;
}
void evaluation::setDate_evaluation(string date)
{
    date_evaluation=date;
}
void evaluation::setPoints(int point)
{
    points=point;
}
int evaluation::getId()
{
    return id_evaluation;
}
int evaluation::getPoints() const {
    return points;
}
string evaluation::getDate_evalution()
{
    return date_evaluation;
}
void evaluation::editerEvaluation()
{
    /*char rep,rep2;
    do
    {

        cout<<"Que voulez-vous modifiez ? P : points , D : Date de l'evaluation : "<<endl;
        cin>>rep;
        switch(rep)
        {
            case 'P' :
              cout<<"saisir le nouveau nombre des points : "<<endl;
              cin>>points;
              break;
            case 'D' :
                cout<<"saisir la nouvelle date de l'evaluation : "<<endl;
                cin>>date_evaluation;
                break;
            default :
               cout<<"Reponse invalide !"<<endl;
               break;

        }
        cout<<"Voulez-vous encore modifiez ? O : oui , N : non : "<<endl;
        cin>>rep2;
    }
    while(rep2!='N');*/

    char reponse;
    do {
        cout << "Que voulez-vous modifier pour cette �valuation ?" << endl;
        cout << "P : Points, D : Date, Q : Quitter" << endl;
        cin >> reponse;

        switch (toupper(reponse)) {
            case 'P':
                cout << "Saisir le nouveau nombre de points : ";
                cin >> points;
                break;
            case 'D':
                cout << "Saisir la nouvelle date d'�valuation : ";
                cin.ignore(); // Ignorer le caract�re de nouvelle ligne restant dans le buffer
                getline(cin, date_evaluation);
                break;
            case 'Q':
                return; // Quitter la m�thode
            default:
                cout << "R�ponse invalide !" << endl;
                continue; // Revenir au d�but de la boucle pour redemander une r�ponse valide
        }

        do {
            cout << "Voulez-vous encore modifier ? O : OUI, N : NON" << endl;
            cin >> reponse;

            if (toupper(reponse) != 'O' && toupper(reponse) != 'N') {
                cout << "R�ponse invalide !" << endl;
            }
        } while (toupper(reponse) != 'O' && toupper(reponse) != 'N');

    } while (toupper(reponse) == 'O');
}



void evaluation :: afficher_evaluation()
{
    cout<<"ID evaluation : "<<id_evaluation<<"points : "<<points<<"Date de l evaluation : "<<date_evaluation<<endl;
}
ostream& operator<<(ostream& o,const evaluation &e)
{
    o<<"Affichage des informations relatives � cette evaluation : "<<endl;
    o<<"Identifiant de l' evaluation :"<<e.id_evaluation<<endl;
    o<<"Date de l'�valuation : "<<e.date_evaluation<<endl;
    o<<"Points : "<<e.points<<endl;
    o<<"Id de l'artisan correspendant : "<<e.artisan_id<<endl;
    return o;
}
istream& operator>>(istream &i,evaluation &e)
{
    cout<<"Saisir l'id de l'artisan correspendant à cette evaluation : "<<endl;
    i>>e.artisan_id;
    cout<<"Saisir l'identifiant de l'evaluation :" <<endl;
    i>>e.id_evaluation;
    cout<<"Saisir la date de l'evaluation : "<<endl;
    i>>e.date_evaluation;
    cout<<"Saisir les points de cette evaluation : "<<endl;
    i>>e.points;
    return i ;
}
evaluation::~evaluation(){}
void evaluation::set_id_artisan(int id_artisan)
{
    artisan_id=id_artisan;
}
int evaluation::get_id_artisan()const
{
    return artisan_id;
}
