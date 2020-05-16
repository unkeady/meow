#include <stdio.h>

int main(){
	
	int a[10]; //10 elemanlık bir dizi tanımla.

	int i;
	
	for(i=0;i<10;i++) // 0'dan 10'a kadar dönen bir döngü oluşturur.
	a[i]=i; //a dizisinini i. elemanına i değerini koy.

	printf("%d",a[4]);

	// dizilerde 1. değer sıfırdır. a[0]=0; 1. değere 0 koy demektir.
	
}




#include <stdio.h>
int main(){
	
	int a[] = {2,3,9,8,15,-6}

		a[3] = 9;
		a[5] = -6;


	int A[2][3] //çok boyutlu diziler

		int A[2][3] = {{1,2,3},{4,5,6}};

	/* çıktı şu şekilde çıkar;

		123
		456
			*/

  
  }

// Basit hesap makinesi


#include <stdio.h>
int main() {
    char operator;
    int first, second;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d", &first, &second);

    switch (operator) {
    case '+':
        printf("%d + %d = %d", first, second, first + second);
        break;
    case '-':
        printf("%d - %d = %d", first, second, first - second);
        break;
    case '*':
        printf("%d * %d = %d", first, second, first * second);
        break;
    case '/':
        printf("%d / %d = %d", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}



#include <stdio.h> 

	int main(){

		int a[]={1,2,3,4,5};
		

		int s=0;


		while (s<5){


		printf("%d",a[s]);

		s++;
		
		}
	}

//Tersten yazdıran kod. Çalışıyor ama daha iyi yazılabilir şimdilik dursun şöyle şurada.


#include <stdio.h> 

	int main(){

		int a[]={1,2,3,4,5};
		int b[5];

		int s=0;
		int c=5;

		while (s<5){
      printf("%d",a[s]);
		  b[c] = a[s];
  	  c--;
		  s++;
		}
		printf("\n");
		int e=1;	
		
		while (e<6){
		
		printf("%d",b[e]);
		e++;
		}

	}
