#include <iostream>

void PrintIntro()
{
 std:: cout << "\nYou are a secret agent breaking into a secure server room\n You will need to enter the correct codes to continue\n\n";
}

void PlayGame()
{
  PrintIntro()

  const int CodeA = 0;
  const int CodeB = 1;
  const int CodeC = 2;

  const int sum = a+b+c;
  const int product = a*b*c;

  std::cout << "Each code will have three numbers\n";
  std::cout << "The codes sum is: ";
  std::cout << "\nThe codes product is: " << product <<std::endl;


  int GuessA, GuessB, GuessC;
  std::cin >> GuessA >> GuessB >> GuessC;
  
  int GuessSum = GuessA+GuessB+GuessC;
  int GuessProd = GuessA*GuessB*GuessC;

  if(GuessSum == sum && GuessProd == product) 
  {
    std::cout << "\nYou guessed correctly! ;D";
  }
  else {
    std::cout << "\nYou guessed incorrectly! :'("
  }
}

int main()
{
  while()
  {
    PlayGame()
    std::cin.clear();
    std::cin.ignore();
  }
    return 0;
}
