#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int short Hours,Rate_per_hour;
	float Wages,Over_time,Over_time_wages;
	cout<<"Enter the Working Hours =";
	cin>>Hours;
	cout<<"Entered Working Hours ="<<Hours<<endl;
	cout<<"Rate per hour = ";
	cin>>Rate_per_hour;
	cout<<"Rate per hour ="<<Rate_per_hour<<endl;
	Wages=Rate_per_hour * Hours;
	cout<<"Total Wages="<<Wages<<endl;
	if (Hours>40)
	{
	
	Over_time=Hours-40;
	cout<<"Over time = "<<Over_time<<endl;
	Over_time_wages=Over_time*Rate_per_hour;
	cout<<"Over time wages = "<<Over_time_wages<<endl;
}else{

cout<<"Over time wages is = 0 "<<endl;}
	
	cout<<"Total weekly wages is = "<<Wages<<endl;
	
	
	return 0;
}


