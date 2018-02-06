/*
SWAGAT PANDA---1541012353--CSE-B
ANURAG DHANUKA---1541012312--CSE-E
number theory*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int info;
	struct node *link;
};
struct nodea
{
	struct nodea *prev;
	int rem;
	int no;
	struct nodea *link;
};
void ppt();
int gcd(int,int);
void congruence();
void format_little_thr();
void euler_formula();
int pha(int);
void kth_root();
void prime_nos();
void mesenne_fermat_prime();
int succesive(int,int,int);
void Gauss_U_value();
int isprime(int);
void prime_sum_of_sqaures();
void quadratic();
void legendre_symbol();
main()
{
	printf("DONE BY:-SWAGAT PANDA(CSE-B)(1541012353) AND ANURAG DHANUKA(CSE-E)(1541012312) \n\n");
	int ch;
	int p,a,b,g;
	while(1)
	{
		printf("\n[0-TO QUIT THE PROGRAM]\n[1-to find a pythogorian triples]\n[2-to find the gcd of any 2 numbers using euclids algorithim]\n[3-cogruences]\n[4-formats little theorem]\n[5-to find the value of pha]\n");
		printf("[6-euler's formula]\n");
		printf("[7-compute kth roots modulo m]\n[8-succesive squaring]\n");
		printf("[9-Gauss-U-value]\n[10-Prime Numbers]\n[11-Mersenne primes and fermat's prime]\n");
		printf("[12-To write a prime as sum of two squares]\n[13-To find Quadratic residue and Quadratic non-residue  modulo p]\n");
		printf("[14-legendre symbol of a modulo p]\n");
		printf("ENTER THE CHOICE:>");
		scanf("%d",&ch);
		if(ch==0)
		break;
		else if(ch==1)
		ppt();
		else if(ch==2)
		{
			printf("enter the two numbers to find out the gcd");
	        scanf("%d%d",&a,&b);
	        g=gcd(a,b);
	        printf("HENCE THE GCD IS :> %d\n",g);

		}

		else if(ch==3)
		congruence();
		else if(ch==4)
		format_little_thr();
		else if(ch==5)
		{
			printf("\n enter the number:>");
			scanf("%d",&a);
			p=pha(a);
			printf("\nhence pha of %d is %d \n",a,p);

		 }
		 else if(ch==6)
		  euler_formula();
		  else if(ch==7)
		   kth_root();
		   else if(ch==8)
		   {
		   	int a,m,k,ans;
		   	printf("\nPOWRER MODUYLO M & SUCCESIVE SQUARING...\n");
             printf("we have to evaluate a^k mod m \n");
             //printf("\n\nenter a,k,m");
             //scanf("%d%d%d",&a,&k,&m);
             printf("enter the value of a=>");
             scanf("%d",&a);
             printf("enter the value of k=>");
             scanf("%d",&k);
             printf("enter the value of m=>");
             scanf("%d",&m);
             ans=succesive(a,k,m);
             printf("\n hence the result is==>");
             printf("\n%d^%d mod %d=%d mod %d\n",a,k,m,ans,m);
			 }
		else if(ch==9)
		{
			Gauss_U_value();
		}
		else if(ch==10)
		{
			prime_nos();
		}
		else if(ch==11)
		{
			mesenne_fermat_prime();
		}
		else if(ch==12)
		{
			prime_sum_of_sqaures();
		}
		else if(ch==13)
		{
			quadratic();	
		}
		else if(ch==14)
		{
			legendre_symbol();
		}

	}
}
void ppt()
{
	int s,t;
	printf("enter the 2 odd numbers or 2 even numbers:>");
	scanf("%d%d",&s,&t);
	int a,b,c;
	a=s*t;
	b=pow(s,2)-pow(t,2);
	b=b/2;
	c=pow(s,2)+pow(t,2);
	c=c/2;
	printf("\na=%d,b=%d,c=%d\n",a,b,c);
	a=pow(a,2);
	b=pow(b,2);
	c=pow(c,2);
	a=a+b;
	if(a==c)
	printf("valid ppt\n");
	else
	printf("sorry!!!!invalid you have entered a even number or a odd number\n");
}
int gcd(int a,int b)
{
		int x,y,d,r;
	//printf("enter the two numbers to find out the gcd");
	//scanf("%d%d",&a,&b);
	d=1;
	r=1;
	if(a==0&&b==00)
	{
		r=0;
	}
	else if(a==0)
	{
		r=b;
	}
	else if(b==0)
	{
		r=a;

	}
	else
	{
		if (a>b)
		{
			x=a;
			y=b;
		}
		else
		{
			x=b;
			y=a;
		}
		while(d>0)
		{
			r=d;
			d=x%y;
			x=y;
			y=d;
		}
	}
	//printf("HENCE THE GCD IS :> %d\n",r);
	return r;
}
void congruence()
{
	int ch;
	printf("\nenter the type of choice do u want i.e the types of congruences\n");
	printf("[1-AX=B MOD M TYPES]\n");
	printf("2-a1x^4+ax^3+bX^2+cX+d= 0 MOD m\n");
	printf("\n ENTER THE CHOICE:>");
	scanf("%d",&ch);
	int a,b,m,g;
	if (ch==1)
	{
		printf("\nenter the value a of 'A'\n");
		scanf("%d",&a);
		printf("\n enter the value of'b'\n");
		scanf("%d",&b);
		printf("\nenter the value of 'm'\n");
		scanf("%d",&m);
		g=gcd(a,m);
		int r;
		r=1;
		if(b%g==0)
		{
			printf("\n solution exist\n");
		}
		else
		{
			printf("\n solution does not exist\n");
			r=0;

		}


		if(r==1)
	{

		int i,j,x,u,v;
		for(i=0;i<a;i++)
		 {
		 	for(j=0;j<a;j++)
		 	{
		 		x=a*i-m*j;
		 		if(x==g)
		 		{
		 			u=i;
		 			v=j;
		 			break;
				 }
			 }
			 if(x==g)
			 break;

		 }
		 int y,c;
		 x=(b*u)/g;
		 printf("\nhence one solution is:<> %d\n",x);
		 printf("\n DO YOU WANT MORE SULUTIONS[1-YES/0-NO]");
		 scanf("%d",&c);
		 if (c==1)
		 {
		 	for(i=0;i<g;i++)
		 	{
		 		y=x+i*(m/g);
		 		printf("\n%d\n",y);
			 }
		 }
	}
	}
	else if(ch==2)
	{
		int a[5],m,i;
		printf("\nenter the co-efficents\n");
		for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\nenter the value of m\n");
		scanf("%d",&m);
		int c,x;
		c=0;
		printf("\n hence the solutions are:>\n");
		for(i=0;i<m*50;i++)
		{
			x=((a[0]*pow(i,4))+(a[1]*pow(i,3))+(a[2]*pow(i,2))+(a[3]*pow(i,1))+a[4] );
			x=x/m;
			if(x==0)
			{
				printf("\n%d\n",i);
				c=c+1;
			}
	   }
	   if(c==0)
	   {
	   	printf("\n sorry!!!!!the solution doesnot lies in the range of 0 to 50*%d\n",m);
	   }
	}

}
void 	format_little_thr()
{
	int p;
	printf("\n THE  EQUATION IN THE FORMAT AS A^(P-1)=1 MOD p)\n");
	printf("\n The equation can be entered in the format a^n=? mod p\n");
	printf("\n enter the value of p \n");
	scanf("%d",&p);
	int a,b,c,n,d,e;
	printf("\n enter the value of A\n");
	scanf("%d",&a);
	printf("\n enter the value of n \n");
	scanf("%d",&n);
	b=p-1;
	c=n/b;
	e=n-(b*c);
	d=pow(a,e);
	d=d%p;
	printf("\n Hence the value we get as %d^%d=%d MOD %d\n",a,n,d,p);
}
int pha(int n)
{
int i,x,m;
double y;
m=n;
x=sqrt(n);
double a[x];
for( i=0;i<x;i++)
{
	a[i]=0;

}
while (n%2 == 0)
    {
    	a[0]=2;
        n = n/2;

    }
int j=1;
    for (i = 3; i <=x; i = i+2)
    {

        while (n%i == 0)
        {

            n = n/i;
            a[j]=i;
        }
        j=j+1;

    }
        y=1;
        if (n > 2)
        a[j+1]=n;

        for(i=0;i<x;i++)
        {
           if(a[i]>0)
		   {
		   	 y=y*(1-(1/a[i]));
		    }
		}
    y=y*m;
    return y;

}

void euler_formula()
{
	printf("\nTHE EQUATION IS IN THE FORM OF A^PHA(M)=1 MOD M\n");
	printf("\n Hence we can get a solution to some equation i.e\n");
	printf("\n A^N=? MOD M\n");
	int a,n,m;
	printf("enter the value of 'A':>");
	scanf("%d",&a);
	printf("enter the value of 'N'");
	scanf("%d",&n);
	printf("enter the value of 'M'");
	scanf("%d",&m);
	int p;
	p=pha(m);
	int q,r,s,t;
	q=n/p;
	r=n-(q*p);
	s=pow(a,r);
	t=s%m;
	printf("\n HENCE THE SOLUTION IS IN THE FORM OF %d^%d=%d MOD %d",a,p,t,m);

}
void kth_root()
{
	printf("\n enter the congruence in the form of x^k=b mod m");
	int x,k,b,m;
	printf("\n hence x is the unknown\n");
	//printf("\nenter the value of x>");
	//scanf("%d",&x);
	printf("\nenter the value of k>");
	scanf("%d",&k);
	printf("\nenter the value of b>");
	scanf("%d",&b);
	printf("\nenter the value of m>");
	scanf("%d",&m);
	int a;
	a=pha(m);
	int i,j;
	int u,v;
	for(i=0;i<a*100;i++)
	{
		for(j=0;j<a*100;j++)
		{
			if((k*i-a*j)==1)
			{
				u=i;
				v=j;
				break;
			}
		}
		if((k*i-a*j)==1)
			{
				break;
			}
	}
	if((k*u-a*v)==1)

			{
				printf("SOLUTION EXIST U=%d,v=%d",u,v);
			}
			else
			{
				printf("!!!!sorry can't find the solution");
			}

			x=succesive(b,u,m);
		printf("\n hence the congruence become %d^%d=%d mod %d\n\n",x,k,b,m);
}
int succesive(int a,int k,int m)
{
         struct nodea *starta,*enda,*ptra,*ptraa;
//	int choice,c;
	starta=(struct nodea *)malloc(sizeof(struct nodea));
	enda=starta;
	ptra=starta;
	ptraa=starta;
	int h=2,te,tem;
	te=a%m;
	ptra->no=1;
	ptra->rem=te;
	ptra->prev=NULL;
	ptra->link=NULL;
	while(h<=k)
	{
		tem=te*te;
		tem=tem%m;
		ptra->link=(struct nodea *)malloc(sizeof(struct nodea));
		ptraa=ptra;
		ptra=ptra->link;
		ptra->prev=ptraa;
		ptra->link=NULL;
		enda=ptra;
		ptra->no=h;
		ptra->rem=tem;
		h=h*2;
		te=tem;
	}
		ptra=starta;
/*	while(ptra!=NULL)
	{
		printf("\n %d^%d=%d mod %d\n",a,ptra->no,ptra->rem,m);
		ptra=ptra->link;
	}*/
	long num, decimal_num, remainder, base = 1,binary = 0, no_of_1s = 0;
     struct node *start,*end,*ptr,*ptrb;
