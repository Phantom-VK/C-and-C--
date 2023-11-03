//code to add two matrices in cpp
#include<stdio.h>


int addMatrix(int arr[3][3], int arr2[3][3]);
int addMatrix(int arr[3][3], int arr2[3][3]){
int arr3[3][3];

   for(int i = 0; i < 3; i++){

      for(int j = 0; j < 3; j++){

         arr3[i][j] = arr[i][j] + arr2[i][j];
      }
   }

   for(int i = 0; i < 3; i++){
          printf("[");
      for(int j = 0; j < 3; j++){
        
         printf(" %d", arr3[i][j]);
         
      }
         printf("]");
         printf("\n");
   }

  

}
int main(){
  
 int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

printf("Addition of given two matrix is: \n");
 addMatrix(arr, arr2);

return 0;
 
}