#include<stdio.h>

void main(void){
	int num;
	int fDigit,sDigit,tDigit,foDigit;
	
	printf("Number to be encrypted: ");//prompt message
	scanf("%d",&num);
	
	//seperate digits
	int i = 4;
	while(i>0){
		if(i==4){
			foDigit = num % 10;
			num = num / 10;
		}
		else if(i==3){
			tDigit = num % 10;
			num = num / 10;
		}
		else if(i==2){
			sDigit = num % 10;
			num = num / 10;
		}
		else{
			fDigit = num % 10;
			num = num / 10;
		}
		i-=1;
	}
	
	//Encryption phase(1)
	fDigit += 7;
	sDigit += 7;
	tDigit += 7;
	foDigit += 7;
	
	//Encryption phase(2)
	fDigit %= 10;
	sDigit %= 10;	
	tDigit %= 10;
	foDigit %= 10;
	
	//Encryption phase(3)
	//swapping
	int temp;
	//swap first digit with third digit
	temp = fDigit;
	fDigit = tDigit;
	tDigit = temp;
	//swap second digit with fourth digit
	temp = sDigit;
	sDigit = foDigit;
	foDigit = temp;
	
	printf("Encryption: %d%d%d%d\n",fDigit,sDigit,tDigit,foDigit);//Encrypted Number

	//Decryption 
	
	printf("Number to be decrypted: ");//prompt message
	scanf("%d",&num);
	
	//seperate digits
	i = 4;
	while(i>0){
		if(i==4){
			foDigit = num % 10;
			num = num / 10;
		}
		else if(i==3){
			tDigit = num % 10;
			num = num / 10;
		}
		else if(i==2){
			sDigit = num % 10;
			num = num / 10;
		}
		else{
			fDigit = num % 10;
			num = num / 10;
		}
		i-=1;
	}
	
	// Decryption phase (1)
	//swapping
	
	//swap first digit with third digit
	temp = fDigit;
	fDigit = tDigit;
	tDigit = temp;
	//swap second digit with fourth digit
	temp = sDigit;
	sDigit = foDigit;
	foDigit = temp;
	
	
	// Decryption phase (2)
	
	if(fDigit < 7){
		fDigit += 10;		
	}
	if(sDigit < 7){
		sDigit += 10;
	}
	if(tDigit < 7){
		tDigit += 10;	
	}
	if(foDigit < 7){
		foDigit += 10;		
	}
				
	fDigit -= 7;
	sDigit -=7;
	tDigit -=7;
	foDigit -= 7;
	
	printf("Decryption: %d%d%d%d\n",fDigit,sDigit,tDigit,foDigit);//Decrypted Number
}
