//MonthlyInternetUsageMonitor.cpp - calculate the remaining quota of monthly internet
#include <iostream>
#include <cmath>
using namespace std;

double inputdataUsed();
// read the data used for this month in GB
double computeRemainingQuota(double dataUsed);
// return the remaining quota in GB

void displayResult(double RemainingQuota);

int main()
{
	double dataUsed, RemainingQuota;
	// CALL inputdataUsed RETURNING dataUsed
	dataUsed = inputdataUsed();
	// CALL computeRemainingQuota with dataUsed RETURNING RemainingQuota
	RemainingQuota = computeRemainingQuota(dataUsed);
	// CALL displayResult with RemainingQuota
	displayResult(RemainingQuota);

	return 0;
}

double inputdataUsed()
{
	double dataUsed;
	// DISPLAY prompt to enter data used for this month(GB) :
	cout << "Enter data used for this month (GB): ";
	// READ dataUsed
	cin >> dataUsed;
	// RETURN dataUsed
	return dataUsed;
}

double computeRemainingQuota(double dataUsed)
{
	// COMPUTE RemainingQuota as 100 - dataUsed
	double RemainingQuota = 100 - dataUsed;
	// RETURN RemainingQuota
	return RemainingQuota;
}

void displayResult(double RemainingQuota)
{
	// IF RemainingQuota >= 0 THEN
	if (RemainingQuota >= 0) {
		// DISPLAY Remaining Quota(GB) :
		cout << "Remaining Quota (GB): " << RemainingQuota << endl;
	} else {
		// DISPLAY Quota Exceeded by ABS(RemainingQuota)
		cout << "Quota Exceeded by " << fabs(RemainingQuota) << " GB" << endl;
		// DISPLAY WARNING : Monthly quota exceeded
		cout << "WARNING: Monthly quota exceeded!" << endl;
	}
}

