/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex1(int testcase){
	int count;
	int arr[5];
	int a;
	
	a = testcase;
	while( a ){
		a /= 10;
		count++;
	}
	
	for( int i = 0; i < count; i++ ) {		
		arr[i] = testcase % 10;
		testcase /= 10;
		if( testcase < 10 ) arr[count] = testcase;
	}
	
	for( int i = count - 1; i >= 2; i-- ){
		switch( arr[i] ) {  
			case 0: 
				printf("zero");
				break;  
			case 1:    
				printf("one ");    
				break;    
			case 2:    
				printf("two ");    
				break;    
			case 3:    
				printf("three ");    
					break;    
			case 4:    
				printf("four ");    
					break;    
			case 5:    
				printf("five ");    
					break;    
			case 6:    
				printf("six ");    
					break;    
			case 7:    
				printf("seven ");    
					break;    
			case 8:    
				printf("eight ");    
					break;    
			case 9:    
				printf("nine ");    
					break;    	 
			}
		if( i + 1 == 4 ) printf("thousand ");
		if( i + 1 == 3 ) printf("hundred ");		 
		}
		
	for( int i = count - 3; i > 0; i-- ){
		if( arr[1] != 1 ){
			switch( arr[i] ) {  
				case 0: 
					printf("zero");
					break;   
				case 2:    
					printf("twelve ");    
					break;    
				case 3:    
					printf("thirty ");    
					break;    
				case 4:    
					printf("fourty ");    
					break;    
				case 5:    
					printf("fifty ");    
					break;    
				case 6:    
					printf("sixty ");    
					break;    
				case 7:    
					printf("seventy");    
					break;    
				case 8:    
					printf("eighty ");    
					break;    
				case 9:    
					printf("ninety ");    
					break;  
			}
			switch( arr[0] ) {  
				case 0: 
					printf("zero");
					break;  
				case 1:    
					printf("one");    
					break;    
				case 2:    
					printf("two");    
					break;    
				case 3:    
					printf("three");    
					break;    
				case 4:    
					printf("four");    
					break;    
				case 5:    
					printf("five");    	
					break;    
				case 6:    
					printf("six");    
					break;    
				case 7:    
					printf("seven");    
	 				break;    
				case 8:    
					printf("eight");    
					break;    
				case 9:    
					printf("nine");    
					break;    	 
			}
		}
		else {
			switch( arr[1] ) {  
				case 0: 
					printf("ten");
					break;  
				case 1:    
					printf("eleven");    
					break;    
				case 2:    
					printf("twelve");    
					break;    
				case 3:    
					printf("thirteen");    
					break;    
				case 4:    
					printf("fourteen");    
					break;    
				case 5:    
					printf("fifteen");    	
					break;    
				case 6:    
					printf("sixteen");    
					break;    
				case 7:    
					printf("seventeen");    
	 				break;    
				case 8:    
					printf("eighteen");    
					break;    
				case 9:    
					printf("nineteen");    
					break;    	 
			}
		}	
	}
}

int main(int argc, char *argv[]) {
	int testcase = atoi(argv[1]);
	
	ex1(testcase);
		
	return 0;
}
