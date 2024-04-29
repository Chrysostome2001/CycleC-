#include "cycle.h"
#include <cmath>


Localisation::Localisation()
	{
		}

Localisation::Localisation(float latitude , float longitude)
	{
		this->latitude = latitude;
		this->longitude = longitude;
		
	}
	
Localisation::Localisation(const Localisation& other)
	{
		this->latitude = other.latitude;
		this->longitude = other.longitude;
			
	}

float	Localisation::distance(float lat , float longi) const
	{
	  float sinus = sin(latitude * M_PI / 180) * sin(lat * M_PI / 180);
	  float cosinus = cos(latitude * M_PI / 180) * cos(lat * M_PI / 180) * cos((longi - longitude) * M_PI / 180);
	  return 6378137 * acos(sinus + cosinus);
	  
		}

float	Localisation::distance(Localisation other) const
	{
	  return distance(other.get_latitude() , other.get_longitude());
		}
		
bool	Localisation::distance_moinsde(float rayon , Localisation other) const
	{ 
	    bool resultat = false;
	  if(other.distance(latitude , longitude) <= rayon)
	      resultat = true;
	      
	      return resultat;
		}
		

bool	Localisation::distance_moinsde(float rayon , float lat , float longi) const
	{
	    bool resultat = false;
	    Localisation point;
	    point.latitude = lat;
	    point.longitude = longi;
	    
	    if(point.distance(latitude , longitude) <= rayon)
	        resultat = true;
	        
              return resultat;
		}
		
		
float	Localisation::get_latitude() const
	{
	
		return latitude;
		
	}

		
		
float	Localisation::get_longitude() const
	{
		return longitude;
	
	}
		
		
void	Localisation::set_latitude(float latitude)
	{
		this->latitude = latitude;
		
	}
void	Localisation::set_longitude(float longitude)
	{
		this->longitude = longitude;
		
	}
	Localisation::~Localisation()
		{
			}
		
