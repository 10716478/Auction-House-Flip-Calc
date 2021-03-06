// Auction House Flip Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;


double calcBreakeven(double queued, double cost, double sell)
{
	return queued * (cost / sell);
}


int main()
{
	double matCost; //total price of all mats for 1 pot
	double potSellPrice; //amount pot is selling for
	double itemsQueued; // amount pots able to be made
	double breakeven;

	cout << "Enter the total cost of all mats in gold and silver: ";
	cin >> matCost;
	cout << endl;

	cout << "Enter the amount the item will sell for in gold and silver: ";
	cin >> potSellPrice;
	cout << endl;

	cout << "Enter the amount of items that you are able to craft: ";
	cin >> itemsQueued;
	cout << endl;

	breakeven = calcBreakeven(itemsQueued, matCost, potSellPrice);

	cout << "You must craft " << fixed << setprecision(2) << breakeven << " to break even in gold." << endl;

	return 0;
}




