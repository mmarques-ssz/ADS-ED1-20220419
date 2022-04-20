#include <iostream>
#include <string.h>
using namespace std;

class Data
{
private:
	int dia;
	int mes;
	int ano;

public:
	Data(int dia, int mes, int ano)
	{
		this->dia = dia;
		this->mes = mes;
		this->ano = ano;
	}

	Data()
	{
		this->dia = 28;
		this->mes = 9;
		this->ano = 1962;
	}

	void setDia(int dia)
	{
		this->dia = dia;
	}

	void setMes(int mes)
	{
		this->mes = mes;
	}

	void setAno(int ano)
	{
		this->ano = ano;
	}

	int getDia()
	{
		return this->dia;
	}

	int getMes()
	{
		return this->mes;
	}

	int getAno()
	{
		return this->ano;
	}

	string getData()
	{
		return to_string(this->dia) + "/" +
			   to_string(this->mes) + "/" +
			   to_string(this->ano);
	}

	Data* dia_seguinte()
	{
		Data *ds;
		int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

		ds = new Data(this->dia, this->mes, this->ano);

		if (ds->ano % 4 == 0)
		{
			diasNoMes[1]++;
		}

		ds->dia++;
		if (ds->dia > diasNoMes[ds->mes - 1])
		{
			ds->dia = 1;
			ds->mes++;
			if(ds->mes > 12)
			{
				ds->mes = 1;
				ds->ano++;
			}
		}

		return ds;
	}

};

int main(int argc, char** argv)
{
	Data *hoje = new Data(19, 4, 2022);
	cout << hoje->getData() << endl;

	Data *amanha = hoje->dia_seguinte();
	cout << amanha->getData() << endl;
	
	Data *datas[5];
	for(int i=0; i<5; ++i)
	{
	    datas[i] = new Data(i+1, 4, 2022);
	}
	
	for(int i=0; i<5; ++i)
	{
		cout << "Dia: " << datas[i]->getData() 
		     << " - dia seguinte: " << datas[i]->dia_seguinte()->getData()
		     << endl;
	}
	
	Data *anivBenildes = new Data(28, 2, 1964);
	cout << "Aniversario do Benildes: " 
	     <<  anivBenildes->getData() << endl;

    cout << "Dia seguinte ao aniversario do Benildes: " 
	     <<  anivBenildes->dia_seguinte()->getData() << endl;	     
	
    cout << "Dia seguinte ao dia seguinte do aniversario do Benildes: " 
	     <<  anivBenildes->dia_seguinte()->dia_seguinte()->getData() << endl;	     

	return 0;
}
