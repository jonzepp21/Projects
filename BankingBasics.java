/*
Coded by Jonathan Zepp
2/24/2023
A simple banking program that allows a user to select from three services
Then updates the account based on those services
*/

import java.util.Scanner;

public class BankingBasics
{
    public static void main(String[] args)
    {
        int bal = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Please enter for service:\n1:Deposit\n2:Withdraw\n3:Check Balance\n");
        int answer = sc.nextInt();
        switch(answer) 
        {
            case 1:                 //assigning the methods to the case
                deposit();          
                break;
            case 2:
                withdraw();         //#2 is a withdraw method
                break;
            case 3:
                checkBalance();     //#3 checks a balance
                break;
        }
        
    }
    
    public static int deposit()
    {
        Scanner deposit = new Scanner(System.in);
        System.out.print("How much would you like to deposit?\n");
        int dep= deposit.nextInt();
        System.out.printf("%d has been deposited into your bank account", dep);
        return 0;
    }
    
    private static int withdraw()
    {
        Scanner withdraw = new Scanner(System.in);
        System.out.print("How much would you like to withdraw?\n");
        int with=withdraw.nextInt();
        System.out.printf("%d has been withdrawn from your bank account", with);
        return 0;
    }
    
    private static int checkBalance()
    {
        int bal= 0;
        Scanner chBal=new Scanner(System.in);
        System.out.printf("You have a balance of $%d", bal);
        return 0;
    }
}