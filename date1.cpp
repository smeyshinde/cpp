#include<iostream>
using namespace std;
class Date{
	int day;
	int month;
	int year;
//default
public:	
    Date(){
    	day=00;
    	month=00;
    	year=0000;
	}
//parameter
public:
    Date(int a,int b,int c){
    	day=a;
    	month=b;
    	year=c;
	}
		
public:
	void display(){
	cout<<"day="<<day<<endl;
	cout<<"month="<<month<<endl;
	cout<<"year="<<year<<endl;
	cout<<endl;
    cout<<endl;
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


