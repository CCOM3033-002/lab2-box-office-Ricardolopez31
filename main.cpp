#include <iostream>
#include <string>
int main(){
    
    //desplegar proposito del programa
    std::cout<<"Este programa calcula la cantidad de dinero que hizo un cine y el distribudor de la pelicula" << std::endl;

    //establecer variables
   int Num_Nin, Num_Adu, movie ;
 
    double Adulto_tik = 10.00;
    double Niño_tik = 6.00;

    // Pedir nombre de pelicula
    std::cout << "Nombre de la pelicula vendida?: ";
    std::cin>>movie;
    getline(cin, movie);

    //pedir input de taquillas vendidas
    std::cout<< "Cantidad de taquillas de Niños vendidas?: ";
    std::cin>>Num_Nin;

    std::cout<< "Cantidad de taquillas de Adultos vendidas?: ";
    std::cin>>Num_Adu;


    //

    return 0;
}
