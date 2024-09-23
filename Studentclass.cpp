#include<iostream>
using namespace std;
class Student{
	public:
		Student()
		{
			Name = "Empty";
			FatherName = "Empty";
			RollNumber = 0;
		}
		string Name;
		string FatherName;
		int RollNumber;
};
int main()
{
	Student Rehan;
	
	cout<<"The name of the student is "<<Rehan.Name;
}