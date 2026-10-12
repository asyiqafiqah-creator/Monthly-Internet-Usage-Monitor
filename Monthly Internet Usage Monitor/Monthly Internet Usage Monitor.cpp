//MonthlyInternetUsageMonitor.cpp- calculate the remaining quota of monthly internet
#include <iostream>
using namespace std;

double inputdataUsed();
//read the data used for this month in GB
double computeRemainingQuota(double dataUsed);
//return the remaining quota in GB

void displayResult(double RemainingQuota);

int main()
{
	double dataUsed, RemaianingQuota;
	//shows result
//CALL inputdataUsed RETURNING dataUsed
	dataUsed = inputdataUsed;
//CALL computeRemainingQuota with dataUsed RETURNING RemainingQuota
	RemainingQuota = computeRemainingQuota(dataUsed);
//CALL displayResult with RemainingQuota

//inputdataUsed
//DISPLAY prompt to enter data used for this month(GB) :
	//READ dataUsed
	//RETURN dataUsed

	//computeRemainingQuota with dataUsed
	//COMPUTE RemainingQuota as 100 - dataUsed
	// RETURN RemainingQuota

	//displayResult(RemainingQuota)
	//IF RemainingQuota >= 0  THEN
	//DISPLAY Remaining Quota(GB) :
	//ELSE
	//DISPLAY Quota Exceeded by ABS(RemainingQuota
		//DISPLAY WARNING : Monthly quota exceeded


