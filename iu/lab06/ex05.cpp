/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: "valid"        |
| Input: "{[)}"          |
| Output: "invalid"      |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex5(char *testcase){
	//your codes here
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase1="[{()}]";
    char *testcase2="([)]";

	ex5(testcase1);
    ex5(testcase2);
		
	return 0;
}
