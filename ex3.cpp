#include <iostream>
using namespace std;

struct data
{
   int dia;
   int mes;
   int ano;	
};

// Passagem de parâmetro por valor
void mostra_data1(data d)
{
    cout << d.dia << "/" << 
            d.mes << "/" <<
			d.ano << endl;	
}

// Passagem de parâmetro por referência
void mostra_data2(data &d)
{
    cout << d.dia << "/" << 
            d.mes << "/" <<
			d.ano << endl;	
}

// Passagem de parâmetro por ponteiro
void mostra_data3(data *d)
{
    cout << d->dia << "/" << 
            d->mes << "/" <<
			d->ano << endl;	
}


int main(int argc, char** argv)
{
	data hoje;
	data amanha;
	data *ph;
	data *pa;
	
	hoje.dia = 19;
	hoje.mes = 4;
	hoje.ano = 2022;
	mostra_data1(hoje);
	mostra_data2(hoje);
    mostra_data3(&hoje);
    
    amanha = hoje;
    amanha.dia++;
    mostra_data1(amanha);
    mostra_data1(hoje);
    
    ph = &hoje;
    pa = &amanha;
    cout << ph << endl;
    cout << pa << endl;    
	
	return 0;
}