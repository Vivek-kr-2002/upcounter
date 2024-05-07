// this is a code for 2 7-segment display using bcd decoders
/*
**********************************************************************************************************************************************************
AUTHOR: PUSHKAL AGARWAL
ROLL NUMBER:	2001034
INSTITUTE:	INDIAN INSTITUTE OF INFORMATION TECHNOLOGY, BHAGALPUR
DEPARTMENT:	ELECTRONICS AND COMMUNICATION ENGINEERING
DATE:	20-11-2022

**********************************************************************************************************************************************************
*/

#include<reg51.h>
#define port P2 // defining the port P2


// defining the delay value.
void delay(){
	int i=0;
	int j=0;
	for( i=0; i<1000; i++)
	{
		for( j=0; j<100; j++);
	}
}
 void main()
 {
	 unsigned int a, b;
	 while(1){
		 
		for(a=0; a<=9; a++)
		{
			for(b=0; b<=9; b++)
			{
				port = a|(b<<4); // ACTUAL LOGIC
				delay();// DELAY FUNCTION
			} 
		}
	}
}