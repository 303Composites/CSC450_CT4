/*
 * CSC450_CT4_1.cpp
 *
 *  Created on: Jun 6, 2020
 *      Author: 303 Composites
 *
 */

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	//Creating new double pointers for wage calculation
  double *wage = new double;
  double *hours = new double;
  double *overtime = new double;
  double *weeklywage = new double;

  cout << "What is your hourly wage?" << endl;
  cin >> *wage;
  cout << "Please enter the hours you worked this week:\n(note 40 hours is a standard work week)" << endl;
  cin >> *hours;
  //Statement to calculate if person has worked overtime
  if (*hours > 40) {
      cout << "You have worked overtime" << endl;
    *overtime = *hours - 40;
    *weeklywage = 40 * *wage + *overtime * 1.5 * *wage;
  }
  else {
      cout << "You have not worked overtime this week\n" << endl;
    *weeklywage = *hours * *wage;
  }

  cout << "Your pre-tax wages for this week $" << fixed << showpoint << setw(7) << setprecision(2) << *weeklywage << endl;

  //deleting pointer values
  delete wage;
  delete hours;
  delete overtime;
  delete weeklywage;

  return 0;
}
