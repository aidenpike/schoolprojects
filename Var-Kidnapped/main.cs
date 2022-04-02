using System;

class Program {
  public static void Main (string[] args) {
      
    Console.WriteLine("[Scenario 1]");
    Console.Write("Enter in Length: ");
    int l = Convert.ToInt32(Console.ReadLine());
    Console.Write("Enter in Width: ");
    int w = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("Area: " + (l*w) + "\nPerimeter: " + ((l+w)*2) + "\n");

    
    Console.WriteLine("[Scenario 2]");
    Console.Write("Enter in capacity of tank in gallons: ");
    double tankCap = Convert.ToDouble(Console.ReadLine());
    Console.Write("Enter in MPG: ");
    double MPG = Convert.ToDouble(Console.ReadLine());
    Console.WriteLine("You can drive for " + (tankCap*MPG) + " miles before refueling.\n");

      
    Console.WriteLine("[Scenario 3]");
    Console.Write("Enter in pay received: ");
    double payR = Convert.ToDouble(Console.ReadLine());
    Console.Write("Enter in hours worked: ");
    double hrs = Convert.ToDouble(Console.ReadLine());
    Console.Write("Enter in name: ");
    string name = Console.ReadLine();
    Console.WriteLine(name + ", your hourly wage is " + (payR/hrs));

      
    Console.WriteLine("[Scenario 4]");
    Console.Write("Enter in cost per gallon: ");
    double cpg = Convert.ToDouble(Console.ReadLine());
    Console.Write("Enter in gallons: ");
    double gal = Convert.ToDouble(Console.ReadLine());
    Console.WriteLine("Cost: " + cpg*gal + "\nRounded Cost: " + Math.Round(cpg*gal));


    Console.WriteLine("[Scenario 5]");
    Console.Write("Enter in hours: ");
    hrs = Convert.ToDouble(Console.ReadLine());
    Console.Write("Enter in minutes: ");
    double min = Convert.ToDouble(Console.ReadLine());
    Console.Write("Enter in seconds: ");
    int s = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("That is " + (hrs*3600) + (min*60) + s);


    Console.WriteLine("[Scenario 6]");
    Console.Write("Enter how many Ninja Turtle Action Figures there are: ");
    int nTurt = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("Number of crates needed: " + (nTurt/20) + "Leftover Turtles: " + (nTurt%20));


    Console.WriteLine("[Scenario 7]");
    Console.Write("Enter in number of seconds: ");
    s = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("That is " + (s/3600) + " hours, " + (s % 3600) + " minutes, and " + (s % 3600 % 60) + " seconds.");
  }
}
