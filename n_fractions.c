//WAP to find the sum of n fractions.
#include<stdio.h>

struct frac
{
	int n;
	int d;
};


int ask_n()
{
	int n1;
	printf("Enter the no of fractions:");
	scanf("%d",&n1);
    return n1;
}


void ask_value(struct frac a[],int no)
{
	
	for(int i =0;i<no;i++)
	{
		printf("enter the fraction :");
		scanf("%d %d",&a[i].n,&a[i].d);
    }
}

int gcd(int x,int y)
{
	int max,max1;
	if (x==y)         
	max1 = y;

 	else if(y<x)
	max=x;

	else 
	max= y;
	
    for(int i = max;i>=1;i--) 
    {
    	if(x%i==0 && y%i==0)
    	{
    		max1 = i;
    		break;
        }
    }

    return (max1);  
}

struct frac simp(struct frac fin,int c)
{
	fin.n = fin.n/c;
	fin.d = fin.d/c;
	return fin; 
}

struct frac cal(struct frac a[],int no) 
{
	struct frac sum1;
    sum1.n=a[0].n;sum1.d=a[0].d;
    int ma;		
	for(int i =1;i<no;i++)
	{	
		sum1.n = (sum1.n *a[i].d)+(a[i].n*sum1.d);	 
		sum1.d = (sum1.d*a[i].d);
    } 	
    ma = gcd(sum1.n,sum1.d);  
    return simp(sum1,ma);

}


void show(struct frac addi,struct frac a[],int no)
{
    printf("sum of fractions:\n");
    for(int i =0;i<no-1;i++)
    { 
    	printf(" %d/%d +",a[i].n,a[i].d);
    }
    printf(" %d/%d ",a[no-1].n,a[no-1].d);
    printf("= %d/%d",addi.n,addi.d);
}


int main()
{
    struct frac addi;  
    int no=ask_n(); 	
    struct frac a[no];	 
    ask_value(a,no); 
    addi = cal(a,no);  	
    show(addi,a,no);
    return 0;
}

