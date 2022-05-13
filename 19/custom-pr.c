#include<stdio.h>
void main(){
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the number %d%d element of the matrix: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int sum = a[1][1];
    for (int j = 0; j < 1; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            sum +=a[i][j];
        }
        
    }
    printf("The sum of the left triangular matrix is %d",sum);
    

}


// #include <stdio.h>

// void main()
 
//    {
//      int i,j,arr1[50][50],sum=0,n,m=0;
	 
//        printf("\n\nFind sum of left diagonals of a matrix :\n");
//        printf("---------------------------------------\n");	 
	 
// 	 printf("Input the size of the square matrix : ");
//      scanf("%d", &n); 
//          m=n;
// 	 printf("Input elements in the first matrix :\n");
//        for(i=0;i<n;i++)
//         {
//             for(j=0;j<n;j++)
//             {
// 	           printf("element - [%d],[%d] : ",i,j);
// 	           scanf("%d",&arr1[i][j]);
//             }
//         }  
// 	 printf("The matrix is :\n");
// 	 for(i=0;i<n;i++)
// 	 {
// 	   for(j=0;j<n ;j++)
// 	     printf("% 4d",arr1[i][j]);
// 	    printf("\n");
// 	 }
// // calculate the sum of left diagonals
// 	 for(i=0;i<n;i++)
// 	 {
//            m=m-1;
// 	   for(j=0;j<n ;j++)
//             {
//               if (j==m) 
//                 {
//                   sum= sum+arr1[i][j];
//                 }
              
//             }
// 	 }
//        printf("Addition of the  left Diagonal elements is :%d\n",sum);
//     }