//	int choice,c;
	start=(struct node *)malloc(sizeof(struct node));
	end=start;
	ptr=start;
	ptr->prev=NULL;
	ptr->link=NULL;
	ptrb=start;
    //printf("Enter a decimal integer \n");
   // scanf("%ld", &num);
   num=k;
    decimal_num = num;
    while (num > 0)
    {
        remainder = num % 2;
        /*  To count no.of 1s */
        if (remainder == 1)
        {
            no_of_1s++;
        }
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    long bin=binary;
    int f;
    while(binary>0)
    {
    	f=binary%10;
    	ptr->info=f;
    	ptr->link=(struct node*)malloc(sizeof(struct node));
    	ptrb=ptr;
    	ptr=ptr->link;
    	ptr->prev=ptrb;
    	ptr->info=0;
    	ptr->link=NULL;
    	end=ptr;
    	binary=binary/10;

   	}
	end=end->prev;
	free(ptr);
	ptr=start;
	int c=0;
	ptr=start;
	while(ptr->link!=NULL)
	{
		c++;
		ptr=ptr->link;
	}
	//printf("count=%d\n",c);
	int s[c],i=0;
	long t;
		ptr=start;
		while(ptr!=NULL)
	{
	//	printf("%d",ptr->info);
		t=ptr->info;
		t=t*pow(2,i);

		s[i]=t;
		ptr=ptr->link;
		i=i+1;
	}
/*	printf("\n");
	for(i=0;i<c;i++)
	printf("%d\t",s[i]);
*/
struct node *startc,*endc,*ptrc,*ptrcc;
//	int choice,c;
	startc=(struct node *)malloc(sizeof(struct node));
	endc=startc;
	ptrc=startc;
	ptrc->prev=NULL;
	ptrc->link=NULL;
	ptrcc=start;
	for(i=c-1;i>=0;i--)
	{
		if(s[i]!=0)
		{
			ptrc->info=s[i];
			ptrc->link=(struct node *)malloc(sizeof(struct node));
			ptrcc=ptrc;
			ptrc=ptrc->link;
			ptrc->prev=ptrcc;
			endc=ptrc;
		}
	}
     endc=endc->prev;
	  free(ptrc);
	 int su;
	 su=1;
	ptrc=startc;
	while(ptrc->link!=NULL)
	{
		//printf("%d\t",ptrc->info);

	     ptra=starta;
		 while(ptra!=NULL)
	    {
		//printf("no=%d\trem=%d\n",ptra->no,ptra->rem);
		if(ptrc->info==ptra->no)
		{
			break;
		}
		ptra=ptra->link;
	    }
		//printf("\n%d",ptra->rem);
		su=su*ptra->rem;
		su=su%m;
		ptrc=ptrc->link;
	}
	//printf("\n\n%d",su);
	return su;
}
void Gauss_U_value()
{
    int a,p,l;
    printf("\n  we have to calculate Gauss U value denoted by U(a,p)\n");
    printf("\n  enter the value of a and p\n");
    printf("\n  enter a-->");
    scanf("%d",&a);
    printf("\n  enter p-->");
    scanf("%d",&p);
    l=(p-1)/2;
    int i,z[l],t,x=0;
    for(i=0;i<l;i++)
        z[i]=(i+1)*a;

    for(i=0;i<l;i++)
    {
        t=z[i]%p;
        if(t>l || t<(-1*l))
            t=t-p;

        if(t<0)
            x++;
    }
    printf("\nU(%d,%d)=%d\n",a,p,x);

}


