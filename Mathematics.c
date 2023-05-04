#include<stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define pi 3.141593
int main()
{
int choice, ans;
char answer;

void hcf(void);
void lcm (void);
float quad (float a, float b, float c, int s);
void multable (void);
void matsum(void);
void mat1 (void);
void mat2 (void);
int mat3 ();
void mat4 (void);
void transpose (void);
void pc (void);
void matdiff(void);
void trigo(void);
void traingle(void);
void square(void);
void rectangle(void);
void cylinder(void);
void cuboid(void);
void cube(void);
void sphere(void);
void cylindervol(void);
void cuboidvol(void);
void cubevol(void);
void conevol(void);
void sum(void);
void factorial(void);
void pro(void);
void quo(void);
do
{
	int ans,s;
	float x,y,a,b,c,no,ab;
	printf ("\n 1. Sum\n");
	printf ("\n 2. Factorial\n");
	printf ("\n 3. Product\n");
	printf ("\n 4. Quotient\n");
	printf ("\n 5. hcf\n");
	printf ("\n 6. lcm\n");
	printf ("\n 7. Quadratic Equation\n");
	printf ("\n 8. Multiplication Table\n");
	printf ("\n 9. Matrix Sum\n");
	printf ("\n 10. Matrix Multiplication\n");
	printf ("\n 11. Matrix Difference\n");
	printf ("\n 12. Trigonometric Value\n");
	printf ("\n 13. Transpose of Matrix\n");
	printf ("\n 14. Prime and Composite\n");
	printf ("\n 15. Area\n");
	printf ("\n 16. VOlume\n");
	scanf ("\n %d", &choice);
	switch(choice)
	{
	case 1:
	{
		sum();
		break;
	}
	case 2 :
	{
		factorial();
		break;
	}
	case 3:
	{
		pro ();
		break;
	}
	case 4:
	{
		quo ();
		break;
	}
	case 5:
	{
		hcf ();
		break;
	}
	case 6:
	{
		lcm ();
		break;
	}
	case 7:
	{
		printf ("\n Enter a,b,c\n");
        scanf ("%f%f%f",&a,&b,&c);
		x= quad(a,b,c,1);
		y= quad(a,b,c,-1);
		printf ("\n The roots are %f and %f\n",x,y);
		break;
	}
	case 8:
	{
		multable();
		break;
	}
	case 9:
	{
		matsum();
		break;
	}
	case 10:
	{
	    mat3();
	    break;
	}
		case 11:
	{
		matdiff();
		break;
		}
		case 12:
	{
	  	trigo();
		break;
		}
		case 13:
	{
	  	transpose();
		break;
		}
		case 14:
	{
	  	pc();
	  	break;
	}
	
  case 15:
{
    char mp;
    printf("\na. Area of Triangle\nb. Area of square\nc. Area of Rectangle\nd.Area of Cylinder\ne.Area of Cuboid\nf. Area of Cube \n");
    scanf(" %c", &mp);
    getchar(); 
    switch (mp)
    {
        case 'a':
        {
            traingle();
            break;
        }
        case 'b':
        {
            square();
            break;
        }
        case 'c':
        {
            rectangle();
            break;
        }
        case 'd':
        {
            cylinder();
            break;
        }
        case 'e':
        {
            cuboid();
            break;
        }
        case 'f':
        {
            cube();
            break;
        }
        default:
        {
            printf("\n Invalid Selection");
            break;
        }
    }
    break;
}

	case 16:
	{
	  	int kp;
		printf ("\n1. Volumeof Sphere\n2.Volume of Cylinder\n3.Volume of Cuboid\n4.Volume of cube\n5.Volume of cone\n");
		scanf("%d",&kp);
		switch (kp)
		{
		case 1:
	{
	  	sphere();
		break;
		}
		case 2:
	{
	  	cylindervol();
		break;
		}
		case 3:
	{
	  	cuboidvol();
		break;
		}
		case 4:
	{
	  	cubevol();
		break;
		}
		case 5:
	{
	  	conevol();
		break;
		}
		default:
	{
	  	printf ("\n invalid selection\n");
		break;
		}
		break;
		}
	}
	
}

printf("\n do you want to continue (y/n)");
scanf("\n %c",&answer);
}while(('y'==answer)||('Y'==answer));
}

void sum (void)
{ int i;
float num=0,sum=0,num1[100];
printf("\n How many number you want to enter \n");
scanf("%f",&num);
printf("\n Enter number\n");
for (i=0;i<num;i++)
{scanf("%f",&num1[i]);
}
for (i=0;i<num;i++)
{sum=sum+num1[i];
}
printf("\n Sum is= %f",sum);
}

