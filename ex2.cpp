#include <iostream>
using namespace std;

struct data
{
   int dia;
   int mes;
   int ano;	
};

int main(int argc, char** argv)
{
	data hoje;
	data *phoje;
	
	hoje.dia = 19;
	hoje.mes = 4;
	hoje.ano = 2022;
	
	cout << hoje.dia << "/" << 
	        hoje.mes << "/" <<
			hoje.ano << endl;
			
    phoje = &hoje;
    //cout << phoje << endl;
    
    cout << (*phoje).dia << "/" << 
	        (*phoje).mes << "/" <<
			(*phoje).ano << endl; 
			
    cout << phoje->dia << "/" << 
	        phoje->mes << "/" <<
			phoje->ano << endl;			
    
	
	return 0;
}