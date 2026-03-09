#include <iostream>
#include <vector>
#include <string>
using namespace std;


string song_name()
{
    cout << "Please enter song name, then press enter: ";
    string song_name = "";
    getline(cin, song_name);
    return song_name;
}

string artst_name()
{
    cout << "Please enter artist name, then press enter: ";
    string artst_name = "";
    getline(cin, artst_name);
    return artst_name;
}

int song_length()
{
    cout << "Please enter song length in seconds, then press enter: ";
    int length = 0;
    cin >> length;
    return length;
}

int playlist_length(vector<int> song_lengths)
{
    int list_length=0;
    for (int i=0; i < song_lengths.size(); i++)
    {
        list_length += song_lengths[i];
    }
    return list_length;
}

int longest(vector<int> song_lengths)
{
    int longest = 0;
    int longref = 0;
    for(int i=0; i < song_lengths.size(); i++)
    {
        if (song_lengths[i] > longest)
        {
            longest = song_lengths[i];
            longref = i;
        }
    }
    return longref;    
}

int shortest(vector<int> song_lengths)
{
    int shortest = 0xFFFF;
    int shortref = 0;
    for(int i=0; i < song_lengths.size(); i++)
    {
        if (song_lengths[i] < shortest)
        {
            shortest = song_lengths[i];
            shortref = i;
        }
    }
    return shortref;  
}


int main()
{
    string cont = "y";
    vector<string> songnames;
    vector<string> artists;
    vector<int> song_lengths;
    while (cont == "y")
    {
        songnames.push_back(song_name());
        artists.push_back(artst_name());
        song_lengths.push_back(song_length());

        cout << "Do you want to enter another song? y/n" << endl;
        cin >> cont;
        cin.ignore();
    }

    cout << "Total playlist length is " << playlist_length(song_lengths) << endl;
    cout << "Longest song is " << songnames[longest(song_lengths)] << endl;
    cout << "Shortest song is " << songnames[shortest(song_lengths)] << endl;
    cout << "Playlist:" << endl;
    
    for (int i=0; i<songnames.size(); i++)
    {
        cout << "- " << songnames[i] << " by " << artists[i] << endl;
    }

    return 0;
}
