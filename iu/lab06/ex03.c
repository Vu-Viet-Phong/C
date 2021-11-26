/*
3. Input a string and find the smallest and largest word.
Ex:
 __________________________________________________________
| Input: "this is a string with smallest and largest word" |
| Output: "a" "smallest"                                   |
|__________________________________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ex3(char *str){
	int i, j, k, a, minString, maxString , max, min;
	char substr[100][100];
	
	while( str[k] != '\0' ) {
        j = 0;
        while( str[k] !=' '&&str[k] != '\0' ) {
            substr[i][j] = str[k];
            k++;
            j++;
        }
        substr[i][j] = '\0';
        	i++;
        if( str[k] != '\0' ) {
            k++;
        }        
    }
    
	int len = i;
    max = strlen( substr[0] );
    min = strlen( substr[0] );
    
	for( i = 0; i < len; i++ ) {
    	a = strlen( substr[i] );
    	if( a > max ) {
			max = a;
			maxString = i;
		}
    	if( a < min ) {
    		min = a; 
			minString = i;   
		}
    }    
 	printf( "%s %s\n", substr[minString], substr[maxString] );
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *str = "This is a string";

	ex3(str);
		
	return 0;
}
