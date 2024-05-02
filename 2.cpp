#include<iostream>
using namespace std;


class Person{
public:
	string name ;
	int age;
	virtual setdata(){
		cout<<"Enter the name "<<endl;
		cin>>name;
		cout<<"Enter the age "<<endl;
		cin>>age;
		
	}
	virtual display(){cout<<name<<age;
	}
};


class Customer : public Person{
public:
	int cid;
	virtual setdata(){
		cout<<"Enter the cid "<<endl;
		cin>>cid;
		
	}
	virtual display(){
		cout<<cid<<endl;
	}
};


class Employee : public Person{
public:
	int eid;
	virtual setdata(){
		cout<<"Enter the eid "<<endl;
		cin>>eid;
		
	}
	virtual display(){
		cout<<eid<<endl;
	}
};


class EmoployeeCustomer1:public Employee{
public: 
int ESID;
virtual setdata(){
	cout<<"Enter the ESID";
	cin>>ESID;
}	
virtual display(){
	cout<<ESID<<endl;
}
};


class EmoployeeCustomer2:public Customer{
public:
int ESID;
virtual setdata(){
	cout<<"Enter the ESID";
	cin>>ESID;
}	
virtual display(){
	cout<<ESID<<endl;
}
};


int main(){
Person p;
Customer c;
Employee e;
EmoployeeCustomer1 ec1;
EmoployeeCustomer2 ec2;
Person*ptr;
ptr=&p;
ptr->setdata();
ptr->display();
}

