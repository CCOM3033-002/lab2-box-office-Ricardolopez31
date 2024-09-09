#include <iostream>
#include <string>
using namespace std; 
int main(){
    
    //desplegar proposito del programa
    std::cout<<"Este programa calcula la cantidad de dinero que hizo un cine y el distribudor de la pelicula" << std::endl;

    //establecer variables
   int Num_Nin, Num_Adu,total, total_dist;
   string movie;
  
    double Adulto_tik = 10.00;
    double Nino_tik = 6.00;

    // Pedir nombre de pelicula
    std::cout << "Nombre de la pelicula vendida?: ";
    std:: getline(cin, movie);
    std::cout << std::endl; 
    //pedir input de taquillas vendidas
    std::cout<< "Cantidad de taquillas de Niños vendidas?: ";
    std::cin>>Num_Nin;
    cin.ignore(900, '\n'); 
    std::cout << std::endl; 
    


    std::cout<< "Cantidad de taquillas de Adultos vendidas?: ";
    std::cin>>Num_Adu;
    cin.ignore(900, '\n'); 
    std::cout << std::endl; 

    // calculacion de taquillas
    total=(Num_Nin*Nino_tik) + (Num_Adu*Adulto_tik);
   


    //

    return 0;
}
