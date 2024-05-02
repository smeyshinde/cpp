#include<iostream>
using namespace std;

class Father{
public:
	int f_p , t_f_p , pf;
	void get_Datafather(){
		cout<<"Enter the Fathers Property : "<<endl;
		cin>>f_p;
		cout<<"Enter the Total property : "<<endl;
		cin>>t_f_p;
	}
	void DisplayFather(){
		cout<<"The Total Father's property is :" <<t_f_p<<endl;
	}
	/*void passmypropertyf(){
		pf = t_f_p;
	}*/

};

class Son : public Father{
public: 
	int s_p , t_s_p , ps ;
	void get_Datason(){
		cout<<"Enter the Sons Property : "<<endl;
		cin>>s_p;
		t_s_p = s_p + t_f_p;
	}
	void DisplaySon(){
		cout<<"The Total Son's property is :" <<t_s_p <<endl;
	}
/*	void passmypropertys(){
		ps = t_s_p;
	}*/
};

class Grandson : public Son {
public: 
    int g_p,t_g_p;
    	void get_Datagrandson(){
		cout<<"Enter the Grandson Property : "<<endl;
		cin>>g_p;
		t_g_p = g_p + t_s_p;
	}
	void DisplayGrandson(){
		cout<<"The Total Grandson's property is :" <<t_g_p<<endl;
	}
};

int main(){
    Grandson g;
    g.get_Datafather();
    //g.passmypropertyf();
    g.get_Datason();
    //g.passmypropertys();
    g.get_Datagrandson();
    
    
    g.DisplayFather();
    g.DisplaySon();
    g.DisplayGrandson();
	
}
