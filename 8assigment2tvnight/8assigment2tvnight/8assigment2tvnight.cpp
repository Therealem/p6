// 8assigment2tvnight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Exacue Mukadi
//Tarran county college
//Fall 2025
//8assigment2tvnight

#include <iostream>
#include <string>

using namespace std;

void cookPopcorn();
void turnOffTV();
void seeWhatIsOnYouTube();
void findTVRemoteControl();
void prepareForSleep();
void turnOnTV();
void seeWhatIsOn(string channelName);

void cookPopcorn()
{
    cout << "Cook Popcorn." << endl;
}

void turnOffTV()
{
    cout << "Turn off TV" << endl;
}

void seeWhatIsOnYouTube()
{
    cout << "See what is on YouTube." << endl;
    // I watch North Korean videos.
}

void findTVRemoteControl()
{
    cout << "Find the TV Remote Control." << endl;
}

void prepareForSleep()
{
    cout << "Prepare for sleep." << endl;
}

void turnOnTV()
{
    cout << "Turn on TV." << endl;
}

void seeWhatIsOn(string channelName)
{
    cout << "See what is on " << channelName << "." << endl;
}

int main()
{
    cout << "\n--- Evening TV Watching Events ---\n" << endl;

    findTVRemoteControl();
    turnOnTV();

    seeWhatIsOn("Netflix");
    cookPopcorn();

    seeWhatIsOnYouTube();
    seeWhatIsOn("Disney+");

    turnOffTV();
    prepareForSleep();

    cout << "\n--- Evening Complete ---\n" << endl;

    return 0;
}