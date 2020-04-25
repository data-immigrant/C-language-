#include <stdio.h>
#include <stdlib.h>


void printArray(int *ar, int size){
	int i;
	printf("Element of the array: ");
	for (i=0;i<size;i++){
		printf("%d ", ar[i]);
	}

void getMinMax(int *ar, int size, int *minP, int *maxP){
	int i;
	*maxP=ar[0];
	*minP=ar[0];
	for (i=1;i<size;i++){
		if (ar[i]>*maxP) *maxP=ar[i];
		if (ar[i]<*minP) *minP=ar[i];
	}
}

int main(int argc, char *argv[]) {
	int ar[10];
	int sum, min, max;
	float avg;

}
	getMinMax(ar, 10, &min, &max);
	printArray(ar, 10);

	printf("\nSum: %d\nAvg: %f", sum, avg);
	printf("\nMin: %d\nMax: %d", min, max);

	return 0;
}
