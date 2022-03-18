#include<iostream>
#include<cstdlib>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

class Complejo{

	
	
	public: Complejo(const double,const double);
	     Complejo();
	
	void mostrarComplejo();
	void setPartereal( const double);
	const double getPartereal() const;
	void setParteImaginaria(const double);
	const double getParteImaginaria() const;
	
	/*void suma(Complejo *,const Complejo*const);//el primer objeto llevara la repuesta*/
	void suma(const Complejo*const);
	
	Complejo suma(const Complejo*const,const Complejo*const);
		
	void multiplicacion(const Complejo*,const Complejo*);
	void div(const Complejo*,const Complejo*);	
	private:
	double real, Imaginaria;	
		
	
	
	
	
	
	
};
