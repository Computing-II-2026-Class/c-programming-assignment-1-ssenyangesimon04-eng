/* Name: ssenyange simon */
/* Student Number: 25/U/BIE/11579/PE */

#include <stdio.h>
int main()
{
float amount;  // total amount to be put
float feepercent;  // transaction fee in percentage
float feeamount;  // transaction fee
float totalDeducted;  //total momey deducted from your account
printf("Enter amount to send:\n",amount);
scanf("%f", &amount);
printf("Enter the percentage for the transaction transaction fee :\n");
scanf("%f", &feepercent);
feeamount = (feepercent/100)*amount;
totalDeducted = amount + feeamount;
printf("\nTransaction fee is %.2f UGX\n",feeamount);
printf("Total deducted:%.2f UGX\n", totalDeducted);
return 0;
}
