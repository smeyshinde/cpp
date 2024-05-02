#include<iostream>
#include<string.h>
using namespace std;
class Date{
	int day;
	int month;
	int year;
//default
public:	
    Date(){
    	day=00;
    	month=0;
    	year=0000;
	}

public:
    Date(int a,int b,int c){
    	day=a;
    	month=b;
    	year=c;
	}

	
		
public:
	void display(){
	cout<<"Date is : "<<day<<"-"<<month<<"-"<<year<<endl;
	cout<<"Date is : "<<day<<"-"<<mon(month)<<"-"<<year<<endl;
	}

    string mon(int month){
    	string cal[]={"0","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    	return cal[month];
	} 
public: 
    void get_Data(){
    	cout<<this->day<<"-"<<this->month<<this->year<<endl;
	}
};
int main(){
	int a,b,c;

	cout<<"Enter the day"<<endl;
	cin>>a;
	cout<<"Enter the month"<<endl;
	cin>>b;
	cout<<"Enter the year"<<endl;
	cin>>c;

	Date d1;
	Date d2(a,b,c);
	d1.display();
	d2.display();
	
   
    
}
