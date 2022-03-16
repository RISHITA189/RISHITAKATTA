#include <stdio.h>

int main()
{
    int Basic_Sal=0,Sales_amt=0;
	int commission=0;
	int Net_Salary=0;
	printf("Enter the Basic Salary: ");
	scanf("%d",&Basic_Sal);
	printf("\nEnter total sales amount: ");
	scanf("%d",&Sales_amt);
	
	if((5000<= Sales_amt) && (Sales_amt <= 7500))
	{
		commission = 3;
		Net_Salary = Basic_Sal + ((Sales_amt/100) * commission);
	}
	else if((7501<= Sales_amt) && (Sales_amt <= 10500))
	{
		commission = 8;
		Net_Salary = Basic_Sal + ((Sales_amt/100) * commission);
	}
	else if((10501<= Sales_amt) && (Sales_amt <= 15000))
	{
		commission = 11;
		Net_Salary = Basic_Sal + ((Sales_amt/100) * commission);
	}
	else if(Sales_amt >= 15001)
	{
		commission = 15;
		Net_Salary = Basic_Sal + ((Sales_amt/100) * commission);
	}
	
	printf("NET SALARY: %d and COMMISSION:%d",Net_Salary,commission);

    return 0;
}