void mesenne_fermat_prime()
{
int i,p,q,a;
int ch1=1;
while(ch1 !=0)
{
printf("\nMENU");
printf("\n1.Mersenne prime \n2.fermmat's prime \nEnter ur choice-->");
scanf("%d",&i);
if(i==1)
{
    printf("\nMersenne prime are primes of the form ((2^p)-1).");
    printf("\nenter the value for which u want to check the value generated is mersenne prime or not-->");
    scanf("%d",&p);
    q=(int)(pow(2,p)-1);
    a=isprime(q);
    if(a==1)
        printf("\nfor p=%d ,the value is %d ,which is a Mersenne prime\n",p,q);
    else
        printf("\nfor p=%d ,the value is %d ,which is  not a Mersenne prime\n",p,q);

}
else if(i==2)
{
   printf("\nFermat prime are primes of the form ((2^(2^k))+1).");
    printf("\nenter the value for which u want to check the value generated is Fermat prime or not-->");
    scanf("%d",&p);
    q=(int)(pow(2,p));
    q=(int)(pow(2,q)+1);
    a=isprime(q);
    if(a==1)
        printf("\nfor p=%d ,the value is %d ,which is a Fermat's prime\n",p,q);
    else
        printf("\nfor p=%d ,the value is %d ,which is  not a Fermat's prime\n",p,q);


}
printf("\nDo you want to perform again?? (1-yes,0-no)-->");
scanf("%d",&ch1);
}
}

