//C Program to add two polynomial using Arrays
// Here array index is considered as exponent of a term and data stored in respective array index as the coefficient
/*
Program written by Aromal S
S3D CSE
CHN19CS027 
*/
#include<stdio.h>
#include<stdlib.h>

#define MAXD 10

void readPolynomial(float p[],int d);
void printPolynomial(float p[],int d);
int addPolynomial(float p1[],float p2[], float p3[], int d1, int d2);


//Function to read Polynomial
void readPolynomial(float p[],int d)
{
    int i;
    for ( i = d; i >= 0; i--)
    {
        printf("Enter Coeff. of x^%d : \n",i);
        scanf("%f",&p[i]);
    }
    
}

//Function to print Polynomial
void printPolynomial(float p[],int d)
{
    int i;
    for ( i = d; i >=0 ; i--)
    {
       if (p[i]!=0)
        {
            if (i==d)
            {
                printf("%.1fx^%d",p[i],i);
            }
            else if (i==1)
            {
                printf(" +%.1fx",p[i]);
            }
            else if (i==0)
            {
                printf("+ %.1f",p[i]);
            }
            else
            {
                printf(" +%.1fx^%d",p[i],i);
            }
            
            
           
        }

        
    }
    
}

//Function to add two polynomials
int addPolynomial(float p1[],float p2[], float p3[], int d1, int d2)
{
    int i,d3;
    d3=d1>d2?d1:d2;
    for ( i = 0; i <= d3; i++)
    {
        p3[i]=p1[i]+p2[i];
    }
    

}

void main()
{
    float pol1[MAXD+1]={0.0},pol2[MAXD+1]={0.0},pol3[MAXD+1]={0.0};//initializing indices of floating point arrays to store polynomials
    int d1,d2,d3;
    printf("\nEnter Degree Of First Polynomial :-");
    scanf("%d",&d1);
    printf("\nEnter Degree Of Second Polynomial :-");
    scanf("%d",&d2);

    //Checking whether the entered degree is non negative and within memory constraints
    if (d1<1 ||d2<1||d1>MAXD||d2>MAXD)
    {                   
        printf("\nInvalid Input - Please Check Your Entry");
        
        exit(0);
    }

    printf("\nEnter Coefficients of First Polynomial\n");
    readPolynomial(pol1,d1);
    printf("\nEntered polynomial is ");
    printPolynomial(pol1,d1);
    printf("\nEnter Coefficients of Second Polynomial\n");
    readPolynomial(pol2,d2);
    printf("\nEntered polynomial is ");
    printPolynomial(pol2,d2);
    
    d3=addPolynomial(pol1,pol2,pol3,d1,d2);

    printf("\nPolynomial 1 + Polynomial 2 = ");
    printPolynomial(pol3,d3);
    


}
