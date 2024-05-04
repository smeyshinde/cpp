#include<iostream>
using namespace std;


class Person{
public:
	string name ;
	int age;
	virtual setdata(){
		cout<<"Enter the name :  "<<endl;
		cin>>name;
		cout<<"Enter the age : "<<endl;
		cin>>age;
	}
	virtual display(){
	cout<<name<<age;
	}
};


class Customer : public Person{
public:
	int CID;
	virtual setdata(){
		cout<<"Enter the CID :"<<endl;
		cin>>CID;
		
	}
	virtual display(){
		cout<<"The customer ID is :"<<CID<<endl;
	}
};


class Employee : public Person{
public:
	int EID;
	virtual setdata(){
		cout<<"Enter the EID : "<<endl;
		cin>>EID;
		
	}
	virtual display(){
		cout<<"The Employee ID is : "<<EID<<endl;
	}
};


class EmoployeeCustomer1:public Employee{
public: 
int ECID;
virtual setdata(){
	cout<<"Enter the ECID : ";
	cin>>ECID;
}	
virtual display(){
	cout<<"The Employee Customer ID is : "<<ECID<<endl;
}
};


class EmoployeeCustomer2:public Customer{
public:
int ECID;
virtual setdata(){
	cout<<"Enter the ECID : ";
	cin>>ECID;
}	
virtual display(){
	cout<<"The ECID of the Employee is : "<<ECID<<endl;
}
};


int main(){
Person p;
Customer c;
Employee e;
EmoployeeCustomer1 ec1;
EmoployeeCustomer2 ec2;
Person*ptr;
ptr=&ec1;
ptr->setdata();
ptr->display();
}

