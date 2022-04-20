#include <iostream>
using namespace std;

struct data
{
   int dia;
   int mes;
   int ano;	
};

// Passagem de parâmetro por ponteiro
void mostra_data3(data *d)
{
    cout << d->dia << "/" << 
            d->mes << "/" <<
			d->ano << endl;	
}

void cria_data(data *d, int dia, int mes, int ano)
{
	d->dia = dia;
	d->mes = mes;
	d->ano = ano;
}

int main(int argc, char** argv)
{
	data hoje;
	cria_data(&hoje, 19, 4, 2022);

	mostra_data3(&hoje);
	
	return 0;
}