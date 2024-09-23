#include<iostream>
using namespace std;
enum Color{
	Red,Black,Mahroon,White
};
class Car
{
	public:
		int RegNo;
		int ModelNumber;
		Color CarColor;
		string ChasisNumber;
		
		void DisplyCarDetails(Car obj)
		{
			cout<<"RegNo of the car is "<<obj.RegNo<<endl;
			cout<<"Model Number of the Car is "<<obj.ModelNumber<<endl;
			cout<<"Color of the Car is "<<obj.CarColor<<endl;
			cout<<"Chassis Number of the Car is "<<obj.ChasisNumber<<endl;
		}
};

int main()
{
	Car Toyota;
	Toyota.CarColor = Orange;
}