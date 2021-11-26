/*
2. Input n strings from keyboard and sort them ascendingly.
Ex:
 _________________________________________
| Input: n = 3, strings: "one two three"  |
| Output: "one three two"                 |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex2(int n, char *str[]){
	char temp[25];
   	for( int i = 0; i <= n; i++ ) {
    		for( int j = i + 1 ; j <= n; j++ ){
        		if( strcmp(str[i], str[j]) > 0 ){
            			strcpy(temp, str[i]);
            			strcpy(str[i], str[j]);
            			strcpy(str[j], temp);
         		}
     		}
    	}
   	
  	for(int i = 1; i <= n; i++)
    		printf("%s ", str[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	char *str[n];
	int i;
	for(i=0; i<n; i++){
		str[i] = argv[i+2];
	}

	ex2(n, str);
		
	return 0;
}
