#include<stdio.h>
int main(){
    int A[2][2],B[2][2],C[2][2],i,j,k;
    for(i=0; i<2 ; i++)
    {
        for(j=0; j<2;j++)
        {
            printf("Enter the elements of A=");
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0; i<2 ; i++)
    {
        for(j=0; j<2;j++)
        {
            printf("Enter the elements of B=");
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0; i<2 ; i++)
    {
        for(j=0; j<2;j++)
        
        {
            C[i][j]=0;
            for(k=0;k<2;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("\n The numbers of A:");
    for(i=0; i<2 ; i++)
    {
        for(j=0; j<2;j++)
        {
            
            printf("%d ", A[i][j]);
        }
    }
    printf("\n The numbers of B:");
    for(i=0; i<2 ; i++)
    {
        for(j=0; j<2;j++)
        {
             
            printf("%d ", B[i][j]);
        }
    }
    printf("\n THe product of A and B :");
    for(i=0; i<2 ; i++)
    {
        for(j=0; j<2;j++)
        {
             
            printf("%d  ", C[i][j]);
        }
    }

  
return 0;

}
