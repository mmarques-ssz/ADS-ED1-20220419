#include <iostream>
#include <string.h>
using namespace std;

struct data
{
   int dia;
   int mes;
   int ano;	
};

void cria_data(data *d, int dia, int mes, int ano)
{
	d->dia = dia;
	d->mes = mes;
	d->ano = ano;
}

data dia_seguinte(data *d)
{
	data ds;
	int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	ds = *d;
	
	if (ds.ano%4 == 0)
	{
		diasNoMes[1]++;  
	}
	
	ds.dia++;
	if (ds.dia > diasNoMes[ds.mes-1])
	{
		ds.dia = 1;
		ds.mes++;
		if(ds.mes>12)
		{
			ds.mes = 1;
			ds.ano++;
		}
	}
	
	return ds;
}

string gera_data(data *d)
{
	return to_string(d->dia) + "/" +
           to_string(d->mes) + "/" +
		   to_string(d->ano);	
}

int main(int argc, char** argv)
{
	data proximos30dias[30];
	cria_data(&proximos30dias[0], 19, 4, 2022);
	for(int i=1; i<30; ++i)
	{
		proximos30dias[i] = dia_seguinte(&proximos30dias[i-1]);
	}
	
	for(int i=0; i<30; ++i)
	{
		cout << gera_data(&proximos30dias[i]) << endl;
	}
	
	
	return 0;
}