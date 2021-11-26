#include <stdio.h>

int inputArray(int a[], int n);
int sort(int a[], int n);
int mean(int a[], int n);

int ex02(int str[]){
	int n, t;
	printf("target = ");
	scanf("%d", &n);
	
	for(int i = 0; str[i] != '\0'; i++) {
		for(int j = 1; str[j] != '\0'; j++) {
			t = str[i] + str[j];
			if(t == n) printf("[%d %d]\n", str[i], str[j]);		
		}		
	}	
}

int ex03(void){
	int b = 100;
	int a[b], a1[b], a2[b];
	int n, n1 ,n2;
	printf("N1 : ");
	scanf("%d", &n1);
	inputArray(a1, n1);
	
	printf("N2 : ");
	scanf("%d", &n2);
	inputArray(a2, n2);
	
	n = n1 + n2; 
 	for ( int i = 0 ; i < n ; i++ ) {
   		if( i < n1 ) a[i] = a1[i];
   		else a[i] = a2[i - n1];		
	}
	
	sort(a, n);
	mean(a, n);	
}

int main() {
	int d = 100;
	int a[ d ];
	int n;
	printf("N : ");
	scanf("%d", &n);
	
	inputArray(a, n);
	ex02( a );
	
	ex03();
	
	return 0;
}

int inputArray(int a[], int n) {		// Function to input the array
	for (int i = 0; i < n; i++){ 
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

int sort(int a[], int n) {		
	int i, j, temp = 0;
	
	for(i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {            
            if(a[i] < a[j]) {
               	temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }             
   		}
	}
	
}

int mean(int a[], int n){
	if( n % 2 ) printf("Mean : %d", a[n/2]);
	else printf("Mean : %d", ( a[ n / 2 ] + a[ n / 2 - 1 ] ) / 2 );
	
}
