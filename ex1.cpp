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
	hoje.dia = 19;
	hoje.mes = 4;
	hoje.ano = 2022;
	
	cout << hoje.dia << "/" << 
	        hoje.mes << "/" <<
			hoje.ano; 
	
	return 0;
}