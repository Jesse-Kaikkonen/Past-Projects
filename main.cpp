/*
 * Created by Jesse Kaikkonen
 */
#include <iostream>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string playlistTitle) {

    cout << playlistTitle << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl << endl;

}

PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
    if (option == 'a') {
        headNode->AddSong();


    } else if (option == 'd') {
        string id;
        cout << "REMOVE SONG" << endl;
        cout << "Enter song's unique ID:" << endl;
        cin >> id;
        headNode -> RemoveSong(id);
        cout << endl;

    } else if (option == 'c') {
        int oldPos = -1;
        int newPos = -1;
        cout << "CHANGE POSITION OF SONG" << endl;
        cout << "Enter song's current position:" << endl;
        cin >> oldPos;
        cout << "Enter new position for song:" << endl;
        cin >> newPos;
        headNode -> ChangePosition(oldPos, newPos);
        cout << endl;

    } else if (option == 's') {
        string artist;
        cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
        cout << "Enter artist's name:" << endl << endl;
        cin.ignore();
        getline(cin, artist);
        headNode -> OutputSongsSpecificArtist(artist);


    } else if (option == 't') {
        cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
        headNode -> OutputTotalTime();
        cout << endl;

    } else if (option == 'o') {
        headNode -> OutputFullPlaylist(playlistTitle);

    }

    PrintMenu(playlistTitle);
    return headNode;
}



int main() {

    string title;
    char option;

    cout << "Enter playlist's title:" << endl;
    getline(cin, title);
    PlaylistNode* myPlaylist = new PlaylistNode();
    cout << endl;



    PrintMenu(title);


    while (option != 'q'){

        cout << "Choose an option:" << endl;
        cin >> option;
        if (option == 'a' || option == 'd' || option == 'c' || option == 's' || option == 't' || option == 'o') {
            ExecuteMenu(option, title, myPlaylist);
        }
    }
    return 0;
}
