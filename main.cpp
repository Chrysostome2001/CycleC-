#include <iostream>
#include <string>
#include "include/cycle.h"

using namespace std;

int main()
	{ 
	  Localisation ici(6.43402 , 2.33162) , labas(6.39615 , 2.34347);
	  float latit , longit;
	  /* 
	    cout<<"Entrez la latitude"<< endl;
	    cin>>latit;
	    cout<<"Entrez la longitude"<< endl;
	    cin>>longit;
	    
	    cout<< "La distance entre ici et votre point est :"<<ici.distance(latit,longit) / 1000<< "kilomètre"<< endl;*/
	    cout<<"La distance entre ici et la statue de l'amazone est :"<<ici.distance(labas) / 1000<<"Kilomètre"<< endl;
	    cout<<ici.distance_moinsde(125 , labas)<< endl;
	    cout<<ici.distance_moinsde(125 , 6.39615 , 2.34347)<< endl;
	    
	    return 0;
}
