using System;

class Program {
    public static void Main (string[] args) {
//Scenario 1
        Console.WriteLine("Scenario 1");
        
        for (int i = 0; i < 22; i++){
            if (i % 2 == 1)
                Console.WriteLine(i);
        }

//Scenario 2
        Console.WriteLine("Scenario 2");
        
        for (int i = 24; i >= 3; i = i/2){
                Console.WriteLine(i);
        }

//Scenario 3
        Console.WriteLine("Scenario 3");

        for (char letter = 'a'; letter <= 'z'; letter++){
            Console.WriteLine(letter);
        }

//Scenario 4
        Console.WriteLine("Scenario 4");

        for (double i = 2; i <= 10; i++){
            Console.WriteLine(1/i);
        }

//Scenario 5
        int integer, sum = 0;
        
        Console.WriteLine("Scenario 5");
        Console.Write("Enter an integer: ");
        integer = Convert.ToInt32(Console.ReadLine());
        
        for (integer = integer; integer >= 0; integer--){
            sum = sum + integer;
        }
        Console.WriteLine(sum);

//Scenario 6
        int product = 1;

        Console.WriteLine("Scenario 6");
        
        for (int number = 1; number <= 13; number = number + 2){
            product = product * number;
        }
        Console.WriteLine(product);
    }      
}
