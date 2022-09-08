#include <stdio.h>
int main ()
{
    int a,b,n,pin=2000,otp=0000,otp1=1111,otp2=2222,otp3=3333,accnum,ifsc,newpin,cnfpin,amount1,amount2,amount3,p1,p2,p3;
    float bal=2556789.45;
    char card[100];
    printf("Please enter your bank name:\n");
    gets(card);
    printf("\n");
    
    printf("Welcome to %s.\n\n",card);
    printf("Please enter your PIN.\n\n");
    scanf("%d",&pin);
    printf("\n");
    if (pin==2000)
    {   
    printf("Choose your activity:\n");
    printf("1.Banking\t\t");
    printf("2.Balance Enquiry\n");
    printf("3.PIN Generation\t");
    printf("4.Cancel Transaction\n\n");
    scanf("%d",&n);
    printf("\n");
    switch (n)
    {
    case 1:
        printf("1.Cash Deposit\t");
        printf("2.Cash Withdrawl\n");
        printf("3.Bank Transfer\t");
        printf("4.Cancel Transaction\n\n");
        scanf("%d",&b);
        printf("\n");
        switch (b)
        {
        case 1:
            printf("Enter the amount to be deposited:\n");
            scanf("%d",&amount1);
            printf("\n");
            printf("Please Enter OTP:\n");
            scanf("%d",&otp1);
            printf("\n");
            if (otp1==1111)
            {
            printf("Yor transaction is successful.\n");
            printf("Do you want to show your balance on screen?\n\n");
            printf("1.Yes\t");
            printf("2.No\n");
            scanf("%d",&p1);
            printf("\n");
            if (p1==1)
            {
            printf("Total amount is : %.2f\n",bal+amount1);
            }
            }
            else 
            {
            printf("Your OTP is incorrect. Please try again.\n");   
            }
            break;
        case 2:
            printf("Enter the amount to be withdrawl:\n");
            scanf("%d",&amount2);
            printf("\n");
            printf("Please Enter OTP:\n");
            scanf("%d",&otp2);
            printf("\n");
            if (otp2==2222)
            {
            printf("Yor transaction is successful.\n\n");
            printf("Do you want to show your balance on screen?\n\n");
            printf("1.Yes\t");
            printf("2.No\n");
            scanf("%d",&p2);
            printf("\n");
            if (p2==1)
            {
            printf("Total amount is : %.2f\n",bal-amount2);
            }
            }
            else 
            {
            printf("Your OTP is incorrect. Please try again.\n");    
            }
            break;
        case 3:
            printf("Enter the amount to be transfer:\n");
            scanf("%d",&amount3);
            if (amount3<=bal)
            {
            printf("\n");
            printf("Please enter the account number of the person:\n");
            scanf("%d",&accnum);
            printf("\n");
            printf("Please enter tou IFSC number:\n");
            scanf("%d",&ifsc);
            printf("\n");
            printf("Please Enter OTP:\n");
            scanf("%d",&otp3);
            printf("\n");
            if (otp3==3333)
            {
            printf("Yor transaction is successful.\n\n");
            printf("Do you want to show your balance on screen?\n\n");
            printf("1.Yes\t");
            printf("2.No\n");
            scanf("%d",&p3);
            printf("\n");
            if (p3==1)
            {
            printf("Total amount is : %.2f\n",bal-amount3);
            }
            }
            else 
            {
            printf("Your OTP is incorrect. Please try again.\n");    
            }
            }
            else 
            {
            printf("Not enough money in your account.\n\n");
            }
            break;  
        case 4:  
            printf("Yor transaction was cancelled.\n\n");
        default:
            printf("Your last transation was unsuccessful.\n");
            break;
        }
        break;
    case 2:
        printf("Total balance is : %.2f \n", bal);
        break;
    case 3:
        printf("Enter new PIN:\n");
        scanf("%d",&newpin);
        printf("\n");
        printf("Confirm\n");
        scanf("%d",&cnfpin);
        printf("\n");
        if (newpin==cnfpin)
        {
        printf("Please enter OTP:\n");
        scanf("%d",&otp);
        printf("\n");
        if (otp==0000)
            {
             printf("PIN changed successfully.\n");
            }
            else 
            {
            printf("Your OTP is incorrect. Please try again.\n");    
            }
        }
        else
        {
            printf("Please enter the same PIN and try again,\n");
        }   
        break; 
    case 4:
        printf("Your last transaction is cancelled.\n");    
    default: 
        printf("Your last transation was unsuccessful.\n");
        break;
    }    
    }   
    else 
    {
        printf("Your PIN is incorrect. Please try again.\n");
    }
    
    /*else 
    {
        printf("Please try an SBI account.\n");
    }*/
    return 0 ;
}
