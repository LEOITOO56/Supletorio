#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
	string articulos[10];
	int X=10;
	float precio[10];
	float total,subto=0,iva,dto;

cout<<"**************Programa de facturacion**************\n\n";
	for(int O=0;O<X;O++)
	{	
	    cout<<"DIGITE EL ARTICULO Y EL VALOR DEL ARTICULO #"<<(O+1)<<":\n\n";
        cout<<"Digite el producto que desea comprar: "; getline(cin,articulos[O]);
		cout<<"Digite su valor: "; cin>>precio[O];
		cin.ignore();
		cout<<endl;
    }
    
    cout<<"***********SU FACTURA***********\n\n";
    for(int O=0;O<X;O++)
    {
    	subto=subto+precio[O];
    	iva=subto*0.12;	
	    dto=subto*0.10;
    	total=subto+iva-dto;
	}
	for(int O=0;O<X;O++)
	{
		cout<<O+1<<".-     "<<articulos[O]<<"\t\t"<<precio[O]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<subto<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<dto<<endl;
	cout<<"\t TOTAL \t\t"<<total<<endl;
cout<<"****************GRACIAS POR SU COMPRA****************";
getch ();
return 0;
}
