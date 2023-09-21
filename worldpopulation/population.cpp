#include<iostream>
using namespace std;
main(){
 	cout<<"Enter the current world population:";
	float population;
 	cin>> population;
	cout<<"Enter the monthly birth rate (number of births per month):";
	float rate;
	cin>> rate;
	int afterthirtydecades;
	afterthirtydecades= (rate*360)+population ;
	cout<< "The population in three decades will be:";
	cout<< afterthirtydecades ;

}	