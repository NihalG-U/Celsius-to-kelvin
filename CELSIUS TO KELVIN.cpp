int main(){
	// we declare the values using int
int celsius;
int kelvin;

// this is for some reason but we use std::cout to print the output	
std::cout << "Enter temperature in Celsius: ";
std::cin >> celsius;  

kelvin = celsius + 273; // Converts celsius to kelvin by adding 273 (approximately as 0 degrees Celsius is  273.15 Kelvin)
// output 
std::cout << "Temperature in Kelvin: " << kelvin << " K\n";

// ok guys thanks for watching this code hope to see you next week 

}