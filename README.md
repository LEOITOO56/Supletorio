# Ejercicio de programacion sobre facturacion de productos.

## Nombre del autor : 

Edison Leonardo Ramirez Angulo.

![](https://avatars.githubusercontent.com/u/85971636?v=4)

### Nombres de los archivos.

  ####  Programacion .cpp  y   Diagrama .jpg
  
# Descriccion del programa

Programacion . cpp

Realice un programa que pueda imprimir por pantalla una facturacion de compras comerciales, en el cual el usuario debe introducir un maximo de 10 productos con su respectivo
precio y que el propio pograma le calcule el subtotal iva descuenta del 10% y el total. Para aquello la modalida de factura  se creo con un deseño de codigos y comando en el
programa DEVC C++.

Para ello primero se declararon las variables que son:  
int rti=10, 
string articulos[10].
float precio[10].
float total,subt=0,iva,dest.
Para poder ingresar el precio y el nombre de los productos se utilizo el ciclo "for" y el comando cout<< para mostrar el mensaje por pantalla pidiendole al usuario que ingrese el nombre y el precio del producto, cin>>articulo, precio para almacenar el nombre y el precio ingresado.
     for(int c=0;c<rti;c++)
	{	
	    cout<<"INGRESE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(c+1)<<":\n";
        cout<<"Producto a comprar:\n "; 
		getline(cin,articulos[c]);
		cout<<"Precio:\n "; 
		cin>>precio[c];
		cin.ignore();
		cout<<endl;
    }
    
Se realizo otro ciclo for para calcular el iva, subtotal, descuento, total:

      for(int c=0;c<rti;c++)
     {
    	subt=subt+precio[c];
    	iva=subt*0.12;	
	    dest=subt*0.10;
    	total=subt+iva-dest;
	}
  
Y  por ultimo se creo un ciclo for para generar la factura.

     for(int c=0;c<rti;c++)
	{
		cout<<c+1<<".-     "<<articulos[c]<<"\t\t"<<precio[c]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<subt<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<dest<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
  
Ventas.jpg

En este archivo esta el diagrama de flujo del programa principal, donde esta estructurado paso a paso cada parte de la codificacion en c++,
utilizando su respectivo simbolo  y codigo.

### Descarga de archivos.

Pasos para descargar los archivos.

1 . Click en "code".

![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/1.jpeg)

2 . Click en Download ZIP.

![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/2.jpeg)

3 . Dirigirse a la carpeta descarga.

![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/3.jpeg)

3 . Una vez descargado el archivo dar click en "extraer aquí".

![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/5.jpeg)

4 . Estos son los archivos extraídos.

![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/6.jpeg)

### Copilacion del programa. 

Proceso para copilar.

 1. Click  en el icono de copilar com mi cursor se ve la palabra e icono de copilar.
 
![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/copilar.jpeg)

2 . Click en el iconode ejecutar con mi cursor se ve la palabra e icono de ejecutar.

![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/ejecuta.jpeg)

3 . Mostrar programa por pantalla.

               3 .1 .  Ingresar producto y sus precios.
               
   ![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/ejecuta11.jpeg)
   
            3 .2 . Mostrar por pantalla resultado.
			 Nota: estas incluido subtotal, total, iva.
       
![](https://raw.githubusercontent.com/LEOITOO56/IMG/main/ultu.jpeg)

##Gracias
