#include <stdio.h>
#include <stdlib.h>

void XuLy( int *value){
	
	int *even=(int*)malloc(5*sizeof(int));
	// xu ly mang chan
	for(int i = 0; i < 10 ; i ++){
		if(value[i] %2 == 0){
			even[i/2]=value[i];
		}
	}
	
	int *odd=(int*)malloc(5*sizeof(int));
	// xu ly mang le
	for(int i = 0; i < 10 ; i ++){
		if(value[i] %2 != 0){
			odd[i/2]=value[i];
		}
	}
	
	printf("Mang le:\n");
	for (int i =0; i <5; i++){
		printf("%d\n",odd[i]);
	} 
	printf("Mang chan:\n");
	for (int i =0; i <5; i++){
		printf("%d\n",even[i]);
	} 
}

int main(){
	int *ptr=(int*)malloc(10*sizeof(int));
	for(int i=0; i < 10; i++){
		ptr[i]=i;
	}
	XuLy(ptr);
	return 0;
	
}
