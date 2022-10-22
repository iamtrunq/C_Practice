#include <stdio.h>

int dieukien(int ngay, int thang, int nam)
{
    if (ngay < 1 || ngay > 31){
        printf("Khong ton tai ngay: %d\n",ngay);
        return 0;
    }else if (thang < 0 || thang > 12){
        printf("Khong ton tai thang: %d\n",thang);
        return 0;
    }else if (nam > 2022 ){
        printf("Hien tai moi den nam 2022");
        return 0;
    }else{
        return 1;
    }
}
void TinhTuoi(int x, int y, int z){
    int tuoi;
    tuoi = 2022 - z;
    if( y > 10 ){
        tuoi= tuoi - 1;
	}else{
		tuoi = tuoi;
	}
    printf("So tuoi cua ban la : %d",tuoi);
    
}
int main(){
    int ngay, thang, nam ;
    int tuoi;
    do
    {
        printf("Nhap vao ngay sinh cua ban: "); scanf("%d",&ngay);
        printf("Nhap vao thang sinh cua ban: "); scanf("%d",&thang);
        printf("Nhap vao nam sinh cua ban: "); scanf("%d",&nam);
        
    } while (dieukien(ngay,thang,nam) == 0);
    printf ("Ngay thang nam sinh cua ban la : %d - %d - %d\n", ngay, thang, nam);
    TinhTuoi(ngay,thang,nam);
    return 0;
    
}