void prime_nos()
{   int ch2=1;
    while(ch2 !=0)
{
    int i,a,b,e=1,d,s=0,c3,m,ab[100],z=0,n=0,ac,ad,j,ae,ag,af[100];
    char ch;
    double c;
    printf("\nPRIME NOS\n") ;
    printf("\nmenu\n1.find a largest power of a no dividing a factorial of a no\n2.generate prime\n3.Find a prime satisfying a=c(mod m)...(Dirichlet's  theorem on primes in AP)");
   printf("\n4.generate list of primes starting with a no till next y nos which are congruent to 3(mod 4) \n");
    printf("\nenter ur choice\n");
    scanf("%d",&i);
    if(i==1)
    {
        printf("enter the no of which u want to find the largest power");
        scanf("%d",&a);
        printf("enter the factorial no");
        scanf("%d",&b);
        while(1)
        {
            c=pow(a,e);
            d=(int)b/c;
            if(d<1)
                break;
            s=s+d;
            e++;

        }

        printf("\nSo the highest power of %d dividing %d! is %d",a,b,s);

    }
    else if(i==2)
    {

        printf("\nenter ur starting prime\n");
        scanf("%d",&a);
        ab[z]=a;n++;
        printf("\nenter the last no\n");
        scanf("%d",&b);
        while(1)
        {
            ag=0;
            z++;
            ac=1;
            for(j=0;j<n;j++)
        ac=ac*ab[j];
        n++;
        ac++;
        ad=isprime(ac);
        if(ad==1 && ac<b)
            {ab[z]=ac;ag++;}
            else{ae=ac;int jj=0;
                for(j=2;ae>=1;j++)
                {
                    if(ac%j==0)
                    {
                        af[jj]=j;
                        ae=ae/j;
                        jj++;
                    }
                }
                for(j=0;j<jj;j++)
                {
                    if(isprime(af[j]) && af[j]<b)
                    {ab[z]=af[j];ag++;break;
                }
            }



        }
        if(ag==0)
            break;
        }
        for(j=0;j<z;j++)
            printf("%d ",ab[j]);
    }
    else if(i==3)
    {
        printf("\nenter c and m of form      p=c(mod m)\n");
        scanf("%d%d",&c3,&m);
        int c31=c3,m1=m;
        while(m>0)
		{
			int rem=c3%m;
			c3=m;
			m=rem;
		}
		if(c3==1)
        {
            printf("\np has infinitely many values i.e   it has infinitely many primes");

        }else{
            int xyz=c31%m1;
            printf("\nThe value of p(prime no.) is %d",xyz);        }

    }
    else if(i==4)
    {
      printf("\nenter ur starting prime\n");
        scanf("%d",&a);
        z=0;
        n=0;
        ab[z]=a;n++;
        printf("\nenter the no of primes\n");
        scanf("%d",&b);
        for(i=0;i<b-1;i++)
        {ac=1;
            for(j=0;j<n;j++)
                ac=ac*ab[j];
            ac=(ac*4)+3;
            if(isprime(ac) && (ac-3)%4==0)
            {z++;
                ab[z]=ac;n++;
            }
            else
            {
             ae=ac;int jj=0;
                for(j=1;ae>=1;j++)
                {
                    if(ac%j==0)
                    {
                        af[jj]=j;
                        ae=ae/j;
                        jj++;
                    }
                }
                for(j=0;j<jj;j++)
                {
                    if(isprime(af[j]) && (af[j]-3)%4==0)
                    {z++;ab[z]=af[j];ag++;n++;break;

            }
                }


            }
        }


    for(i=0;i<b;i++)
        printf("%d,",ab[i]);
    }
printf("\nDo you want to perform this operation again?? (1-yes 0-no)-->");
scanf("%d",&ch2);
}
}

