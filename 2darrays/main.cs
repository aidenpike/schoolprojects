using System;

class Program {
    public static void Main (string[] args) {
        //Scenario 1
        //2 instances of 7 values (Week 1 [Day 1-7], Week 2 [Day 1-7])
        int friesSum = 0;
        int[,] fries = {{6, 9, 22, 34, 1, 90, 0},
                        {39, 2, 4, 5, 7, 44, 21}};

        for (int x = 0; x < 2; x++){
            for (int y = 0; y < 7; y++){
                friesSum += fries[x, y];
            }    
        }
        
        Console.WriteLine("There are " + friesSum + " fries.");

        //Scenario 2
        //5 instances of 4 values (Names followed by As and Ps)
        int indexA = 0;
        int indexP = 0;
        string[,] students = {{"Kirsten","A","P","A"},
                              {"Evan", "P", "A", "P"},
                              {"Rylan", "P", "P", "P"},
                              {"Joe", "A", "P", "P"},
                              {"Collin", "P", "P", "P"}};
        for (int x = 0; x < 5; x++){
            for (int y = 0; y < 4; y++){
                if (students[x,y] == "A"){
                    indexA++;
                }
                else if (students[x,y] == "P"){
                    indexP++;
                }
            }
        }
    
        Console.Write("There are " + indexA + " absent, and ");
        Console.WriteLine(indexP + " present.");

        //Scenario 3
        //10 instances of 2 grades (10 students, midterm and final)
        int maxMidterm = 0;
        int maxFinal = 0;
        
        int[,] scores = {{78, 90},
                         {87, 88},
                         {65, 70},
                         {56, 100},
                         {74, 72},
                         {33, 47},
                         {87, 88},
                         {73, 73},
                         {79, 83},
                         {95, 89}};

        for (int x = 0; x < 10; x++){
            for (int y = 0; y < 2; y++){
                maxMidterm = Math.Max(scores[0,0], scores[x,0]);
                maxFinal = Math.Max(scores[0,0], scores[x, 1]);
            }
        }

        Console.Write("The highest midterm score was " + maxMidterm + ", and ");
        Console.WriteLine("the highest final score was " + maxFinal);
    }
}
