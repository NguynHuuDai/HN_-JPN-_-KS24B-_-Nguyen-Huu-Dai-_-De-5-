#include<stdio.h>
#define MAX_SIZE 100

int main(){
	
	int arr[MAX_SIZE], kichCo;
	int number;
	int n;
	int i;

    do{		
	printf("\nMENU\n");
	printf("1. Nhap so phan tu va gia tri cho mang.\n");
	printf("2. In ra cac gia tri phan tu trong mang.\n");
	printf("3. So luong cac gia tri hoan hao.\n");
	printf("4. Gia tri nho thu hai trong mang.\n");
	printf("5. Them mot phan tu vao trong mang.\n");
	printf("6. Xoa phan tu.\n");
	printf("7. Sap xep mang theo thu tu giam dan.\n");
	printf("8. Tim kiem vi tri trong mang.\n");
	printf("9. Sap xep so le dung truoc so chan dung sau.\n");
	printf("10. Dao nguoc thu tu phan tu co trong mang.\n");
	printf("11. Thoat .\n");

    printf("Vui long nhap lua chon cua ban :");
    scanf("%d", &number);
    
    switch (number){
    	case 1:
    		printf("Nhap so phan tu cua mang :");
		scanf("%d", &n);
		
		if( n > MAX_SIZE){
			printf("Gia tri ban nhap khong hop le. ");
		}else{
			for (int i = 0; i < n; i++) {
            printf("Nhap gia tri cho phan tu %d: ", i + 1);
            scanf("%d", &arr[i]);
             }
	    }
	    break;
	   
	    case 2:
		    printf("Cac phan tu trong mang la: \n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
            
	    case 6:
		{
			int viTri=0;
			printf("Vi tri phan tu ban muon xoa :");
			scanf("%d", &viTri) ;
			for(int i = viTri-1; i < kichCo; i++){
				arr[i] = arr[i+1]; 
			} 
			arr[kichCo-1] = 0; 
			 kichCo--;
			 for(int i=0; i < kichCo; i++){
      		printf("%d\n", arr[i]) ;
		 }
		 break ; 
    	}
    	case 11:
    		printf("Thoat khoi chuong trinh :");
	    
	    case 7:
    	  {
                for (int i = 0; i < n-1; i++) {
                    for (int j = i+1; j < n; j++) {
                        if (arr[i] < arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep tu lon den nho: \n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;
	    	
	
	
	
		}
	
		
			
		
		
	
	
      }while(number != 11);
  return 0;
}