void prime_sum_of_sqaures()
{
int ch3=1;
while(ch3==1)
{
 int a,b,m,p,u,v,r,x=1,a1,b1;
 printf("\nUsing the procedure of descent procedure starting from equation __      (a^2)+(b^2)=(m*p),\nwe have to write 'p' as sum of two squares ,,,\nwhere m<p and p is a prime congruent to 1(mod 4) ");
 printf("\nenter the value of a-->");
 scanf("%d",&a);
 printf("\nenter the value of b-->");
 scanf("%d",&b);
 printf("\nenter the value of m-->");
 scanf("%d",&m);
 printf("\nenter the value of p-->");
 scanf("%d",&p);
 do
 {
 if(m>p)
 {
    printf("\nwrong input\n");
        exit(0);
 }
 u=a%m;
 v=b%m;
 double t=m/2.0;
 if((u>t) || (v>t) || (u<(-1*t)) || (v<(-1*t)))
 {
     printf("\ninvalid input\n");
     exit(0);
 }
r=((u*u)+(v*v))/m;

a1=((u*a)+(v*b))/m;
b1=((v*a)-(u*b))/m;
if(r==1)
break;
else
{
  a=a1;
  b=b1;
  m=r;

}
 }while(x==1);
 printf("\n%d = (%d^2) + (%d^2)\n",p,a1,b1);
printf("\nDo you want to perform this operation again?? (1-yes 0-no)-->");
scanf("%d",&ch3);
}
}

