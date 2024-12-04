#include <stdio.h>

int main()
{
	//khai bao  
	int choose;
	int rows,cols,num,check; 
	int i,j; 
    int arr[100][100];
	int core=1;
	int mang[50]; 
	// hien thi menu
	while(choose!=8){
	 
	printf("\nMENU\n");
	printf("1.Nhap kich co va gia tri cac phan tu cua mang\n");
	printf("2.In ga tri cac phan tu cua mang theo ma tran\n");
	printf("3.In ra cac phan tu nam tren duong bien va tinh tich\n");
	printf("4.In ra cac phan tu nam tren duong cheo chinh\n");
	printf("5.In ra cac phan tu nam tren duong cheo phu\n");
	printf("6.Sap xep duong cheo chinh theo thu tu tang dan\n");
	printf("7.Tim kiem 1 phan tu va in ra vi tri cua phan tu trong mang\n");
	printf("8.Thoat\n");
	printf("Moi ban nhap lua chon cua minh:");
	scanf("%d",&choose);
	switch(choose){	
		case 1:
			printf("Moi ban so hang co cho mang:");
			scanf("%d",&rows);
			printf("Moi ban so cot co cho mang:");
			scanf("%d",&cols);
			if(rows==cols){
				for(int i=0;i<rows;i++){
					for(j=0;j<cols;j++){
						printf("Moi ban nhap gia tri cho arr[%d][%d]:",i,j);
						scanf("%d",&arr[i][j]);	 
		        	}
				}
			} else {	 
			 printf("mang khong hop le");
				return 1;
			}
			break;
		case 2:
			printf("In cac phan tu cua ma tran\n");
			for(i=0;i<rows;i++){
				printf("\n"); 
				for(j=0;j<cols;j++){
				   	printf("%d ",arr[i][j]);	
				}	
			} 
		break;
		case 3:
		    printf("Cac phan tu o bien la:\n");
			for(i=0;i<rows;i++) {
				j=0; 
				printf("%d ",arr[i][j]);
				core=core*arr[i][j]; 
			}
			i=j;
			for(j=1;j<cols;j++) {
				printf("%d ",arr[i][j]);
				core=core*arr[i][j];
			}
			for(i=1;i<rows;i++){
				j=cols-1; 
				printf("%d ",arr[i][j]);
				core=core*arr[i][j];
			}
			i=j;
			for(j=1;j<cols-1;j++){
				printf("%d",arr[i][j]);
				core=core*arr[i][j];
			}
			printf("\n Tinh cac phan tu o bien la:%d",core); 
		break;
		case 4:
	    	printf("Cac phan tu nam tren duong cheo chinh la:\n");
		    for(i=0;i<rows;i++) {
			    printf("%d ",arr[i][i]); 
		    }
		break;
		case 5:
		    printf("Cac phan tu nam tren duong cheo phu la:\n");
	    	i=0;
		    for(j=cols-1;j>=0;j--) { 
    			printf("%d ",arr[i][j]);
		    	i++;
			    if(i==rows){
				break; 
			    }	 
		    }
		break;
		case 6:
		    printf("Cac phan tu nam tren duong cheo chinh truoc khi sap xep la:\n");
		    for(i=0;i<rows;i++) {
			    printf("%d ",arr[i][i]);
				mang[i]=arr[i][i];
				 
		    }
		    printf("\n");
		    for (i = 0; i < rows - 1; i++) {
                for (j = 0; j < rows - i - 1; j++) {
                    if (mang[j] > mang[j + 1]) {
                    int temp = mang[j];
                    mang[j] = mang[j + 1];
                    mang[j + 1] = temp;
				    }
	        	}
	    	}
	    	printf("Cac phan tu nam tren duong cheo chinh sau khi sap xep la:\n"); 
	    	for(i=0;i<rows;i++) {
				printf("%d ",mang[i]);
			}
		break;
		case 7:
			printf("Moi ban nhap phan tu can tim:");
			scanf("%d",&num);
			for(i=0;i<rows;i++){
				for(j=0;j<cols;j++){
					if(num==arr[i][j]){
						printf("Phan tu %d ma ban can tim o vi tri:[%d][%d]\n",num,i,j);
						check++;
					}
				}
			}
			if(check==0){
				printf("khong co phan tu ma ban can tim");		
			} 
		break;
		case 8:
		break;	
		}		
    }
        printf("thoat chuong trinh"); 
	      return 0;

 }

