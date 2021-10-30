#include <stdio.h>

int main() {
	int distance, money;
	money = 15000;
	
	printf("Distance: ");
	scanf("%d", &d);
	
	if (distance <= 2000) 
		printf("Money: %d", money);
	else if (distance > 2000 && d <= 30000) 
		printf("Money: %d", money + (2000 / 250) * (distance - 2000));
	else if (distance > 30000) 
		printf("Money: %d", money + 28 * 8000 + 5 * (distance - 30000));
		
	return 0;
}