#include <iostream>
using namespace std;
int main()
{
	float x,y;
	int i=0;
	double hit=0,rate;
	setlocale(0,"rus");
	cout<<"Введите x и y\n";
	while(1)
	{
	 cin >> x >> y;
     if ((x == 0) && (y == 0)) 
     break;	
	 if ((x<=6)&&(y<=x)&&(y>=3))
		{
			cout <<"Точка попадает \n";
			hit++;
		}
			else 
			cout<< "Нет попадания\n";
	 i++;
	}
	rate = hit/i*100;
	cout<<"Процент попаданий: "<<rate;
	return 0;
}
