#include<iostream>
#include<string>
using namespace std;

class Student{
	string name;
	int age;
	string department;
	string prn;
	
public:
    Student(string a, int b,string c,string d) {
        name = a;
        age = b;
        department = c;
        prn = d;
          
    }
    
    void get_Data() {
        cout << "Enter the name of Student" << endl;
        cin >> this->name;
        cout << "Enter the age of Student" << endl;
        cin >> this->age;
        cout << "Enter the Department of Student" << endl;
        cin >> this->department;
        cout << "Enter the prn of Student" << endl;
        cin >> this->prn;
    }
    
    void display() {
        cout << "Name of the Student: " << this->name << endl;
        cout << "Age of the Student is: " << this->age << endl;
        cout << "Department of the Student: " << this->department << endl;
        cout << "prn of the Student: " << this->prn << endl;

    }
	
};
class Employee{
	string name;
	int age;
	string department;
	string ID;
	
public:
    Employee(string a, int b,string c,string d) {
        name = a;
        age = b;
        department = c;
        ID = d;
          
    }
    
    void get_Data() {
        cout << "Enter the name of Employee" << endl;
        cin >> this->name;
        cout << "Enter the age of Employee" << endl;
        cin >> this->age;
        cout << "Enter the Department of Employee" << endl;
        cin >> this->department;
        cout << "Enter the ID of Employee" << endl;
        cin >> this->ID;
    }
    
    void display() {
        cout << "Name of the Employee: " << this->name << endl;
        cout << "Age of the Employee is: " << this->age << endl;
        cout << "Department of the Employee: " << this->department << endl;
        cout << "ID of the Employee: " << this->ID << endl;

    }
	
};

int main() {
    Student s1("",0,"","");
    s1.get_Data();
    cout<<endl;
    s1.display();
    cout<<endl;

    
    
    Employee e1("",0,"","");
    e1.get_Data();
    cout<<endl;
    e1.display();
    
    return 0;
}

