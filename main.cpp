/*Adley Fanfan
  September 8 2023
  Purpose to display: Loan monthly term
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
cout << left << "Borrower's Name: ";
string name, institution, date;
double loanAmount, interest;
int term;
getline(cin, name);
cout << left << setw(6) << "Loaning Institution: ";

getline(cin, institution);
cout << left << setw(6) << "Loan Amount ($): ";
//cin.ignore();

cin >> loanAmount;
cout << left << setw(6) << "Annual Interest Rate (%): ";

cin >> interest;
cout << left << setw(6) << "Term of loan (years): ";

cin >> term;
cout << left << setw(6) << "Date of Report: ";
cin.ignore();

getline(cin, date);

//Calculations
double monthlyInterest = interest / 1200;
double totalAmountToPay = 0, totalInterest = 0;

double monthlyPayment = 0;

monthlyPayment = (monthlyInterest * pow((1 + monthlyInterest), term*12) / (pow((1 + monthlyInterest), term*12) - 1))* loanAmount;
    for (int i = 1; i <= (term * 12); i++)
{
totalAmountToPay += monthlyPayment;

}
totalInterest = totalAmountToPay-loanAmount;

cout << "-----------------------------------------------------------------------" <<endl;
cout << "Loan Payment Summary Report" << endl;
cout << left << setw(10) << institution << right << setw(10) << name << endl;

cout << "Annual Interest Rate: " << interest<<"%" << endl;
cout << "Date: " << date << endl;
cout << endl;
cout << left << setw(10) << "Loan Amount:" << right << setw(10) <<  setw(10) << loanAmount << endl;
cout << left << setw(10) << "Monthly Interest Rate:" << right << setw(10) << (monthlyInterest*100) << endl;
cout << left << setw(10) << "Number of Payments:" << right << setw(10)<< term*12 << endl;
cout << left << setw(10) << "Monthly Payment:" << right << setw(10) <<  setw(10) << monthlyPayment << endl;
cout << endl;
cout << left << setw(10) << "Total Amount to Pay:" << right << setw(10) <<  setw(10) << totalAmountToPay << endl;
cout << left << setw(10) << "Total Interest:" << right << setw(10) << setw(10) << totalInterest << endl;

return 0;
}