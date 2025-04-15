#include<iostream>
using namespace std;
int main(void)
{
	int numero,a,i,b,c,d,e=0,f=0;
	cout<<endl<<"Scrivi il numero di cui vuoi verificare se e' palindromo:";
	cin>>numero;
	numero=a;
	while(a>0)																//conteggio cifre
	{
		a/=10;
		i++;
	}
	b=i-1;
	while(i==e+1)															//verifico le cifre da destra a sinistra
	{
		c=(numero/(int)pow(10,e))% 10;
		d=(numero/(int)pow(10,b))% 10;
		e++;
		b--;
		if(c!=d)															//se sono diversi aumento f che alla fine segnalerà che non è palindromo
		{
			f++;
		}
	}
	if(f==0)
	{
		cout<<endl<<numero<<" e' un numero palindromo";
	}
	else
	{
		cout<<endl<<numero<<" non e' un numero palindromo";
	}
}
