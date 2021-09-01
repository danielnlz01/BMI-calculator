#include <iostream>

using namespace std;

double height, bmi, weight;
string texto; 

int main() 
{
  cout << "Enter your weight: ";
  cin >> weight;
  
  cout << "Enter your height: ";
  cin >> height;
  
  bmi = weight / (height * height);
  
  cout << "Your BMI is: " << bmi << endl;
  
  if (bmi <= 18.5)
  {
  	cout << "Your are underweight!" << endl; 
  }
  else if ((bmi > 18.5) && (bmi <= 25.0))
 	{
 		cout << "You are healthy!" << endl;
 	}
 	else if ((bmi >= 25.0) && (bmi <= 30))
 	{
 		cout << "You are overweight!" << endl;
  }
  else
  {
  	cout << "You are obese!" << endl;
  }
  
  return 0;
}