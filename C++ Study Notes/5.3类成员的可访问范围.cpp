#include <iostream>
using namespace std;
class cEmployee
{
	private:
		char szName[30];
	public:
		int salary;
		void setName(char *name);
		void getName(char *name);
		void averageSalary (cEmployee e1,cEmployee e2);
};

void cEmployee::setName(char *name)
{
	strcpy (szName,name);
}
void cEmployee::getName(char *name)
{
	ctrcpy (name,szName);
}
