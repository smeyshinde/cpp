#include<iostream>
using namespace std;
class Rectangle{
	int b;
	int l;
	int circumference;
	int area;
friend void getRect();

public:
	Rectangle(int le,int br){
		l=le;
		b=br;
	}
	
public:
	void getRect(){
		area=l*b;
		circumference=2*l*b;
		cout<<"The area of the Rectangle is "<<area<<endl;
		cout<<"The circumference of the Rectangle is "<<circumference<<endl;

	}
};
int main(){
	Rectangle rt(7,8);
	rt.getRect();
}

