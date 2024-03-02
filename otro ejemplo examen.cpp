#include <iostream>
#include <string>
 
using namespace std;

//Declaramos la clase electrodomestico 
class electrodomestico{
	public:
		//Atributos de la clase 
		string color;
		string marca;
		float capacidad;
		string material;
		//constructor para inicializar atributos 
		electrodomestico(string _color,string _marca, float _capacidad, string _material){
		
		
		color = _color;
		marca = _marca;
		capacidad = _capacidad;
        material = _material;
        //imprimos mensaje para iniciar que el objeto de la licuadora se creo
        cout<<"se creo el objeto de licuadora"<<endl;
        
        //Destructor se ejecuta cuando se destruye un objeto de la clase
 }
      //Metodo que representa la accion de encender microondas
		 void encender(){
		 	cout<<"La licuadora para encender. "<<endl;
        	
	  }
         
        
		 //Metodo que representa la accion de apagar microondas
		 void apagar(){
		 	cout<<"La licuadora esta apagado. "<<endl;
		 }
};

		 // funcion principal Main 
		 int main(){
		 	//Creamos un objeto
		 	electrodomestico milicuadora ("Negro" , "Mabe" ,3.5, "Aluminio" );
		 	
		 	//hacemos un llamado a los metodos creados 
		 	milicuadora.encender();
		 	milicuadora.apagar();
		 	 return 0;
		
		 }