void factorial(void)
{long int fact=1, num;
int i;
printf ("\n Enter Number\n");
scanf("%ld",&num);
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("\n Factorial is=%ld",fact);
}

void pro(void)
{
int pro=1,num,num1[100],i;
printf("\n Enter how many numbers you want to enter \n");
scanf("%d", &num);
printf("\n Enter number \n");
for(i=0;i<num;i++)
	{	
	scanf("%d",&num1[i]);
	}
for(i=0;i<num;i++)
	{
		pro= pro*num1[i];
	}
printf("\n Product is=%d", pro);
}

void hcf(void)
{int c=0,n,a,b;
printf("\n Enter a and b \n");
scanf("%d%d", &a, &b);
if(a<b)
	n=a;
	else
	n=b;
do {if( (a%n==0)&& (b%n==0))
	{c++;
	}
else
	n--;
} while(c!=1);
printf("\n The HCF is = %d",n);
}

void lcm(void)
{
	int a,b,d,e,c=0,n,l;
	printf("\n Enter and b");
	scanf("%d %d", &a,&b);
	if(a>b)	
		n=a;
	else
		n=b;
do
	{
		if((a%n==0)&&(b%n==0))
			c++;
		else
		n--;
	}while(c!=1);
d=a/n;
e=b/n;
l=n*d*e;
printf("\n %d",l);
}

float quad(float a, float b, float c, int s)
{	float x;
	x=(-b+s*sqrt(b*b-4*a*c))/(2*a);
	return(x);
}
void multable(void)
{
	int i,j,a,b;
	printf("\n Enter the number \n");
	scanf("%d",&a);
	printf("\n Enter upto which number \n");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
		{
		printf("\n %d * %d = %d", a,i,a*i);
		}
}

void matsum(void)
	{
		int num1[50][50],num2[50][50],num3[50][50],i,j,m,n;
		printf ("\n Enter Rows and Columns\n");
		scanf("%d%d",&m,&n);
		printf ("\n Enter value of x-matrix \n");
		for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
					scanf("%d",&num1[i][j]);
	        }
	    printf("\n");    
		}
	printf("\n Enter value of y-matrix\n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
					scanf("%d",&num2[i][j]);
	        }
	    printf("\n");    
		}
				for (i=0;i<m;i++)
		{
for(j = 0; j < n; j++)
{
    num3[i][j] = num1[i][j] + num2[i][j];
    printf("%d \n", num3[i][j]);
}

	    printf("\n");    
		}
	}


int mat3() {
    int m1, n1, m2, n2, i, j, k;
    printf("Enter size of first matrix (m1 x n1): ");
    scanf("%d %d", &m1, &n1);
    printf("Enter size of second matrix (m2 x n2): ");
    scanf("%d %d", &m2, &n2);

    
    if (n1 != m2) {
        printf("Error: Number of columns in the first matrix must be equal to the number of rows in the second matrix.");
        return 1;
    }

    int a[m1][n1], b[m2][n2], c[m1][n2];
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}




void pc()
{
int m, i=2,count=0;
    printf("enter a number \n");
    scanf("%d",&m);
    if(m==0 || m==1){
        printf(" \n %d is neither prime nor composite \n",m);
    }
    else{
        while (m>=i){
            if (m % i==0){
              count=count+1;  
            }
            i++;
        }
        if(count==1){
            printf("\n %d is prime",m);
        }
        else{
            printf("\n %d is composite",m);
        }
    }
}
void transpose(void)
{
	int num1[50][50],num2[50][50],i,j,m,n;
	printf("\n Enter row and column\n");
	scanf ("%d%d",&m,&n);
	printf("\n Enter a value of matrix whose transpose is to be found\n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
					scanf("%d",&num1[i][j]);
	        }
	    printf("\n");    
		}
		printf("\n Entered matrix is\n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
					printf("%d\t",num1[i][j]);
	        }
	    printf("\n");    
		}
		printf("\n Transpose of matrix is \n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				num2[i][j]=num1[j][i];
				printf("%d\t",num2[i][j]);
	        }
	    printf("\n");    
		}	
}
void matdiff(void)
{
	int num1[50][50],num2[50][50],num3[50][50],i,j,m,n;
	printf("\n Enter row and column\n");
	scanf ("%d%d",&m,&n);
	printf("\n Enter x-matrix \n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
					scanf("%d",&num1[i][j]);
	        }
	    printf("\n");    
		}
		printf("\n Enter y-matrix \n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
					scanf("%d",&num2[i][j]);
	        }
	    printf("\n");    
		}
		printf("\n x-matrix is \n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",num1[i][j]);
	        }
	    printf("\n");    
		}	
		printf("\n y-matrix is \n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",num2[i][j]);
	        }
	    printf("\n");    
		}	
		printf("\n Difference of matrix is \n");
			for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				num3[i][j]=num1[i][j]-num2[i][j];
				printf("%d\t",num3[i][j]);
	        }
	    printf("\n");    
		}	
}


