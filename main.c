#include <stdio.h>

void main(){
	char lastdigit[3] = "237";
	printf("%s \n", lastdigit);
	
	int i;
	for(i=0;i<3;i++){
		angka(lastdigit[i]);
	}
}

// perulangan, fungsi dan parameter
void angka(char angka){
	// buat angka 237
    int i, j, rows=5, cols=9;
	if(angka == '2'){
		// angka 2
		for(i=1; i<=rows; i++)
		{
			if(i == 1){
				for(j=1; j<=cols; j++) {
					if(j > 1 && j % 2 != 0){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else if(i == 2){
				for(j=1; j<=cols; j++) {
					if(j == 9 || j == 1){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else if(i == 3){
				for(j=1; j<=cols; j++) {
					if(j > 4 && j < 8 && j % 2 != 0){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else if(i == 4){
				for(j=1; j<=cols; j++) {
					if(j == 3){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else {
				for(j=1; j<=cols; j++) {
					if(j % 2 != 0) {
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			}
			printf("\n");
		}
	} else if (angka == '3'){
		// angka 3
		for(i=1; i<=rows; i++)
		{
			if(i == 1){
				for(j=1; j<=cols; j++) {
					if(j < 9 && j % 2 != 0){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else if(i == 2){
				for(j=1; j<=cols; j++) {
					if(j > 8){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else if(i == 3){
				for(j=1; j<=cols; j++) {
					if(j > 1 && j < 9 && j % 2 != 0){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else if(i == 4){
				for(j=1; j<=cols; j++) {
					if(j > 8){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else {
				for(j=1; j<=cols; j++) {
					if(j < 9 && j % 2 != 0){
						printf("*");
					} else {
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	} else if(angka == '7'){
		// angka 7
		for(i=1; i<=rows; i++)
		{
			if(i == 1){
				for(j=1; j<=cols; j++) {
					if(j % 2 != 0){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			} else {
				for(j=1; j<=cols; j++) {
					if(j > 8){
						printf("*");
					} else {
						printf(" ");
					}
					
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}