void quadratic()
{

int p,b,b2,m,temp;
  printf("\nenter the value of p-->");
  scanf("%d",&p);
  m=p/2;
  int a[p],i,qr[m],nr[m];
  for(i=0;i<p;i++)
  {
      temp=i*i;
      a[i]=temp%p;
  }

  printf("\n _ _ _ _ _ _ _ _ _ _ _ _ _ _ QUADRATIC RESIDUE _ _ _ _ _ _ _ _ _ _ _ _\n");
  for(i=1;i<=(p/2);i++)
  {
      qr[i-1]=a[i];
      printf("%d ,",a[i]);

  }
   printf("\n _ _ _ _ _ _ _ _ _ _ _ _ _ _ NON-QUADRATIC RESIDUE _ _ _ _ _ _ _ _ _ _ _ _\n");
  for(i=1;i<=(p/2);i++)
  {
      nr[i-1]=p-a[i];
      printf("%d ,",p-(a[i]));

  }
}

void legendre_symbol()
{
int ch4=1;
while(ch4==1)
{
int p,b,b2,m,temp,n;
  printf("\nenter the value of p-->");
  scanf("%d",&p);
  printf("\nEnter the value of a where a must be less than %d -->",p);
  scanf("%d",&n);
  m=p/2;
  int a[p],i,qr[m],nr[m];
  for(i=0;i<p;i++)
  {
      temp=i*i;
      a[i]=temp%p;
  }

  for(i=1;i<=(p/2);i++)
  {
      qr[i-1]=a[i];
  }
  for(i=1;i<=(p/2);i++)
  {
      nr[i-1]=p-a[i];
  }
  int x=0;
  
  if(n>p)
  {
   printf("\n\ninvalid\n");
    exit(0);
  }
  for(i=0;i<p;i++)
  {
      if(n==qr[i])
        {x=1;break;}
  }
  if(x==0)
    x=-1;
  printf("\nlegendre symbol = %d\n",x);

printf("\nDo you want to perform this operation again?? (1-yes 0-no)-->");
scanf("%d",&ch4);
}
}
int isprime(int N)
{
	int is_prime = 1,i;
	if (N < 2)
	{
		is_prime = 0;
	}
	for (i = 2; i * i <= N; i++)
	{
		if (N % i == 0)
		{
			is_prime = 0;
			break;
		}
	}
	if (is_prime == 1)
	{
    return(1);
	}
	else
	{
		return(0);
	}
}


