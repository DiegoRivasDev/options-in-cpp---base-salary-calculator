#include <iostream>
 
using namespace std;
 
int main()
{
    float sueldo, horas, respuesta, semana;
    char opciones;
 
    cout << "ingrese el sueldo que resive por hora ";
    cin >> sueldo;

    cout << "ingrese las horas que trabaja en un dia ";
    cin >> horas;

  cout <<endl<<"quiere saber su sueldo en base a "<<endl<<endl;

  cout << "1- el dia "<<endl;
  cout << "2- la semana "<<endl;
  cout << "3- quinsenal "<<endl;
  cout << "4- al mes "<<endl;
  
  cout << "que opcion tomara ";
  cin >> opciones;



    switch (opciones) {
    	
//dia
    case '1':
	
      cout <<"su salario por dia es " << sueldo * horas;
      break;
      
      
//semana
    case '2':
    	
	cout << "cuantos dias trabaja a la semana  ";
	cin >> semana;
  
    cout <<"su salario por a la semana es " << (sueldo * horas) * semana;

      break;
      
      
//quinsenal
    case '3':
 
	cout << "cuantos dias trabaja a la semana  ";
	cin >> semana;
  
    cout <<"su salario por a la semana es " << (sueldo * horas) * (semana * 2);
    
      break;


//al mes
    case '4':
    	
	cout << "cuantos dias trabaja a la semana  ";
	cin >> semana;
  
    cout <<"su salario por a la semana es " << (sueldo * horas) * (semana * 4);
      break;


    default:
      cout << "no introdujo una opcion correcta";
      break;
  }

  return 0;
}
