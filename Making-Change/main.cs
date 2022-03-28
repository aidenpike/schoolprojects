using System;

class Program {
    public static void Main (string[] args) {
        int P, Rem, Q, N, Di = 0;
        double amtGive, amtDue, amtBack = 0.00;

        Console.WriteLine("Scenario 1: ");
        Console.Write("Input amount of pennies: ");
        P = Convert.ToInt32(Console.ReadLine());
        Console.Write("You have " + P/100 + " dollar(s), ");

        Rem = P % 100; Q = Rem/25;
        Console.Write(Convert.ToString(Q) + " quarter(s), ");

        Rem = Rem % 25; Di = Rem/10;
        Console.Write(Convert.ToString(Di) + " dime(s), ");

        Rem = Rem % 10; N = Rem/5;
        Console.Write(Convert.ToString(N) + " nickle(s)");

        Rem = Rem % 5;
        Console.WriteLine(Convert.ToString(Rem) + " penny(ies).");


        Console.WriteLine("Scenario 2: ");
        Console.Write("Amount due: ");
        amtDue = Convert.ToDouble(Console.ReadLine());
        amtDue *= 100;

        Console.Write("Pay here: ");
        amtGive = Convert.ToDouble(Console.ReadLine());
        amtGive *= 100;

        amtBack = amtGive - amtDue;
        
        if (amtBack < 0)
            Console.WriteLine("Invalid! Payment does not reach required amount due.\n");
        else {
        Console.WriteLine("You get back " + amtBack/100 + " dollar(s), ") ;
        Rem = Convert.ToInt32(amtBack % 100);
        
        Q = Rem/25;
        Console.Write(Convert.ToString(Q) + " quarter(s), ");

        Rem = Rem % 25; Di = Rem/10;
        Console.Write(Convert.ToString(Di) + " dime(s), ");

        Rem = Rem % 10; N = Rem/5;
        Console.Write(Convert.ToString(N) + " nickle(s), and ");

        Rem = Rem % 5;
        Console.Write(Convert.ToString(Rem) + " penny(ies).");
        }
    }
}
