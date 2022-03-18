#include<iostream>
#include<cstdlib>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Complejo.hpp"

Complejo::Complejo(double miReal, double miImaginaria){
	
	this->real=miReal;
	this->Imaginaria=miImaginaria;
	
}
 void Complejo::mostrarComplejo(){
 	cout<<"El numero complejo es:"<<real<<"+"<<Imaginaria<<"i"<<endl;
 	
 	
 	
 	
 }
void Complejo::setPartereal( const double miReal){
 		
 			this->real=miReal;
 		
 		
 		
	 }
	  
const double Complejo::getPartereal() const{
		
		return real;
		
		}
void Complejo::setParteImaginaria(const double miImaginaria){
	
		this->Imaginaria=miImaginaria;
	
}

const double Complejo::getParteImaginaria()const{

    return Imaginaria;

}


/*
void Complejo::suma( Complejo *comp1,const Complejo * const comp2){
	
	this->real= comp1->real+comp2->real;
	this->Imaginaria=comp1->Imaginaria+comp2->Imaginaria;
    
	
	
	
}*/
 void Complejo::suma(const Complejo*const comp){
 	
 this->	real= comp->real+this->real;
 this->	Imaginaria= comp->Imaginaria+this->Imaginaria;
 	
 	
 	
 }
 Complejo Complejo ::suma(const Complejo *const comp1, const Complejo *const comp2){
 	
 	Complejo suma(comp1->real+comp2->real,comp1->Imaginaria+comp2->Imaginaria);
 	
 	return suma;
 	
 }

void Complejo:: multiplicacion(const Complejo*comp1,const Complejo*comp2){
	
	this->real= (comp1->real*comp2->real)+(comp1->Imaginaria*comp2->Imaginaria);
	this->Imaginaria=(-comp1->real*comp2->Imaginaria)+(comp1->Imaginaria*comp2->real);

}
void Complejo::div(const Complejo*comp1,const Complejo*comp2){
	
	double deno= (comp2->real*comp2->real)+(comp2->Imaginaria*comp2->Imaginaria);
	
	this->real= ((comp1->real*comp2->real)+(comp1->Imaginaria*comp2->Imaginaria))/deno;
	this->Imaginaria=((-comp1->real*comp2->Imaginaria)+(comp1->Imaginaria*comp2->real))/deno;

}

Complejo::Complejo(){
	
	this->real=0;
	this->Imaginaria=0;
}

