#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double tons, stones, pounds, ounces, totalOunces, totalKilos, metricTons, remainingKilos, grams;

    // Ask the user for input for tons, stones, pounds and ounces.
    cout << "Imperial To Metric Conversion" << endl;
    cout << "Enter the number of tons: " << endl;
    cin >> tons;

    cout << "Enter the number of stones: " << endl;
    cin >> stones;

    cout << "Enter the number of pounds: " << endl;
    cin >> pounds;

    cout << "Enter the number of ounces: " << endl;
    cin >> ounces;

    // Calculate the total ounces using the formula, user input and constants
    totalOunces = (35840 * tons) + (224 * stones) + (16 * pounds) + ounces;

    // Calculate the total kilos using the total ounces and the constant
    totalKilos = totalOunces / 35.274;

    // Calculate the total metric tons using total kilos and the constant
    metricTons = int(totalKilos / 1000);

    // Calculate the rest of the kilos by subtracting the total metric tons multiplied by the constant
    remainingKilos = totalKilos - (metricTons * 1000);

    // Similar to remaining kilos but using remaining kilos instead of total and metric tons.
    grams = (remainingKilos - int(remainingKilos)) * 1000;

    // Output using int for remaining kilos os it's a whole number, and round method for grams so it goes to one decimal place
    cout << "The metric weight is " << metricTons << " metric tons, " << int(remainingKilos) << " kilos, and "
        << round(grams * 10) / 10 << " grams." << endl;

    return 0;
}
