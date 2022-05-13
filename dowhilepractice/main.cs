using System;

class Program {
    public static void Main (string[] args) {
        //Scenario 1
        long num = 10;
        
        Console.WriteLine("Scenario 1");

        do {
            Console.WriteLine(Math.Pow(num, 2));
            num++;
        } while (num <= 20);
        Console.WriteLine();
        
        //Scenario 2
        int age = 0;
        
        Console.WriteLine("Scenario 2");

        do {
            Console.Write("Enter your age (enter negative number to stop loop): ");
            age = Convert.ToInt32(Console.ReadLine());

            if (age < 18 && age >= 0)
                Console.WriteLine("You are too young to vote");
            else if (age >= 18)
                Console.WriteLine("You can vote");
            else if (age < 0)
                Console.WriteLine();
        } while (age > -1);

        //Scenario 3
        long sum = 0;
        num = 0;

        Console.WriteLine("Scenario 3");

        do {
            Console.Write("Enter in a positive number (enter negative number to stop loop): ");
            num = Convert.ToInt64(Console.ReadLine());

            if (num > -1)
                sum += num;
            else 
                Console.WriteLine();
            Console.WriteLine("Sum so far is " + sum);
        } while (num > -1);
        Console.WriteLine("Total sum is " + sum);
    }
}
