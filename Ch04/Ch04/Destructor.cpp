#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	string* name;
	int age;
public:
	Person(string myname, int myage)
	{
        //int len = myname.size();
        name = new string(myname);
		//strcpy(name, myname);
		age=myage;
	}

	void ShowPersonInfo() const
	{
		cout<<"name: "<<name<<endl;
		cout<<"age : "<<age<<endl;
	}
	
	~Person()
	{
		delete name;
		cout<<"called destructor!"<<endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
