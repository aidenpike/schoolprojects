using System;

class Program {
    public static void Main (string[] args) {
        //Scenario 1
        Console.Write("Enter in any number: ");
        double firstDouble = Convert.ToDouble(Console.ReadLine());
        Console.Write("Enter in any number: ");
        double secondDouble = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("Enter in an operation below:\n[+ - * / root ^]\n");
        string operation = Console.ReadLine();
        operation = operation.ToUpper();
        
        switch (operation){
            case "+":
                Console.WriteLine("The sum is " + (firstDouble + secondDouble));
            break;
                
            case "-":
                Console.WriteLine("The difference is " + (firstDouble - secondDouble));
            break;
                
            case "*":
                Console.WriteLine("The product is " + (firstDouble * secondDouble));
            break;
                
            case "/":
                Console.WriteLine("The quotient is " + (firstDouble / secondDouble));
            break;
                
            case "ROOT":
                Console.WriteLine("The root is " + (Math.Pow(firstDouble, (1.0 / secondDouble))));
            break;
                
            case "^":
                Console.WriteLine("The index is " + (Math.Pow(firstDouble, secondDouble)));
            break;

            default:
                Console.WriteLine("Please enter an operation from the list.");
            break;
        }

//Scenario 2
        Console.WriteLine("Scenario 2");
        Console.Write("Enter in the number of credit hours you're taking: ");
        int creditHours = Convert.ToInt32(Console.ReadLine());

        if (creditHours <= 0)
            Console.WriteLine("Invalid answer.");
        else 
            Console.WriteLine("What type of student are you?");
            Console.WriteLine("[Undergraduate at $500 per hour]\n");
            Console.WriteLine("[Graduate at $800 per hour]\n");
            Console.WriteLine("[Out of State Student at $650 per hour]\n");
            Console.WriteLine("[Special Students at $300 per hour]\n");
            string studentType = Console.ReadLine();
            studentType = studentType.ToUpper();

            switch (studentType){
                case "UNDERGRADUATE":
                    Console.WriteLine("You owe $" + (creditHours * 500) + " for tuition.");
                break;

                case "GRADUATE":
                    Console.WriteLine("You owe $" + (creditHours * 800) + " for tuition.");
                break;

                case "OUT OF STATE STUDENT":
                    Console.WriteLine("You owe $" + (creditHours * 650) + " for tuition.");
                break;

                case "SPECIAL STUDENTS":
                    Console.WriteLine("You owe $" + (creditHours * 300) + " for tuition.");
                break;

                default:
                        Console.WriteLine("Invalid answer.");
                break;
            }
    }
}
