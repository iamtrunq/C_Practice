#include <stdio.h>
#include <stdlib.h>

typedef struct {
	
	int *data;
	int size;
}Arr;

void NhapDuLieu(Arr *value){

	printf("Nhap so phan tu cua mang:\n");
	
	scanf("%d",&(value->size));
		
	value->data=(int*)malloc(value->size*sizeof(int));
	
	for(int i = 0 ; i < value->size; i++){
		printf("Nhap gia tri phan tu thu %d cua mang:\n",i);
		scanf("%d",&(value->data[i]));
	}
}
void Max(Arr *value){
	int max = value->data[0];
	for (int i = 0; i < value->size ; i ++){
		if( value->data[0]< value->data[i]){
			max=value->data[i];
		}
	}
	printf("Gia tri lon nhat trong mang la %d: ",max);
}
void MaxtoMin(Arr *value){
	for(int i =0; i < value->size; i++){
		for(int j = i+ 1; j < value->size;j++){
			if(value->data[i]<value->data[j]){
				int temp = value->data[j];
				value->data[j]=value->data[i];
				value->data[i]= temp;
			}
		}
	}
	printf("Mang sau khi sap xep tu lon den be la : \n");
	
	for(int i =0; i < value->size ; i++){
		printf("%d\n",value->data[i]);	
		}
}
void MintoMax(Arr *value){
	for(int i =0; i < value->size; i++){
		for(int j = i+ 1; j < value->size;j++){
			if(value->data[i]>value->data[j]){
				int temp = value->data[j];
				value->data[j]=value->data[i];
				value->data[i]= temp;
			}
		}
	}
	printf("Mang sau khi sap xep tu be den lon la : \n");
	
	for(int i =0; i < value->size ; i++){
		printf("%d\n",value->data[i]);	
		}
}
int main(){
	Arr x;
	int option;
	
	NhapDuLieu(&x);
	printf("Nhap option\n");
	printf("1:Max to Min\n2:Min to Max\n3:Max\n4:Exit\n");
	scanf("%d",&option);
	switch(option){
		case 1 :
			MaxtoMin(&x);
			break;
		case 2 :
			MintoMax(&x);
			break;
		case 3 :
			Max(&x);
			break;
		case 4 : 
			exit(0);
		default:
			printf("Vui long nhap dung dinh dang <3");	
	}
	return 0;
}
