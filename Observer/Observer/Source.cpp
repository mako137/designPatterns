#include"Observ.h"

int main()
{
	Buyer* a = new UkrainianBuyer("Petro");
	Buyer* b = new UkrainianBuyer("Igor");
	

	Car prod("Mazda", 10.2);
	
	prod.Attach(a);
	prod.Attach(b);
	prod.SetPrice(5);
	prod.Detach(b);

	prod.SetPrice(15);
	system("pause");
}