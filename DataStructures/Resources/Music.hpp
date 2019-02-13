//
//  Music.hpp
//  DataStructures
//
//  Created by Cody Henrichsen on 1/29/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Music_hpp
#define Music_hpp

#include <string>
#include <cmath>
#include <sstream> //String as stream
using namespace std;
class Music
{
private:
    double artist_hotttnesss;
    string artist_id;
    string artist_name;
    string artist_mbtags;
    double artist_mbtags_count;
    double bars_confidence;
    double bars_start;
    double beats_confidence;
    double beats_start;
    double duration;
    double end_of_fade_in;
    double familiarity;
    int key;
    double key_confidence;
    double latitude;
    string location;
    double longitude;
    double loudness;
    int mode;
    double mode_confidence;
    int release_id;
    string release_name;
    string similar;
    double song_hotttnesss;
    string song_id;
    double start_of_fade_out;
    double tatums_confidence;
    double tatums_start;
    double tempo;
    string terms;
    double terms_freq;
    int time_signature;
    double time_signature_confidence;
    string title;
    int year;
    
public:
    Music();
    Music(string data);
    //Getters
    double getArtist_hotttnesss() const;
    string getArtist_id() const;
    string getArtist_name() const;
    string getArtist_mbtags() const;
    double getArtist_mbtags_count() const;
    double getBars_confidence() const;
    double getBars_start() const;
    double getBeats_confidence() const;
    double getBeats_start() const;
    double getDuration() const;
    double getEnd_of_fade_in() const;
    double getFamiliarity() const;
    int getKey() const;
    double getKey_confidence() const;
    double getLatitude() const;
    string getLocation() const;
    double getLongitude() const;
    double getLoudness() const;
    int getMode() const;
    double getMode_confidence() const;
    int getRelease_id() const;
    string getRelease_name() const;
    string getSimilar() const;
    double getSong_hotttnesss() const;
    string getSong_id() const;
    double getStart_of_fade_out() const;
    double getTatums_confidence() const;
    double getTatums_start() const;
    double getTempo() const;
    string getTerms() const;
    double getTerms_freq() const;
    int getTime_signature() const;
    double getTime_signature_confidence() const;
    string getTitle() const;
    int getYear() const;
    
    bool operator == (const Music & compared);
    bool operator < (const Music & other);
    bool operator > (const Music & other);
    
    friend ostream & operator << (ostream & outputStream, const Music & outputData);
};



#endif /* Music_hpp */
