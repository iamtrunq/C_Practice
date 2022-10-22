#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum{
	VO_DO,  //6 do -> 3 doi
	VO_VANG, // 7 vang-> 3 doi
	VO_XANH,  // 9 xanh-> 4 doi
}VO;

// Thung chua ngau nhien so vo do vang xanh, dem xem co bao nhieu vo cung mau
typedef struct{
	VO *ptr;
	int size;
	int SL_DO ;
	int SL_VANG ;
	int SL_XANH ;
}TypeBox;

void NhapDuLieu(TypeBox *value){

	printf("So luong vo can nhap:\n");
	
	scanf("%d",&(value->size));
	
	char arr[7];
		
	value->ptr=(VO*)malloc(value->size*sizeof(VO));
	
	
	for(int i = 0 ; i < value->size; i++){
		start : 
		printf("Nhap mau vo:\n");
		scanf("%s",&arr);
		
		if(strcmp(arr,"VO_DO")==0){
			value->ptr[i]=VO_DO;
			value->SL_DO++;
		}else if(strcmp(arr,"VO_VANG")==0){
			value->ptr[i]=VO_VANG;
			value->SL_VANG++;
		}else if(strcmp(arr,"VO_XANH")==0){
			value->ptr[i]=VO_XANH;
			value->SL_XANH++;
		}else{
			printf("Nhap sai dinh dang");
			goto start;
		}
	}	
	
	printf(" TONG HOP SO LIEU\n");
	
	printf("So luong vo DO la:%d\n",value->SL_DO);
	
	printf("So luong vo VANG la:%d\n",value->SL_VANG);
	
	printf("So luong vo XANH la:%d\n",value->SL_XANH);
	
	printf("So doi vo mau DO la: %d\n",value->SL_DO/2);

	printf("So doi vo mau VANG la: %d\n",value->SL_VANG/2);

	printf("So doi vo mau XANH la: %d",value->SL_XANH/2);
}
int main(){
	TypeBox value;
	
	NhapDuLieu(&value);
		
	return 0;
}
