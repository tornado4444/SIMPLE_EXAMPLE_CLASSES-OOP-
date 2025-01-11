#include <iostream>
#include <iomanip>

class Clients {
public:
	Clients(); // constructor
	// MyStruct
	/*struct Realization {
		std::string surname[20];
		signed base_packets;
		signed soc_packets;
		signed costMonths;
	};*/

	// Getters
	int getPackets() const { return base_packets; }
	int getSocPackets() const { return soc_packets; }
	int getCostMonths() const { return costMonths; }


	void Commone();
	void vivod() const; 

	// Not Correct
	// void difference();
	// Correct
	void difference();
private:
	std::string surname;
	double base_packets;
	double soc_packets;
	signed costMonths;

	// For difference
	double pedro = 0.0;
};

using std::cout;
using std::cin;

// Realization the constructor Clients
Clients::Clients() {
	// Just Realization
	base_packets = soc_packets = costMonths = 0;
}

void Clients::Commone() {
	cout << "Write your surname: "; cin >> this->surname;
	cout << "Write your the cost of the basic package per month: " ; cin >> this->base_packets;
	cout << "Write the cost of the social package per month: " ; cin >> this->soc_packets;
	cout << "Write the number of months of paying for the use of cable television: " ; cin >> this->costMonths;
}

void Clients::vivod() const{
	cout << "\nYour surname: " << this->surname
		<< "\nYour cost of the basic package per month: " << this->base_packets
		<< "\nYour cost of the social package per month: " << this->soc_packets
		<< "\nYour number of months of paying for the use of cable television: " << this->costMonths;
}

// WITHOUT CONST!!! BECAUSE WE`RE CHANGE THIS METHOD
void Clients::difference() {
	pedro = (base_packets - soc_packets) * costMonths;

	std::cout << "\n\nDifference in payment for " << costMonths << " months: "
		<< std::fixed << std::setprecision(2) << pedro << " UAH\n";

	if (base_packets > 0)
		std::cout << "When switching to a social package, the client will save money: "
		<< pedro << " UAH\n";
	else if (base_packets < 0)
		std::cout << "The social package is more expensive than the basic package by "
		<< -pedro << " UAH\n";
	else
		std::cout << "Packets have the same cost by " << pedro << " UAH";

	std::cout << "\n\nYour difference: " << pedro;
}

int main() {
	Clients client;

	client.Commone();
	client.vivod();
	client.difference();
}
