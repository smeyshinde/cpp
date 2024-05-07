#include<iostream>
#include<string>
using namespace std;

class Person{
public: 
string name;
int age;
};

class Student : protected Person{
public: 
	string department;
	string prn;	

    
    
    void set_Data() {
        cout << "Enter the name of Student" << endl;
        cin >>name;
        cout << "Enter the age of Student" << endl;
        cin >>age;
        cout << "Enter the Department of Student" << endl;
        cin >> department;
        cout << "Enter the prn of Student" << endl;
        cin >>prn;
    }
    
     void get_Data() {
        cout << "Name of the student is: " <<name<< endl;
        cout << "Age of the student is: " <<age<< endl;
        cout << "Department of Student is: " <<department<< endl;
        cout << "Prn of Student: " <<prn<< endl;
    }
	
};
class Employee : public Person{
public: 
	string department;
	string ID;	

    
    
      void set_Data() {
        cout << "Enter the name of Employee" << endl;
        cin >>name;
        cout << "Enter the age of Employee" << endl;
        cin >>age;
        cout << "Enter the Department of Employee" << endl;
        cin >> department;
        cout << "Enter the ID of Employee" << endl;
        cin >>ID;
    }
    
    
    void get_Data() {
        cout << "Name of the Employee is: " <<name<< endl;
        cout << "Age of the Employee is: " <<age<< endl;
        cout << "Department of Employee is: " <<department<< endl;
        cout << "ID of Employee: " <<ID<< endl;
        cout <<endl;
    }
	
};

int main() {
    Student s1;
    cout<<"Information of Student is : " <<endl;
    s1.set_Data();
    cout<<endl;
    s1.get_Data();
    cout<<endl;

    
    
    Employee e1;
    cout<<"Information of Employee is : " <<endl;
    e1.set_Data();
    cout<<endl;
    e1.get_Data();
    cout<<endl;
    
    return 0;
}

