
//program to calculate electricity bills 

#include <stdio.h>
int main ()
{	int Units;	
char Name[5];
int ID;	
float Bill;
float ChargePerUnits;
float TAP ;
float SCF;		
printf("enter customer name");	
scanf("%s",&Name);		
printf("enter customer Id");    
scanf("%d",&ID);        
printf("enter units consumed");    
scanf("%d",&Units);        	
if (Units<200)
{ ChargePerUnits =1.20;  }   
else if (Units>=200 &&Units< 400)
{    ChargePerUnits = 1.50;   }    	
else if (Units>=400 && Units<600)
{ ChargePerUnits = 1.80;   }    		
else {  ChargePerUnits=200;   }    	    		
Bill =Units*ChargePerUnits;    		
if (Bill > 400)
{  SCF=Bill*0.15; }    		
if (Bill <100)
{ Bill =100;    		}   
TAP =Bill +SCF;		    		
printf("\ncustomer name:\t%s",Name);    		
printf("\ncustomer ID \t%d",ID);    		
printf("\nunits consumed \t%d",Units);            
printf("\ncharge per units \t%f",ChargePerUnits);            
printf("\ntotal bill \t%f",TAP);                            	
	return 0;                		}    			