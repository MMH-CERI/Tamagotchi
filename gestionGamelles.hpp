#ifndef GESTION_GAMELLES_HPP
#define GESTION_GAMELLES_HPP


class gestionGamelles
{
	private:
	
		int quantiteEau;
		int quantiteNourriture;

	public:

		gestionGamelles();
		~gestionGamelles();
		void gestionGeau(int);
		void gestionGnourriture(int);
		bool retirerEau(int);
		bool retirerNourriture(int);
};

#endif
