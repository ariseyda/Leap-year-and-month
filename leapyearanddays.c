#include<stdio.h>

//Write function described below. 
//A function receives year as an unsigned integer and returns 366 if it is a leap year, or 365 if it is not a leap year. 
//Another function receives month and year as an unsigned integers and returns day count in that month of that year. 
//The function should be able to handle February in leap years.
//Use the functions in a program that receives year and month from user and displays how many days are there in that month of the year. 

int leap_year(int a);
int month_year(int m,int y);

int main(){
	
	unsigned int n,a;
	printf("Please enter a year:");
	scanf("%u",&n);
	
	printf("The year %d is %d days.\n",n,leap_year(n));
	
	printf("Please enter a month:");
	scanf("%u",&a);
	
	printf("%d.th month %d days.\n",a,month_year(a,n));
	
	return 0;
}
int leap_year(int a){
	while(a%100!=0){
		
	    if(a%4==0){
	    	
	       return 366;//Leap year(29 days in February.)
	    	
		}
		else
		  return 365;//Not a leap year(28 days in February.)
	
	break;
	}
}
int month_year(int m,int y){

	int r=leap_year(y);
	if(r==366){
		
		   if(m%2==0){
		   	if(m==2){
		   		return 29;
			   }
			else{
				return 30;
			}   
		   }
		   else if(!(m%2==0)){
		   	return 31;
		   }
		}
		
	
	else if(r==365){
		
		  if(m%2==0){
		   	if(m==2){
		   		return 28;
			   }
			else{
				return 30;
			}   
		   }
		   else if(!(m%2==0)){
		   	return 31;
		   }
		}

	
}

