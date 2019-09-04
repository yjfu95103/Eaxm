#include <iostream>

using namespace std;

class Vehicle{
	public:
		Vehicle(){
		}
	    void Run(){
		}	
		void Stop(){
		}
	private:
		//int Maxspeed,Tirecount;
	
};

class Car: public Vehicle{
	public:
		Car(int m=0, int t=0){
			Maxspeed = m;
			Tirecount = t;
		}
	    void Run(){
		   cout<<"Car is Running"<<endl;
		   cout<<"Maxspeed is "<<Maxspeed<<endl;
		}	
		void Stop(){
			cout<<"Car has stoped"<<endl;
		}
		void Info(){
			cout<<"Cars can go on the highway"<<endl;
		}
	private:
		int Maxspeed,Tirecount;
};

class Motobike: public Vehicle{
	public:
		Motobike(int m=0, int t=0){
			Maxspeed = m;
			Tirecount = t;
		}
	    void Run(){
		   cout<<"Motobike is Running"<<endl;
		   cout<<"Maxspeed is "<<Maxspeed<<endl;
		}	
		void Stop(){
			cout<<"Motobike has stoped"<<endl;
		}	
	private:
		int Maxspeed,Tirecount;
};

int main(){
	
	Car c(100, 4);
	c.Run();
	c.Stop();
	c.Info();
	
	cout<<endl;
	
	Motobike m(50, 2);
	m.Run();
	m.Stop();
	
	return 0;
} 
