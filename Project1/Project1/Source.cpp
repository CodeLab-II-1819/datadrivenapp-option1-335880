#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int queries;
	ifstream infile;
	size_t num;
	string tweet;
	int wordCount = 0;

	infile.open("sampleTweets.txt");

	cout << "what queries do you have?" << endl;
	cout << "Please enter the number of the queries" << endl;
	cout << "1.the total number of tweets in the data set" << endl;
	cout << "2.the number of tweets that mention the word money" << endl;
	cout << "3.the number of tweets that mention politics" << endl;
	cout << "4.Print to the screen any tweets mentioning the word ¡§Paris¡¨" << endl;
	cout << "5.Print to the screen any tweets mentioning the word ¡§DreamWorks¡¨" << endl;
	cout << "6.Print to the screen any tweets mentioning the word ¡§Uber¡¨" << endl;
	cout << "7.Print to the screen any tweets mentioning the word ¡§Food¡¨" << endl;
	cout << "8.Print to the screen any tweets mentioning the word ¡§Computer¡¨" << endl;
	cout << "9.Print to the screen any tweets mentioning the word ¡§Youtube¡¨" << endl;
	cout << "10.Print to the screen any tweets mentioning the word ¡§Facebook¡¨" << endl;
	cin >> queries;

	if (queries == 1)
	{
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				wordCount++;
			}
			cout << "The total number of tweets in the data set are " << wordCount << endl;
		}
	}
	
	else if (queries == 2)
	{
		string findWord = "money";
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				num = tweet.find(findWord);
				if (num != string::npos)
				{
					wordCount++;
				}
			}
		}
		cout << findWord << " appeared " << wordCount << " times." << endl;
	}
	else if (queries == 3)
	{
		string findWord = "politics";
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				num = tweet.find(findWord);
				if (num != string::npos)
				{
					wordCount++;
				}
			}
		}
		cout << findWord << " appeared " << wordCount << " times." << endl;
	}
	else if (queries == 4)
	{
		string findWord = "Paris";
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				num = tweet.find(findWord);
				if (num != string::npos)
				{
					cout << tweet << " " << endl;
					wordCount++;
				}
			}
		}
	}
	else if (queries == 5)
	{
		string findWord = "DreamWorks";
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				num = tweet.find(findWord);
				if (num != string::npos)
				{
					cout << tweet << " " << endl;
					wordCount++;

				}
			}
		}
	}
	else if (queries == 6)
	{
		string findWord = "Uber";
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				num = tweet.find(findWord);
				if (num != string::npos)
				{
					cout << tweet << " " << endl;
					wordCount++;

				}
			}
		}
	}
	else if (queries == 7)
	{
		string findWord = "Food";
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				num = tweet.find(findWord);
				if (num != string::npos)
				{
					cout << tweet << " " << endl;
					wordCount++;

				}
			}
		}
	}
	else if (queries == 8)
	{
		string findWord = "Computer";
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				num = tweet.find(findWord);
				if (num != string::npos)
				{
					cout << tweet << " " << endl;
					wordCount++;

				}
			}
		}
	}
	else if (queries == 9)
	{
		string findWord = "Youtube";
		if (infile.is_open())
		{
			while (getline(infile, tweet))
			{
				num = tweet.find(findWord);
				if (num != string::npos)
				{
					cout << tweet << " " << endl;
					wordCount++;

				}
			}
		}
	}
	else if (queries == 10)
	{
	string findWord = "Facebook";
	if (infile.is_open())
	{
		while (getline(infile, tweet))
		{
			num = tweet.find(findWord);
			if (num != string::npos)
			{
				cout << tweet << " " << endl;
				wordCount++;

			}
		}
	}
	}
	
	system("pause");
}

