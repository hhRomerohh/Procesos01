
#include <iostream>
using namespace std;

class complejo{
	public: 
	complejo& Inicia(double r, double i){
		real=r;
		imag=i;
		return *this;
	}
	
	void Muestra(){
		cout<<"\nNumero real: "<<real<<"\nNumero imaginario: "<<imag;
	}
	private:
		double real,imag;
};
	int main(){
		complejo c;
		complejo *ptrc = &c;
		(*ptrc).Inicia(3.0,1.5).Muestra();
		ptrc->Inicia(1.2,-5.4).Muestra();
		c.Inicia(3.0,-2.3).Muestra();
	}

