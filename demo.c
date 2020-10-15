#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int fibo (int n);
int fact(int n);
float U_n (int n);
float V_n (int n);
void dump(int n);


int main(void){
	
	// ------------------ Q1 ------------------
	//printf("Hello Abdo..Allah Iwafak insh'allah'");
	
	// ------------------ Q2 ------------------
	
	/* 
	int x,y;
	 printf("Donnez un entier :");
	 scanf("%d",&x);
	 printf("Donnez un entier : ");
	 scanf("%d",&y);
	 printf("La somme est : %d ",x+y);
	 */
	 
	// ------------------ Q3 ------------------
	
	/*
	float c;
	do{
		printf("Donnez un reel > 10 \n");
		scanf("%f",&c);
		if(c < 10){
			printf("%f est < 10 \n",c);
			break;
		}
		printf("%f est bien > 10 \n",c);
	} while(c >= 10);
	*/
	
	// ------------------ Q4 ------------------
	
	/*
	char c;
	do{
		printf("Donnez une lettre entre 'e' et 'm' \n");
		scanf("%c",&c);
		if(c < 'm' && c > 'e'){
			printf("%c est bien entre 'e' et 'm' \n",c);
			break;
		}
		printf("%c n'est pas entre 'e' et 'm'  \n",c);
	} while(c < 'm' && c > 'e');
	
	*/
	
	// ------------------ Q5 ------------------
	
	/*
	int i;
	for(i=2;i<11;i++){
		printf("%d \n",i);
	}
	*/
	
	// ------------------ Q6 ------------------
	
	/*srand(time(NULL));
	int nombreMystere = 0, temp = 0;
    const int MAX = 100, MIN = 1;
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
  
    do
    {

        printf("Quel est le nombre ? ");
        scanf("%d", &temp);
  
        if (nombreMystere > temp)
            printf("C'est plus !\n\n");
            
        else if (nombreMystere < temp)
            printf("C'est moins !\n\n");
            
        else
            printf ("Vous l'avez trouvé '!!\n\n");
    } while (temp != nombreMystere);*/
    
    
    // ------------------ Q7 ------------------
    
    /*int n,i,sum=1;
    printf("Donnez un entier n \n \n");
    scanf("%d",&n);
    
    if(n==0 || n==1)
    	printf("0! =1");
    else{
    	for(i=1;i<=n;i++){
    		sum*=i;	
		}
		printf("%d! = %d \n \n",n,sum);
	}
	
	
	
	printf("Calcul a l'aide de la fontion : %d ", fact(n));*/
    	

// ------------------ Q8 ------------------

//printf(" %d \n \n", fibo(2));
//printf(" %d \n \n ", fibo(3));

// ------------------ Q9 ------------------

//printf(" %f \n \n", U_n(1));
//printf(" %f \n \n ", V_n(0));


// ------------------ Q10 ------------------		

int i ;
puts("Entrez un entier ");
scanf("%d", &i);
dump(i);

return 0;
}

 // ------------------ Q7 ------------------
int fact(int n){
		if(n==0 || n==1)
			return 1;
		else
			return fact(n-1)*n ;
	
	}
	
// ------------------ Q8 ------------------
	
int fibo (int n){
	if(n==0 || n==1)
		return 1;
	
	else
		return fibo(n-1)+fibo(n-2); 
		}
		
 // ------------------ Q9 ------------------
 

	
float U_n (int n){
	if (n==0)
		return 1;
	else 
		return 2*U_n(n+1) - V_n(n);
}

 float V_n (int n){
	if (n==0)
		return 2;
	else 
		return 2*V_n(n+1) - U_n(n+1);
}


 // ------------------ Q10 ------------------

void dump(int n) {
int i ;
printf ("%d %x\n", n, n);
for ( i = sizeof(int)*8-1; i >= 0; i--)
printf ("%c", (n & (1 << i)) ? '1' : '0' );
printf ("\n");
}


