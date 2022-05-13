using System;

class Program {
    public static void Main (string[] args) {
        //Scenario 1
        double beginningBal, depositAmt, withAmt;
        
        Console.WriteLine("John Lee's Banking");
        Console.Write("Enter your checking account balance: ");
        beginningBal = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter the amount deposited during the month: ");
        depositAmt = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter the withdrawn amount during the month: ");
        withAmt = Convert.ToDouble(Console.ReadLine());

        string output = ((beginningBal + depositAmt - withAmt) < 0) ? "Overdraft!!!\n\n" : "\n";
        Console.WriteLine("Your balance at the end of the month will be $" + (beginningBal + depositAmt - withAmt));
        Console.WriteLine(output);

        //Scenario 2
        double envPrice, papPrice;
        int envCount, papCount;
        
        Console.WriteLine("Welcome to the Typing Salon!");
        Console.Write("Enter an amount of envelopes: ");
        envCount = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the price of the envelopes: ");
        envPrice = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter an amount of papers: ");
        papCount = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the price of the papers: ");
        papPrice = Convert.ToDouble(Console.ReadLine());
        
        Console.WriteLine("Your total due is $" + ((envCount * envPrice) + (papCount * papPrice)));

        //Scenario 3
        double length, width, sqPrice;
        
        Console.WriteLine("\x1B[33m[\x1B[32mThe Limited\x1b[33m]");
        Console.Write("Input length: ");
        length = Convert.ToDouble(Console.ReadLine());
        Console.Write("Input width: ");
        width = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter price per square foot: ");
        sqPrice = Convert.ToDouble(Console.ReadLine());

        
        Console.WriteLine("Your total area is " + (length * width) + " ft² and your total price is $" + (length * width) * sqPrice);
    }
}
