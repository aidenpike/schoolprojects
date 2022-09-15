using System;

class Program {
    public static void Main (string[] args) {
        
        Console.WriteLine("Scenario 1");

        for (int row = 8; row >= 0; row--){
            for (int col = 0; col <= row; col++){
                Console.Write("*");
            }
            Console.WriteLine();
        }

        Console.WriteLine("Scenario 2");

        for (int row = 1; row <= 5; row++){
            for (int col = row * 2; col >= 1; col--){
                Console.Write("*");
            }
            Console.WriteLine();
        }

        Console.WriteLine("Scenario 3");
        
        Console.WriteLine("Enter in number of rows: ");
        int rows = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Enter in increment value: ");
        int incr = Convert.ToInt32(Console.ReadLine());

        for (int i = 1; i <= rows; i++){
            for (int x = i * incr; x >= 1; x--)
                Console.Write("*");
            Console.WriteLine();
        }

        Console.WriteLine("Scenario 4");

        for (int row = 1; row <= 15; row++){
            for (int col = row; col >= 1; col--)
                Console.Write(" ");
            Console.WriteLine("*");
        }
    }
}
