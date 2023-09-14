#include<stdio.h>
int main(){
	// transfer temperature 
	float Celsius, Fahrenheit;
	
	printf("Donner la temperature en Fahrenheit");
	scanf("%f", &Fahrenheit);
	
	Celsius = ( Fahrenheit - 32 ) / 1.8 ;
	
	printf("%.4f F= %.4f °C",Fahrenheit, Celsius);
	//testing la température
	if( Celsius > 28 && Celsius < 34 ) printf("il fait chaud");
	if( Celsius > 34 ) printf("il fait tres chaud");
	if( Celsius < 28 && Celsius > 10 ) printf("il fait froid");
	if( Celsius < 10 ) printf("il fait tres froid");

	return 0;
}
