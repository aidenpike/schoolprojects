using System;

class Program {
    public static void Main (string[] args) {
//Scenario 1
        int upFive = 15;

        Console.WriteLine("Scenario 1");
        
        while (upFive < 45){
            Console.WriteLine(upFive);
            upFive = upFive + 5;
        }

//Scenario 2
        int downTwo = 30;

        Console.WriteLine("Scenario 2");
        
        while (downTwo > 18){
            Console.WriteLine(downTwo);
            downTwo = downTwo - 2;
        }

//Scenario 3
        int divideTwo = 50;

        Console.WriteLine("Scenario 3");

        while (divideTwo > 0){
            Console.WriteLine(divideTwo);
            divideTwo = divideTwo / 2;
        }

//Scenario 4
        double squareThree = 3.0;

        Console.WriteLine("Scenario 4");

        while (squareThree < 6562){
            Console.WriteLine(squareThree);
            squareThree = Math.Pow(squareThree, 2);
        }

//Scenario 5
        string keepGoing = "Y";

        Console.WriteLine("Scenario 5");

        while (keepGoing == "Y" || keepGoing == "~!@#$%^&*()_"){
            Console.Write("Do you want to keep the loop going? [Y or N]:  ");
            keepGoing = Console.ReadLine();
            keepGoing = keepGoing.ToUpper();
            if (keepGoing == "Y")
                Console.WriteLine("Yay!");
            else if (keepGoing == "N")
                Console.WriteLine("Goodbye!");
            else {
                Console.WriteLine("Please enter Y or N.");
                keepGoing = "~!@#$%^&*()_";
            }
        }
    }
}
