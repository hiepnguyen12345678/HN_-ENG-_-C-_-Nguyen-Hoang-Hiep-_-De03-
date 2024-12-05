#include<stdio.h>

int main(){
	
	int n;
	int arr[];
	while(1){
		printf("|nMenu|n");
		printf("1.Nhap so phan tu va bang gia tri cho mang\n");
		printf("2.In ra gia tri phan tu trong mang theo dang\n");
		printf("3.Dem so luong cac nguyen to trong mang \n");
		printf("4.Tim gia tri nho thu hai trong mang\n")
		printf("5.Them mot phan tu vao vi tri ngau nhien trong mang , phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao\n");
		printf("6.Xoa phan tu tai mot vi tri cu the \n");
		printf("7.Sap xep mang theo thu tu giam dan\n ");
		printf("8.Cho nguoi dung nhap vao mot phan tu ,tim kiem xem phan tu do co ton tai trong mang hay khong\n");
		printf("9.Xoa toan bo phan tu trung lap trong mang va hien thi phan tu doc nhat co o trong mang\n");
		printf("10.Dao nguoc cac phan tu co trong mang\n");
		printf("11.Thoat\n")
		scanf("%d",&choice);
		
		if(choice==11){
			printf("Ket thuc chuong trinh");
			break;
		}
		switch(choice);
		     case 1 : 
		     printf("Moi nhap so phan tu va bang gia tri cho mang");
		     scanf("%d",&n);
		     for(int i = 0; i < gioihan; i++ ){
		     	 printf("So phan tu cua ban la:\n")
		            scanf("%d",&arr[i]);
			 }
		     break;        
		     case 2 :
			 printf("Cac gia tri phan tu trong mang");
			 for(int i = 0; i < gioihan; i++){
			 	printf("%2d",arr[i]);
			 	printf("\n");
			 }
			break; 
			case 3:
				printf("Cac phan tu la so nguyen to: ");
				currentLenght = n;
            for (int i = 0; i < currentLenght; ++i){
                int prime = 0;
                for (int j = 2; j * j <= arr[i]; ++j){
                    if (arr[i] % j == 0)
                        prime = 1;
                }
                if (!prime && arr[i] > 1){
                    printf("%d ", arr[i]);
                }
            }
				break;
			case 4:

				break;
			case 5:
				int newValue;
				int position;
				printf("Nhap phan tu muon them vao: ");
				scanf("%d", &newValue);
				printf("Nhap vi tri muon them (0 - %d): ", n - 1);
				scanf("%d", &position);
				if(position<0||position >= n){
					printf("Vi tri khong hop le");
				}
				break;
			case 6 :
				
				
				
					
	}
	
	 return 0 ;
}
