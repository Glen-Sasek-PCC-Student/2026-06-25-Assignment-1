// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
  cout << "Hello, World!" << endl;
  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:
Tax Calculator

Program Description:
During September, businesses across the United States take time to thank their payroll teams and reflect on all of the successful paydays of the past year. While technology has made it easier than ever for HR teams to pay their employees, crunching the numbers can still be a laborious task for payroll professionals. National Payroll Week serves as a reminder that there are dedicated professionals working hard everyday to ensure we get paid accurately and on time.

Design:
A. INPUT
int employeeID = 0;
int employeeHours = 0;
int USDPerHour = 0;
int integerWithholdingRate = 0;

B. OUTPUT
double grossPayUSD = 0.0;
double federalTaxWitholdingUSD = 0.0;
double netPayUSD = 0.0;

C. CALCULATIONS
First calculate the total gross pay from the hours worked and the hourly rate inputs. 
grossPayUSD = employeeHours * USDPerHour;
double decimalWitholdingRate = integerWithholdingRate / 100.0;
federalTaxWitholdingUSD = grossPayUSD * decimalWitholdingRate;
netPayUSD = grossPayUSD - federalTaxWitholdingUSD;

D. LOGIC and ALGORITHMS
WELCOME "Welcome to my Weekly Payroll program!!"

PROMPT "Enter your employee ID number (numbers only): "
INPUT employeeID

PROMPT "Enter number of hours worked (whole numbers): "
INPUT employeeHours

PROMPT "Enter the hourly rate: "
INPUT USDPerHour

PROMPT "Enter the federal withholding rate: "
INPUT federalWithholdingRatePercent

DO CALCULATIONS

HEADING "Your Payroll Summary: "

LABEL "Gross Pay: "
DATA grossPayUSD

LABEL "Federal Tax Withholding: "
DATA federalTaxWitholdingUSD

LABEL "Net Pay: "
DATA netPayUSD

GOODBYE "Thank you for using my Weekly Payroll program!!"


SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15
Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578
Thank you for using my Weekly Payroll program!!


Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10
Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594
Thank you for using my Weekly Payroll program!!


*/
