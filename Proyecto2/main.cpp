#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//De 0 a 1 a�o: no hay aumento, debe mostrar el mismo salario ingresado.
    //De 2 a�os a 3 a�os: aumentar el 10% de su salario.
    //De 4 a�os a 5 a�os: aumentar el 15% de su salario.
    //De 5 a�os en adelante: aumentar el 20% de su salario
    int antiguedad, salario, nuevosalario;
	   
	   cout<<"ingrese antiguedad: ";
	   cin>>antiguedad;
	   cout<<"Ingrese salario: ";
	   cin>>salario;
	   
	   
	
	if(antiguedad >= 0 && antiguedad <= 1 ){
	 nuevosalario = salario;
	 cout<<"nuevosalario: "<<nuevosalario<<endl;
	} else if(antiguedad >= 2 && antiguedad <= 3){
	 nuevosalario =  salario + (salario * 0.10);
	 cout<<"10% nuevosalario:"<<nuevosalario<<endl;
	} else if(antiguedad >= 4 && antiguedad <= 5){
	 nuevosalario = salario + (salario * 0.15);
	 cout<<"15% nuevosalario:"<<nuevosalario<<endl;	
	} else {
		nuevosalario = salario + (salario * 0.20);
	 cout<<"20% nuevosalario:"<<nuevosalario<<endl;
	}
	
	return 0;
}