void trigo(void)
{
	float i;
	float num;
	char option[20];
	printf("\n Do you want to find the trigonometric value in (degree/radian):\n");
	scanf("%s",option);
	if(strcmp(option,"radian")==0)
		{
			printf("\n Enter a number\n");
			scanf("%f",&num);
			printf("\n sin %f=%f \n",num,sin(num*(pi/180)));
			printf("\n cos %f=%f \n",num,cos(num*(pi/180)));
			printf("\n tan %f=%f \n", num, tan(num*(pi/180)));
		}
	else if(strcmp(option,"degree")==0)
		{
			printf("\n Enter a number\n");
			scanf("%f",&num);
			printf("\n sin %f=%f \n",i,sin(i));
			printf("\n cos %f=%f \n", num, cos(num));
			printf("\n tan %f=%f \n",num,cos(num));
		}
	else
	{
		printf("\n Invalid Selection \n");
	}
}

void traingle(void)
{
	float base,ht, len, area,s;
	printf("\n Enter length, breadth and height \n");
	scanf("%f %f %f",&len,&base,&ht);
	if((len==base)|| (len==ht)|| (base=ht))
	{
		s=(len+base+ht)/2;
		area= sqrt(s*(s-len)*(s-base)*(s-ht));
		printf("\n %f",area);
	}
	else if ((len==0)||(base==0)||(ht==0))
	{
		printf("\n Invalid Triangle \n");
	}
	else
	{
		area=(1/2)*base*ht;
		printf("\n %f \n",area);
	}
}

void square(void)
{
	float area,side;
	printf("\n Enter side \n");
	scanf("%f",&side);
	area= side*side;
	printf("\n Area=%f \n",area);
}

void rectangle(void)
{
	float area,length,breadth;
	printf("\n Enter length and breadth \n");
	scanf("%f%f",&length,&breadth);
	area=length*breadth;
	printf("\n Area=%f \n",area);
}

void cylinder(void)
{
	float h,r,area;
	printf("\n Enter radius and height \n");
	scanf("%f%f",&r,&h);
	area=2*pi*r*(r+h);
	printf("\n Area=%f \n",area);
}

void cuboid(void)
{
	float l,b,h,area;
	printf("\n Enter length, breadth and height\n");
	scanf("%f%f%f",&l,&b,&h);
	area=2*(l*b+b*h+h*l);
	printf("\n Area=%f",area);
}

void cube(void)
{
	float side,area;
	printf("\n Enter side \n");
	scanf("%f",&side);
	area=6*side*side;
	printf("\n Area=%f \n",area);
}

void sphere(void)
{
	float vol,r;
	printf("\n Enter radius \n");
	scanf("%f",&r);
	vol=(4/3)*pi*r*r*r;
	printf("\n Volume of sphere=%f",vol);
	
}

void cylindervol(void)
{
	float r,h,vol;
	printf("\n Enter radius, height \n");
	scanf("%f%f",&r,&h);
	vol=pi*r*r*h;
	printf("\n Volume=%f",vol);
}

void cubevol(void)
{
	float vol,l;
	printf("\n Enter side \n");
	scanf("%f",&l);
	vol=l*l*l;
	printf("\n Volume=%f \n",vol);
}

void cuboidvol(void)
{
	float l,b,h,vol;
	printf("\n Enter length, breadth, height \n");
	scanf("%f%f%f",&l,&b,&h);
	vol=l*b*h;
	printf("\n Volume of cubiod=%f",vol);
}

void conevol(void)
{
	float r,h,vol;
	printf("\n Enter radius and height \n");
	scanf("%f%f",&r,&h);
	vol=(1/3)*pi*r*r*h;
	printf("\n Volume of cone is=%f",vol);	
}

void quo(void)
{
	float num,num1;
	int q;
	printf("Enter number \n");
	scanf("%f",&num);
	printf("Enter Divident \n");
	scanf("%f",&num1);
	q=num/num1;
	printf("\n Quotient is=%d",q);
}



