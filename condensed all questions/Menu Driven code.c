//Menu driven code
#include <stdio.h>
int main(){
	int menu;
	int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    scanf("%d",&menu);
	printf("The choices are:\n");
	printf("1. the number of digits in the given number\n");
	printf("2. the count of the digits being odd\n");
	printf("3. the sum of all the digits of the given number\n");
	printf("4. reverse of the digits of the given number\n");
	printf("5. the word equivalent of the given number\n");
	while(menu!=0){
		switch(menu){
			case 1:
				int cnt=0,temp;
				temp=num;
				do{
					temp/=10;
					cnt+=1;
				}while(temp!=0);
				printf("%d",cnt);
				printf("\n");
				break;
				
			case 2:
			    int cnt1=0;
			    int temp1,a;
			    temp1=num;
			    do{
			        a=temp1%10;
			        temp1/=10;
			        if (a%2!=0){
			            cnt1+=1;
			        }
			    }while(temp1>0);
			    printf("%d",cnt1);
			    printf("\n");
			    break;
			    
			case 3:
			    int sum=0,temp2;
			    temp2=num;
			    do{
			        sum+=temp2%10;
			        temp2/=10;
			    }while(temp2>0);
			    printf("%d",sum);
			    printf("\n");
			    break;
			case 4:
			    int rev=0;
			    int x,temp3;
			    temp3=num;
			    do{
			        x=temp3%10;
			        rev=rev*10+x;
			        temp3/=10;
			    }while(temp3>0);
			    printf("%d",rev);
			    printf("\n");
			    break;
			case 5:
			    int rev1=0;
			    int x1,temp5;
			    temp5=num;
			    do{
			        x1=temp5%10;
			        rev1=rev1*10+x1;
			        temp5/=10;
			    }while(temp5>0);
			    
			
			    if (rev1==0){
			        printf("Zero");
			    }
			    else{
			        while (rev1!=0){
			            switch(rev1%10){
			                case 0:
			                    printf("Zero ");
			                    break;
			                case 1:
			                    printf("One ");
			                    break;
			                case 2:
			                    printf("Two ");
			                    break;
			               case 3:
			                    printf("Three ");
			                    break;
			               case 4:
			                   printf("Four ");
			                   break;
		    	            case 5:
			                    printf("Five ");
			                    break;
			                case 6:
			                    printf("Six ");
			                    break;
		    	            case 7:
			                    printf("Seven ");
			                    break;
			                case 8:
			                    printf("Eight ");
			                    break;
		    	            case 9:
			                    printf("Nine ");
			                    break;
			            }
			            rev1/=10;
			        }
			        printf("\n");
			    }
			
		}
		    
		scanf("%d",&menu);
		
	}
	printf("Thank you");
	return 0;
}
