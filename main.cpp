
#include "Complejo.hpp"


int main(){
  
  Complejo C1(2,-3),C2(1,3),resultado(0,0),result2;
    cout<<"programa que trabaja con numero complejos:"<<endl;
    C1.mostrarComplejo();
    C2.mostrarComplejo();

/***********/
/*
cout<<"MULTIPLICACION"<<endl;
C1.multiplicacion(&C1,&C2	);
C1.mostrarComplejo();*/
cout<<"SUMA"<<endl;
/*primer forma*/
/*cout<<"complejo modificado con la primera forma"<<endl;
resultado.suma(&C1,&C2);
resultado.mostrarComplejo();
C1.mostrarComplejo();*/
/*segunda forma*/
cout<<"complejo modificado con la segunda forma"<<endl;
C1.suma(&C2);
C1.mostrarComplejo();

/*tercera forma*/
cout<<"complejo modificado con la tercera forma"<<endl;
resultado= resultado.suma(&C1,&C2);
C1.mostrarComplejo();
resultado.mostrarComplejo();
 /*cout<<"division:"<<endl;
 C1.div(&C1,&C2);
 C1.mostrarComplejo();*/

     return 0;
}	
 	

