I'm/* Name: ssenyange simon peter*/
/* Student Number: 25/U/BIE/11579/PE */
#include <stdio.h>
int main (){
	float units;  // number of units
	float cost; //cost per unit
	float totalelectricitybill; //total electricity used
	printf("enter units consumed:");
	scanf("%f",&units);
	printf("enter cost per unit");
	scanf("%f",&cost);
	totalelectricitybill =(units)*cost;
	printf("\ntotal electricitybill is: %.2f UGX\n",totalelectricitybill);
	return 0;
}
