#include<stdio.h>
#include<string.h>

int main(){
	int day,month,year;
	
	printf("\n -- user input --");
	printf("\n Enter date :: ");
		scanf("%d",&day);
	printf("\n Enter month :: ");
		scanf("%d",&month);
	printf("\n Enter year :: ");
		scanf("%d",&year);
		
	int month_code = 0;
	if(month == 1)
		month_code = 0;
	else if(month == 10)
		month_code = 0;
	else if(month == 2)
		month_code = 3;
	else if(month == 3)
		month_code = 3;
	else if(month == 11)
		month_code = 3;
	else if(month == 4)
		month_code = 6;
	else if(month == 7)
		month_code = 6;
	else if(month == 5)
		month_code = 1;
	else if(month == 6)
		month_code = 4;
	else if(month == 8)
		month_code = 2;
	else if(month == 9)
		month_code = 5;
	else if(month == 12)
		month_code = 5;
	else
		printf("Invalid Month");
		

	int remain_year = year - 1900;
	int res = (day + month_code + remain_year + (remain_year/4)) % 7;
	
	char date[30];
	
	if(res == 0)
		strcpy(date,"Sunday");
	else if(res == 1)
		strcpy(date,"Monday");
	else if(res == 2)
		strcpy(date,"Tuesday");
	else if(res == 3)
		strcpy(date,"Wednusday");
	else if(res == 4)
		strcpy(date,"Thursday");
	else if(res == 5)
		strcpy(date,"Friday");
	else if(res == 6)
		strcpy(date,"Saturday");	
	else
		strcpy(date,"Wrong Input !!");
	
	printf("\n -- output --");
	printf("\n day = %s",date);	
}	
