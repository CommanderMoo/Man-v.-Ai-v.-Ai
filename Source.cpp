
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	//seed random number generator
	srand(static_cast<unsigned int>(time(0)));
//************************************************
	//sets Human grid
	int Human_searchGridLowNumber = 1;
	int Human_searchGridHighNumber = 64;

	//sets Ai binary grid
	int Ai_binary_searchGridLowNumber = 1;
	int Ai_binary_searchGridHighNumber = 64;

	//sets Ai Linear grid
	int Ai_linear_searchGridLowNumber = 1;
	int Ai_linear_searchGridHighNumber = 64;

	//sets Random grid
	int Ai_random_searchGridLowNumber = 1;
	int Ai_random_searchGridHighNumber = 64;
//************************************************
	//sets Human prediction
	int Human_number_of_predictions = 0;
	int Human_current_location_prediction = 0;

	//sets Ai_binary prediction
	int Ai_binary_number_of_predictions = 0;
	int Ai_binary_current_location_prediction = 0;

	//sets Ai_linear prediction
	int Ai_linear_number_of_predictions = 0;
	int Ai_linear_current_location_prediction = 0;

	//sets Ai_random prediction
	int Ai_random_number_of_predictions = 0;
	int Ai_random_current_location_prediction = 0;
//************************************************
	//set to search between 1 & 64
	int actualTargetLocation = rand() % Ai_binary_searchGridHighNumber + Ai_binary_searchGridLowNumber;

	//title for program
	cout << "\n\n\ Drone Hunter \n\n";
//*************** Human Start ********************
	do
	{
		//target location
		cout << "\n Find the target location.\n";
		cout << "\n Enter a predicted target location (" << Human_searchGridLowNumber << "-" << Human_searchGridHighNumber << ") : ";
		cin >> Human_current_location_prediction;
		++Human_number_of_predictions;

		//if guess is too high
		if (Human_current_location_prediction > actualTargetLocation)
		{
			cout << "The Human prediction missed because it was too high. Try Again. \n\n";
			Human_searchGridHighNumber = Human_current_location_prediction - 1;
		}

		//if guess is too low
		else if (Human_current_location_prediction < actualTargetLocation)
		{
			cout << "The Human prediction missed becuase it was too low. Try Again. \n\n";
			Human_searchGridLowNumber = Human_current_location_prediction + 1;
		}

		//if guess is correct
		else
		{
			cout << "\n Target marked. Achieved in " << Human_number_of_predictions << " attempts. \n";
		}

		//if correct move on
	} while (Human_current_location_prediction != actualTargetLocation);
//************** Human End ***********************

	cout << "\n\n Human trials complete, begin Binary tests ";
	system("Pause");

//*************** AI Binary Start ****************
	do
	{
		//target location
		cout << "\n Target location is " << actualTargetLocation << endl;

		//systems guessing system
		cout << "\n Ai Binary predicts target is at " << Ai_binary_current_location_prediction << endl;
		Ai_binary_current_location_prediction = (Ai_binary_searchGridHighNumber - Ai_binary_searchGridLowNumber) / 2 + Ai_binary_searchGridLowNumber;
		++Ai_binary_number_of_predictions;

		//if guess is too high
		if (Ai_binary_current_location_prediction > actualTargetLocation)
		{
			cout << "The Ai Binary prediction missed because it was too high. Try Again. \n\n";
			Ai_binary_searchGridHighNumber = Ai_binary_current_location_prediction - 1;
		}

		//if guess is too low
		else if (Ai_binary_current_location_prediction < actualTargetLocation)
		{
			cout << "The Ai Binary prediction missed because it was too low. Try Again. \n\n";
			Ai_binary_searchGridLowNumber = Ai_binary_current_location_prediction + 1;
		}

		//if guess is correct
		else
		{
			cout << "\n Binary Target marked. Achieved in " << Ai_binary_number_of_predictions << " attempts. \n";
		}

		//if correct move on
	} while (Ai_binary_current_location_prediction != actualTargetLocation);
//***************** Ai Binary End ****************

	cout << "\n\n Ai Binary test complete, begin launch Ai Linear search ";
	system("Pause");

//**************** Ai Linear Start ***************
	do
	{
		//target location
		cout << "\n Target location is " << actualTargetLocation << endl;
		Ai_linear_current_location_prediction++;

		//systems guessing system
		cout << "\n Ai Linear predicts target is at " << Ai_linear_current_location_prediction << endl;
		Ai_linear_number_of_predictions++;

		//if guess is too high
		if (Ai_linear_current_location_prediction > actualTargetLocation)
		{
			cout << "The Ai Linear prediction missed because it was too high. Try Again. \n\n";
			Ai_linear_searchGridHighNumber = Ai_linear_current_location_prediction - 1;
		}

		//if guess is too low
		else if (Ai_linear_current_location_prediction < actualTargetLocation)
		{
			cout << "The Ai Linear prediction missed because it was too low. Try Again. \n\n";
			Ai_linear_searchGridLowNumber = Ai_linear_current_location_prediction + 1;
		}

		//if guess is correct
		else
		{
			cout << "\n Linear Target marked. Achieved in " << Ai_linear_number_of_predictions << " attempts. \n";
		}

		//if correct move on
	} while (Ai_linear_current_location_prediction != actualTargetLocation);
//***************** Ai Linear End ****************

	cout << "\n\n Ai Linear search complete, attempting to Randomize ";
	system("Pause");

//**************** Ai Random Start ***************
	do
	{
		//systems guessing system
		cout << "\n Target Location is " << Ai_random_current_location_prediction << endl;
		Ai_random_current_location_prediction++;

		//
		cout << "\n Ai Random predicts target is at " << Ai_random_current_location_prediction << endl;
		Ai_random_number_of_predictions++;

		//if guess is too high
		if (Ai_random_current_location_prediction > actualTargetLocation)
		{
			cout << "The Ai Random prediction missed because it was too high. Try Again. \n\n";
			Ai_random_searchGridHighNumber = Ai_random_current_location_prediction - 1;
		}

		//if guess is too low
		else if (Ai_random_current_location_prediction < actualTargetLocation)
		{
			cout << "The Ai Random prediction missed because it was too low. Try Again. \n\n";
			Ai_random_searchGridLowNumber = Ai_random_current_location_prediction + 1;
		}

		//if guess is correct
		else
		{
			cout << "\n Random Target marked. Achieved in " << Ai_random_number_of_predictions << " attempts. \n";
		}

		//if correct move on
	} while (Ai_random_current_location_prediction != actualTargetLocation);
//***************** Ai Random End ****************

	cout << " *** Results *** \n\n";
	cout << "Human tests: " << Human_number_of_predictions << " attempts." << endl;
	cout << "Ai Binary tests: " << Ai_binary_number_of_predictions << " attempts." << endl;
	cout << "Ai Linear tests : " << Ai_linear_number_of_predictions << " attempts." << endl;
	cout << "Ai Random tests : " << Ai_random_number_of_predictions << " attempts." << endl;

	//return display
	return 0;
}

