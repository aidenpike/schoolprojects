using System;

class Program {
    public static void Main (string[] args) {
        string state, shorthand = " ";
        double gpa, cH, m, mCst, sc1, sc2, sc3 = 0.0;
        int pts, rbs, ast, age, mi, frLB, spd, spdLim = 0;

        Console.WriteLine("Scenario 1\n");
        Console.Write("Enter your state's abbrievation: ");
        state = Console.ReadLine();
        state = state.ToUpper();
        
        shorthand = (state == "IN" || state == "IL") ? "We have a store there." : "We do not have a store there.";
        Console.WriteLine(shorthand);


        Console.WriteLine("Scenario 2");
        Console.Write("Enter your GPA: ");
        gpa = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter your credit hours: ");
        cH = Convert.ToInt32(Console.ReadLine());

        shorthand = (gpa >= 3.5 && cH >= 70) ? "Honors Diploma\n" : "Regular Diploma\n";
        Console.Write(shorthand);


        Console.WriteLine("Scenario 3");
        Console.Write("Enter points: ");
        pts = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter rebounds: ");
        rbs = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter assists: ");
        ast = Convert.ToInt32(Console.ReadLine());

        shorthand = (pts >= 10 && rbs >= 10 && ast >= 10) ? "Triple double!\n" : "\n";
        Console.Write(shorthand);
        

        Console.WriteLine("Scenario 4");
        Console.Write("Enter age: ");
        age = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the cost of your meal: ");
        mCst = Convert.ToInt32(Console.ReadLine());

        if (age >= 65 || age <= 5){
            m = .1 * mCst; mCst = mCst - m;
            Console.WriteLine("You got a discount!");
            Console.WriteLine("The cost of your meal is $" + mCst);
        }
            Console.WriteLine("The cost of your meal is $" + mCst);

        Console.WriteLine("Scenario 5");
        Console.Write("Enter the mileage: ");
        mi = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the weight of the freight: ");
        frLB = Convert.ToInt32(Console.ReadLine());

        shorthand = (mi < 400 && frLB < 1000) ? "The freight will be delivered in 3-5 days.\n" : "The freight will be delivered in 5-7 days.\n";
        Console.Write(shorthand);


        Console.WriteLine("Scenario 6");
        Console.Write("Enter driver's speed: ");
        spd = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter the speed limit: ");
        spdLim = Convert.ToInt32(Console.ReadLine());

        if (spd >= 15 + spdLim)
            Console.WriteLine("You owe: $200" + "You must attend traffic class.");
        else
            Console.WriteLine("You owe: $100");


        Console.WriteLine("Scenario 7");
        Console.Write("Enter score 1: ");
        sc1 = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter score 2: ");
        sc2 = Convert.ToInt32(Console.ReadLine());
        Console.Write("Enter score 3: ");
        sc3 = Convert.ToInt32(Console.ReadLine());
        
        if (sc1 >= 0 && sc2 >= 0 && sc3 >= 0)
            Console.WriteLine("Average: " + (sc1 + sc2 + sc3) / 3);
        else 
            Console.WriteLine("All scores must be greater than 0, no average calculated.");
        
        
        Console.WriteLine("Scenario 8");
        Console.Write("Enter your state or its initials: ");
        state = Console.ReadLine();
        state = state = state.ToUpper();
        
        shorthand = ((state == "HAWAII" || state == "HI") || (state == "OREGON" || state == "OR")) ? "Charge: $30\n" : "Charge $20\n";
        Console.Write(shorthand);
    }
}
