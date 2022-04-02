using System;

class Program {
    public static void Main (string[] args) {
        bool loop = true;
        bool loop2 = true;
        string answer, shorthand, retry = " ";
        int diff = 0;

        do {
            Console.WriteLine("RIDDLE ME THIS, BATMAN!");
            Console.WriteLine("Choose your difficulty. \n Easy = 1 \n Normal = 2 \n Hard = 3 \n Extreme = 4\n");
            diff = Convert.ToInt32(Console.ReadLine());

            if (diff == 1){
                Console.WriteLine("What has to be broken before you can use it? ");
                answer = Console.ReadLine();
                answer = answer.ToUpper();

                shorthand = (answer == "EGG") ? "You win this time, Batman..." : "YOU LOSE, BATMAN! YOU ARE A FOOL!";
                Console.WriteLine(shorthand);
            }
            if (diff == 2){
                Console.WriteLine("I speak without a mouth and hear without ears. I have no body, but I come alive with wind. What am I? ");
                answer = Console.ReadLine();
                answer = answer.ToUpper();

                shorthand = (answer == "ECHO") ? "You win this time, Batman..." : "YOU LOSE, BATMAN! YOU ARE A FOOL!";
                Console.WriteLine(shorthand);
            }
            if (diff == 3){
                Console.WriteLine("Ah, a daring one. Let us see if you are up to the test!\n\nPlease respond in one word. \nI look flat, \nbut I am deep, \nHidden realms I shelter. \nLives I take, but food I offer. \nAt times I am beautiful. \nI can be calm, angry and turbulent. \nI have no heart, but offer pleasure as well as death. \nNo man can own me, yet I encompass what all men must have. \nWhat am I? ");
                answer = Console.ReadLine();
                answer = answer.ToUpper();

                shorthand = (answer == "OCEAN") ? "You win this time, Batman..." : "YOU LOSE, BATMAN! YOU ARE A FOOL!";
                Console.WriteLine(shorthand);
            }
            if (diff == 4){
                Console.WriteLine("Very daring I see. You'll regret it.\n\n One of these words does not belong: Which is it? Brawl, Carrot, Change, Clover, Proper, Sacred, Stone, Seventy, Swing, Travel.");
                answer = Console.ReadLine();
                answer = answer.ToUpper();

                shorthand = (answer == "CARROT") ? "You win this time, Batman..." : "\x1B[32mYOU LOSE, BATMAN! YOU ARE A FOOL!";
                Console.WriteLine(shorthand);
            }
            do {
                Console.WriteLine("Go again? [Y or N]");
                retry = Console.ReadLine();
                retry = retry.ToUpper();

                if (retry == "Y"){ 
                loop = true; loop2 = false;
            }
            else if (retry == "N"){
                loop = false; loop2 = false;
            }
            else 
                loop2 = true;
            } while(loop2);
        } while(loop);
    }
}
