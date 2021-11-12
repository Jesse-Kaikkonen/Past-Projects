/*
 * Created by Jesse Kaikkonen
 */

#ifndef LAB7_FINAL_PLAYLISTNODE_H
#define LAB7_FINAL_PLAYLISTNODE_H


class PlaylistNode {
public:
    PlaylistNode();
    PlaylistNode(std::string, std::string, std::string, int);
    void InsertAfter(PlaylistNode*);
    void SetNext(PlaylistNode*);
    std::string GetID();
    std::string GetSongName();
    std::string GetArtistName();
    int GetSongLength();
    PlaylistNode * GetNext();
    void AddSong();
    void RemoveSong(std::string);
    void ChangePosition(int, int);
    void OutputSongsSpecificArtist(std::string);
    void OutputFullPlaylist(std::string);
    void OutputTotalTime();
    void PrintPlaylistNode();
private:
    std::string uniqueID;
    std::string songName;
    std::string artistName;
    int songLength;
    PlaylistNode * nextNodePtr;
    PlaylistNode* head;
    PlaylistNode* tail;


};


#endif //LAB7_FINAL_PLAYLISTNODE_H
