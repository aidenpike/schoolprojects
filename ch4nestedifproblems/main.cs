using System;

class Program {
    public static void Main (string[] args) {
        int shape, daysmiss, min = 0;
        int[] num = new int[100];
        double x, y = 0.0;
        char hrtCond, z = ' ';

//Scenario 1
        Console.WriteLine("Scenario 1");
        Console.Write("How tall are you (inches): ");
        x = Convert.ToDouble(Console.ReadLine());

        if (x <= 53)
            Console.WriteLine("You cannot go on any roller coasters, you are too short.");
        else {
            Console.Write("Do you have a heart condition? [Y or N]: ");
            hrtCond = Convert.ToChar(Console.ReadLine());
            hrtCond = Char.ToUpper(hrtCond);
        
            Console.WriteLine((hrtCond == 'Y') ? "You cannot go on Rockin Roller Coaster or Tunnel of Doom." : "You can ride all of the roller coasters.");
        }

//Scenario 2
            Console.WriteLine("Scenario 2");
            Console.Write("Which shape do you want to see the area of:\n 1. Circle\n 2. Rectangle\n 3. Triangle\n");
            shape = Convert.ToInt32(Console.ReadLine());

            switch (shape){
                case 1: 
                    Console.Write("Enter the radius of the circle: ");
                    x = Convert.ToDouble(Console.ReadLine());
                    Console.WriteLine("The area is " + (3.14 * Math.Pow(x, 2)));
                break;

                case 2: 
                    Console.Write("Enter in the length of the rectangle: ");
                    x = Convert.ToDouble(Console.ReadLine());
                    Console.Write("Enter in the width of the rectangle: ");
                    y = Convert.ToDouble(Console.ReadLine());
                    Console.WriteLine("The area is " + (x * y));    
                break;

                case 3:
                    Console.Write("Enter the height of the triangle: ");
                    x = Convert.ToDouble(Console.ReadLine());
                    Console.Write("Enter the base of the triangle: ");
                    y = Convert.ToDouble(Console.ReadLine());
                    Console.WriteLine("The area is " + (0.5 * (x*y)));
                break;

                default:
                    Console.WriteLine("Please enter in a number between 1 and 3.");
                break;
            }
            
//Scenario 3
            Console.WriteLine("Scenario 3");
            Console.Write("How many days of school have you missed?: ");
            daysmiss = Convert.ToInt32(Console.ReadLine());

            if (daysmiss >= 2)
                Console.WriteLine("You have to take the final.");
            else {
                Console.Write("What is your average grade?: ");
                x = Convert.ToDouble(Console.ReadLine());
                Console.WriteLine((x >= 90) ? "You don't have to take the final." : "You have to take the final.");
            }

//Scenario 4
            Console.WriteLine("Scenario 4");
            Console.Write("Do you have a fever? [Y or N]: ");
            z = Convert.ToChar(Console.ReadLine());
            z = Char.ToUpper(z);

            if (z == 'N'){
                Console.Write("Do you have a stuffy nose? [Y or N]: ");
                z = Convert.ToChar(Console.ReadLine());
                Console.WriteLine((z == 'Y') ? "You have a head cold." : "You are a hypochondriac.");
            }
            else {
                Console.Write("Do you have a rash? [Y or N]: ");
                z = Convert.ToChar(Console.ReadLine());
                Console.WriteLine((z == 'Y') ? "You might have measles." : "You might have the flu.");
            }

//Scenario 5
        Console.WriteLine("Scenario 5: ");

        for(int i = 0; i < 3; i++){
            Console.Write("Enter a number: ");
            num[i] = Convert.ToInt32(Console.ReadLine());
        }

        min = num[0];

        for(int i = 0; i < 3; i++){
            if(num[i] < min)
                min = num[i];
        }
        Console.WriteLine("Minimum Num: " + min);
    }
}
