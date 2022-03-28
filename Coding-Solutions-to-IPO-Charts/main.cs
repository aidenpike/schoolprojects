using System;

class Program {
    public static void Main (string[] args) {
        double beginningBal, depositAmt, withAmt, endBal,
           envPrice, papPrice, totalPrice,
           longness, wideness, sqPrice, lwArea, totPrice = 0.0;
    int envCount, papCount = 0;
        Console.WriteLine("Below are the programs that solve the 3 scenarios from my first IPO Charts assignments\n");
        Console.WriteLine("\x1B[32mJohn Lee's Banking");
        Console.Write("Enter your checking account balance: ");
        beginningBal = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter the amount deposited during the month: ");
        depositAmt = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter the withdrawn amount during the month: ");
        withAmt = Convert.ToDouble(Console.ReadLine());

        endBal = beginningBal + depositAmt - withAmt;

        string overdraft = (endBal < 0) ? "Overdraft!!!\n\n" : "\n";

        Console.WriteLine("Your balance at the end of the month will be $" + endBal);
        Console.WriteLine(overdraft);


        Console.WriteLine("\x1B[32Welcome to the Typing Salon!");
        Console.Write("Enter an amount of envelopes: ");
        envCount = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the price of the envelopes: ");
        envPrice = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter an amount of papers: ");
        papCount = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the price of the papers: ");
        papPrice = Convert.ToDouble(Console.ReadLine());

        totalPrice = (envCount * envPrice) + (papCount * papPrice);

        Console.WriteLine("Your total due is $" + totalPrice);


        Console.WriteLine("\x1B[33m[\x1B[32mThe Limited\x1b[33m]");
        Console.Write("Input length: ");
        longness = Convert.ToDouble(Console.ReadLine());
        Console.Write("Input width: ");
        wideness = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter price per square foot: ");
        sqPrice = Convert.ToDouble(Console.ReadLine());

        lwArea = longness * wideness;
        totPrice = lwArea * sqPrice;
        Console.WriteLine("Your total area is" + lwArea + " ft² and your total price is $" + totPrice);
    }
}
