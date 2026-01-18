

// TITLE: DEVELOP A MENU DRIVEN FOR HIBRIDE ATM CUM CDM MACHINE USING SWITCH CASE

#include <stdio.h>
#include <conio.h>

void main() {
    int fc, an, pin, newpin, confirmpin, acctype,am,npin,cpin,choice,otp,op;
    int amount, confirmamount,machinechoice;
    double notes;
    char query[100];
    clrscr();
    printf("CHOOSE ONE FROM BELOW HOW YOU WANT TO USE IT. AS A...\n");
    printf("""""""""""""""""""""""""""""""""""""""""""""""""""""""""\n");
    printf("\n1. ATM MACHINE. ");
    printf("\n2. CDM MACHINE. \n");
    scanf("%d",&machinechoice);
	switch(machinechoice){
	case 1:
    printf("WELCOME TO BANK OF SUTEX\n");
    printf("===========================\n");
    printf("\nENTER ATM CARD AND CHOOSE ONE OPTION FROM BELOW:");
    printf("\n1. CHECK BALANCE");
    printf("\n2. CHANGE PIN");
    printf("\n3. WITHDRAW MONEY");
    printf("\n4. CARDLESS WITHDRAWAL");
    printf("\n5. EXIT");
    printf("\n\nENTER YOUR CHOICE: ");
    scanf("%d", &fc);

	 switch (fc) {
	 case 1:
	    printf("\nYOUR CHOICE: CHECK BALANCE");
	    printf("\nENTER ACCOUNT NUMBER: ");
	    scanf("%d", &an);
	    printf("ENTER PIN: ");
	    scanf("%d", &pin);
	    if (pin == 2025) {
		printf("\nYOUR CURRENT BALANCE: 100000.00 INR\n");
		break;
	    } else {
		printf("\nINVALID PIN. TRY AGAIN.\n");
		break;
	    }
	    
	break;

    case 2:
	    printf("\nYOUR CHOICE: CHANGE PIN");
	    printf("\nENTER ACCOUNT NUMBER: ");
	    scanf("%d", &an);
	    printf("ENTER CURRENT PIN: ");
	    scanf("%d", &pin);
	    if (pin == 2025) {
	    printf("\nENTER NEW PIN: ");
	    scanf("%d", &newpin);
	    printf("CONFIRM PIN: ");
	    scanf("%d", &confirmpin);
	    if (newpin == confirmpin) {
	    printf("\nYOUR NEW PIN IS SET SUCCESSFULLY.\n");
	    break;
	    } else {
	    printf("\nPIN MISMATCH. TRY AGAIN.\n");
	    break;
		}
		break;
	    } else {
	    printf("\nINVALID PIN.\n");
	    break;
	    }
	    break;

    case 3:
	    printf("\nYOUR CHOICE: WITHDRAW MONEY");
	    printf("\n1. CURRENT ACCOUNT");
	    printf("\n2. SAVING ACCOUNT");
	    printf("\nEnter: ");
	    scanf("%d", &acctype);

	    switch (acctype) {
	    case 1:
	    printf("\nENTER ACCOUNT NUMBER: ");
	    scanf("%d", &an);
	    printf("ENTER PIN: ");
	    scanf("%d", &pin);
	    if (pin==2025) {
	    printf("\nENTER AMOUNT: ");
	    scanf("%d", &amount);
	    printf("CONFIRM AMOUNT: ");
	    scanf("%d", &confirmamount);
	    if (amount == confirmamount){
	    printf("\nYOUR AMOUNT WITHDRAWN.\n");
	    break;
	    }
	    else{
	    printf("\nAMOUNT MISMATCH.\n");
	    break;
	    }
	    break;
	    } else {
	    printf("\nINVALID PIN.\n");
	    break;
	    }
	    break;

	    case 2:
	    printf("\nENTER ACCOUNT NUMBER: ");
	    scanf("%d", &an);
	    printf("ENTER PIN: ");
	    scanf("%d", &pin);
	    if (pin == 2025) {
	    printf("\nENTER AMOUNT: ");
	    scanf("%d", &amount);
	    if (amount <= 25000){
	    printf("\nYOUR AMOUNT WITHDRAWN.\n", amount);
	    break;
	    }
	    else{
	    printf("\nYOU CAN WITHDRAW MAX 25000 INR PER DAY.");
	    break;
	    }
	    break;
	    } else {
	    printf("\nINVALID PIN.\n");
	    break;
	    }
	    break;

	    default:
	    printf("\nINVALID ACCOUNT TYPE.\n");
	    break;
	    }
    break;

    case 4:
    printf("\nYOUR CHOICE: CARDLESS WITHDRAWAL");
    printf("\n1. CURRENT ACCOUNT");
    printf("\n2. SAVING ACCOUNT");
    printf("\nEnter: ");
    scanf("%d", &acctype);

    switch (acctype) {
    case 1:
    printf("\nENTER MOBILE NUMBER: ");
    scanf("%d", &an);
    printf("ENTER CODE: ");
    scanf("%d", &pin);
    if (pin == 2025) {
    printf("\nENTER AMOUNT: ");
    scanf("%d", &amount);
    printf("CONFIRM AMOUNT: ");
    scanf("%d", &confirmamount);
    if (amount == confirmamount)
    printf("\nYOUR AMOUNT WITHDRAWN.\n", amount);
    else
    printf("\nAMOUNT MISMATCH.\n");
    } else {
    printf("\nINVALID CODE.\n");
    }
    break;

    case 2:
    printf("\nENTER ACCOUNT NUMBER: ");
    scanf("%d", &an);
    printf("ENTER PIN: ");
    scanf("%d", &pin);
    if (pin == 2025) {
    printf("\nENTER AMOUNT: ");
    scanf("%d", &amount);
    if (amount <= 25000)
    printf("\nYOUR AMOUNT WITHDRAWN.\n", amount);
    else
    printf("\nDAILY LIMIT: 25000 INR. TRY AGAIN.");
    } else {
    printf("\nINVALID PIN.\n");
    }
    break;

    default:
	      printf("\nINVALID ACCOUNT TYPE.\n");
	    }
    break;

    case 5:
    exit(0);
    break;

    default:
    printf("\nINVALID CHOICE. PLEASE CHOOSE FROM 1 TO 5.\n");
    break;
    break;
   
    }
break;

   case 2: {
printf("WELCOME TO BANK OF SUTEX.");
printf("\n""""""""""""""""""""""""""");
printf("\n\nINSERT ATM CARD(IF POSSIBLE) AND CHOOSE ONE OPTION FROM BELOW.");
printf("\n1. DEPOSIT CASH USING CARD.");
printf("\n2. CARDLESS DEPOSIT.");
printf("\n3. EXIT.\n");
scanf("%d",&fc);
	switch(fc){
	case 1:
	printf("\n\nYOUR CHOICE: DEPOSIT USING CARD.");
	printf("\n\nENTER ACCOUNT NUMBER: \n");
	scanf("%d",&an);
	printf("\n\nENTER PIN (4 DIGIT): \n");
	scanf("%d",&pin);
	 if(pin==2025){
		printf("\n\nENTER NOTES IN CASE NOTES SLOT AND ENTER AMOUNT FOR FURTHER PROCESS.\n");
		scanf("%lf",&notes);
		printf("\nYOUR ENTERED %.2f IN SLOT AND AMOUNT OF %.2f. ",notes,notes);
		printf("\nCHOOSE ONE OPTION TO DO LAST PROCESS.");
		printf("\n1. DEPOSIT AMOUNT.");
		printf("\n2. ENTER QUERIES.");
		printf("\n3. CANCEL.\n");
		scanf("%d",&op);
			switch(op){
			case 1:
			printf("YOUR AMOUNT IS ADDED IN YOUR ACCOUNT.");
			break;

			case 2:
			printf("ENTER QUERIES WITHOUT USING SPACE: \n");
			scanf("%s",&query);
			printf("\nYOUR QUERY SUBMITTED. QUERIES WILL BE SOLVED SOON.");
			break;

			case 3:
			exit(0);
			break;

			default:
			printf("\n\nINVALID CHOICE.");
			break;

			}
	  break;
		}
	 else{
		printf("\nINCORRECT PIN.");
		printf("\nCHOOSE ONE OPTION FROM BELOW.");
		printf("\n\n1. FORGOT PIN.");
		printf("\n2. EXIT AND RETRY.\n");
		scanf("%d",&op);
			switch(op){
			case 1:
			printf("\n\nYOUR CHOICE: FORGOT PIN");
			printf("\nENTER MOBILE NUMBER: \n");
			scanf("%lf",&notes);
			printf("\nENTER OTP: \n");
			scanf("%d",&otp);
			printf("\nENTER NEW PIN: ");
			scanf("%d",&npin);
			printf("\nCONFIRM PIN: ");
			scanf("%d",&cpin);
				if(npin==cpin){
				printf("YOUR PIN IS SET RE-ENTER PROCESS TO COUNTINUE.");

				break;
				}
				else{
				printf("PIN DISMATCH.");
				break;
				}
			case 2:
			exit(0);
			break;


			}
	  break;
	 }


	case 2:
	printf("\n\nYOUR CHOICE: CARDLESS DEPOSIT.");
	printf("\nCHOOSE ONE FROM BELOW.");
	printf("\n1. VIA MOBILE NUMBER.");
	printf("\n2. VIA ACCOUNT NUMBER.");
	printf("\n3. VIA UPI ID.");
	scanf("%d",&choice);
		switch(choice){
		case 1:
		printf("\nYOUR CHOICE: VIA MOBILE NUMBER:\n");
		printf("\nENTER MOBILE NUMBER: \n");
		scanf("%lf",&notes);
		printf("\nENTER OTP: \n");
		scanf("%d",&otp);
		printf("\n\nENTER NOTES IN CASE NOTES SLOT AND ENTER AMOUNT FOR FURTHER PROCESS.\n");
		scanf("%lf",&notes);
		printf("\nYOUR ENTERED %.2f IN SLOT AND AMOUNT OF %.2f. ",notes,notes);
		printf("YOUR AMOUNT IS ADDED IN YOUR ACCOUNT.");
		break;

		case 2:
		printf("\nYOUR CHOICE: VIA ACCOUNT NUMBER:\n");
		scanf("%lf",&notes);
		printf("\nENTER PIN: \n");
		scanf("%d",&otp);
		if(otp==2025){
		printf("\n\nENTER NOTES IN CASE NOTES SLOT AND ENTER AMOUNT FOR FURTHER PROCESS.\n");
		scanf("%lf",&notes);
		printf("\nYOUR ENTERED %.2f IN SLOT AND AMOUNT OF %.2f. ",notes,notes);
		printf("\nCHOOSE ONE OPTION TO DO LAST PROCESS.");
		printf("\n1. DEPOSIT AMOUNT.");
		printf("\n2. ENTER QUERIES.");
		printf("\n3. CANCEL.\n");
		scanf("%d",&op);
			switch(op){
			case 1:
			printf("YOUR AMOUNT IS ADDED IN YOUR ACCOUNT.");
			break;

			case 2:
			printf("ENTER QUERIES WITHOUT USING SPACE: \n");
			scanf("%s",&query);
			printf("\nYOUR QUERY SUBMITTED. QUERIES WILL BE SOLVED SOON.");
			break;

			case 3:
			exit(0);
			break;

			default:
			printf("\n\nINVALID CHOICE.");
			break;

			}
	  break;
		}
	 else{
		printf("\nINCORRECT PIN.");
		printf("\nCHOOSE ONE OPTION FROM BELOW.");
		printf("\n\n1. FORGOT PIN.");
		printf("\n2. EXIT AND RETRY.\n");
		scanf("%d",&op);
			switch(op){
			case 1:
			printf("\n\nYOUR CHOICE: FORGOT PIN");
			printf("\nENTER MOBILE NUMBER: \n");
			scanf("%lf",&notes);
			printf("\nENTER OTP: \n");
			scanf("%d",&otp);
			printf("\nENTER NEW PIN: ");
			scanf("%d",&npin);
			printf("\nCONFIRM PIN: ");
			scanf("%d",&cpin);
				if(npin==cpin){
				printf("YOUR PIN IS SET RE-ENTER PROCESS TO COUNTINUE.");

				break;
				}
				else{
				printf("PIN DISMATCH.");
				break;
				}
			case 2:
			exit(0);
			break;


			}
	  break;
	 }



		case 3:
		printf("\nYOUR CHOICE: VIA UPI ID:\n");
		scanf("%lf",&notes);
		printf("\nENTER PASSWORD: \n");
		scanf("%d",&otp);
		printf("\n\nENTER NOTES IN CASE NOTES SLOT AND ENTER AMOUNT FOR FURTHER PROCESS.\n");
		scanf("%lf",&notes);
		printf("\nYOUR ENTERED %.2f IN SLOT AND AMOUNT OF %.2f. ",notes,notes);
		printf("YOUR AMOUNT IS ADDED IN YOUR ACCOUNT.");
		break;

		default:
		printf("\nINVALID CHOICE.");
		break;
		}
	break;

	case 3:
	exit(0);
	break;

	default:
	printf("\n\nINVALID CHOICE.");
	break;
	
	break;
	}

}

printf("\n\nHAVE A GOOD DAY.\n");
getch();
}
}






