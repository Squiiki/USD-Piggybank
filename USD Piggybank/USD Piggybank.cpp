// Purpose:     This basic program will ask the user for 3 currencies, Pesos, Reals, and Soles, then it will convert those currencies to USD using likely outdated conversions
// Author:      Braeden Corr
// Date:        May 11th, 2020

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Some variables
    double pesos = 0;
    double reais = 0;
    double soles = 0;
    double dollars = 0;

    //As of May 11th, 2022, 1 Col. Peso = 0.00024 USD, 1 reais = 0.2 USD, 
    double pesoConv = 0.00024;
    double reaisConv = 0.2;
    double solesConv = 0.26;

    //Ask user for peso input
    cout << "How many Colombian Pesos do you have? ";
    cin >> pesos;

    //Ask user for reais input
    cout << "How many Brazilian Reais do you have? ";
    cin >> reais;

    //Ask user for soles input
    cout << "How many Peruvian Soles do you have? ";
    cin >> soles;

    //Convert eveything to USD and add it up
    dollars = (pesos * pesoConv) + (reais * reaisConv) + (soles * solesConv);

    //Display the total
    cout << "\nFinal Total in USD: \n";
    cout << "$" << dollars << "\n\n";

}
