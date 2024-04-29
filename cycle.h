#ifndef DEF_CYCLE_H
#define DEF_CYCLE_H

/*
class Utilisateur
        {
                public:
                        Utilisateur();
                        Utilisateur(std::string nom , std::string prenom );*/
                        
                
                
                protected:
                
                
                
                private:
                
      
    
class Localisation
	{
		public:
			Localisation();
			Localisation(float latitude , float longitude);
			Localisation(const Localisation& other);
		void 	actualiser(float latitude , float longitude);
		float	distance(float lat , float longi) const;
		float	distance(Localisation other) const; 
		bool	distance_moinsde(float rayon , Localisation other) const;
		bool	distance_moinsde(float rayon , float lat , float longi) const;
		float	get_latitude() const;
		float	get_longitude() const;
		void	set_latitude(float latitude);
		void	set_longitude(float longitude);
			~Localisation();
		
		private:
			float latitude;
			float longitude;
			
			
	};
	
#endif
		
			
