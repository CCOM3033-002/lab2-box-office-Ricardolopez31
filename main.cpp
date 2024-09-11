#include <iostream>
#include <string>
using namespace std; 
#include<iomanip>
int main(){

    //desplegar proposito del programa
    std::cout<<"Este programa calcula la cantidad de dinero que hizo un cine y el distribudor de la pelicula" << std::endl;

    //establecer variables
   int Num_Nin, Num_Adu;
   double gross_profit, net_box,distributor_pay;
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
    gross_profit=(Num_Nin*Nino_tik) + (Num_Adu*Adulto_tik);
    net_box= gross_profit*0.20;
    distributor_pay= gross_profit-net_box;

    //printear los resultados formateados 
    std::cout<<"Movie Name:                    "<<"\""<< movie<<"\""<<endl;         

    std::cout<<"Tickets de adulto:             "<< Num_Adu<<endl;

    std::cout<<"Tickets de niños:              "<< Num_Nin<<endl;
    
    // cambiar precision de cout
    cout  << fixed << setprecision(2);  

    std::cout<<"Gross box office profit:      $ "<< gross_profit<<endl;

    std::cout<<"Net Box Office Profit:        $ "<< net_box<<endl;

    std::cout<<"Amount Paid to Distributor:   $ "<< distributor_pay;


    //

    return 0;
}