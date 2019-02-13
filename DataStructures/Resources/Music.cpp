//
//  Music.cpp
//  DataStructures
//
//  Created by Cody Henrichsen on 1/29/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Music.hpp"

Music :: Music()
{}

Music :: Music(string data)
{
    stringstream parseCSV(data);
    
    string artist_hotttnesss, artist_id,    artist_name, artist_mbtags,    artist_mbtags_count,    bars_confidence,    bars_start,    beats_confidence,    beats_start,    duration,    end_of_fade_in,    familiarity,    key,    key_confidence,    latitude,    location,    longitude,    loudness,    mode,    mode_confidence,    release_id,    release_name,    similar,    song_hotttnesss,    song_id,    start_of_fade_out,    tatums_confidence,    tatums_start,    tempo,    terms,    terms_freq,    time_signature,    time_signature_confidence,    title,    year;
    
    getline(parseCSV, artist_hotttnesss, ',');
    getline(parseCSV, artist_id, ',');
    getline(parseCSV, artist_name, ',');
    getline(parseCSV, artist_mbtags, ',');
    getline(parseCSV, artist_mbtags_count, ',');
    getline(parseCSV, bars_confidence, ',');
    getline(parseCSV, bars_start, ',');
    getline(parseCSV, beats_confidence, ',');
    getline(parseCSV, beats_start, ',');
    getline(parseCSV, duration, ',');
    getline(parseCSV, end_of_fade_in, ',');
    getline(parseCSV, familiarity, ',');
    getline(parseCSV, key, ',');
    getline(parseCSV, key_confidence, ',');
    getline(parseCSV, latitude, ',');
    getline(parseCSV, location, ',');
    getline(parseCSV, longitude, ',');
    getline(parseCSV, loudness, ',');
    getline(parseCSV, mode, ',');
    getline(parseCSV, mode_confidence, ',');
    getline(parseCSV, release_id, ',');
    getline(parseCSV, release_name, ',');
    getline(parseCSV, similar, ',');
    getline(parseCSV, song_hotttnesss, ',');
    getline(parseCSV, song_id, ',');
    getline(parseCSV, start_of_fade_out, ',');
    getline(parseCSV, tatums_confidence, ',');
    getline(parseCSV, tatums_start, ',');
    getline(parseCSV, tempo, ',');
    getline(parseCSV, terms, ',');
    getline(parseCSV, terms_freq, ',');
    getline(parseCSV, time_signature, ',');
    getline(parseCSV, time_signature_confidence, ',');
    getline(parseCSV, title, ',');
    getline(parseCSV, year, ',');
    
    this->artist_hotttnesss = (stod(artist_hotttnesss));
    this->artist_id = artist_id;
    this->artist_name = artist_name;
    this->artist_mbtags = artist_mbtags;
    this->artist_mbtags_count = (stod(artist_mbtags_count));
    this->bars_confidence = (stod(bars_confidence));
    this->bars_start = (stod(bars_start));
    this->beats_confidence = (stod(beats_confidence));
    this->beats_start = (stod(beats_start));
    this->duration = (stod(duration));
    this->end_of_fade_in = (stod(end_of_fade_in));
    this->familiarity = (stod(familiarity));
    this->key = (stoi(key));
    this->key_confidence = (stod(key_confidence));
    this->latitude = (stod(latitude));
    this->location = location;
    this->longitude = (stod(longitude));
    this->loudness = (stod(loudness));
    this->mode = (stoi(mode));
    this->mode_confidence = (stod(mode_confidence));
    this->release_id  = (stoi(release_id));
    this->release_name = release_name;
    this->similar = similar;
    this->song_hotttnesss = (stod(song_hotttnesss));
    this->song_id = (song_id);
    this->start_of_fade_out = (stod(start_of_fade_out));
    this->tatums_confidence = (stod(tatums_confidence));
    this->tatums_start = (stod(tatums_start));
    this->tempo = (stod(tempo));
    this->terms = terms;
    this->terms_freq = (stod(terms_freq));
    this->time_signature = (stoi(time_signature));
    this->time_signature_confidence =  (stod(time_signature_confidence));
    this->title = title;
    this->year = (stoi(year));
}

bool Music :: operator < (const Music & compared)
{
    bool isThisLess = (this->artist_hotttnesss < compared.getArtist_hotttnesss()) && (this->song_hotttnesss < compared.song_hotttnesss);
    
    return isThisLess;
}

bool Music :: operator > (const Music & compared)
{
    bool isThisMore = (this->artist_hotttnesss > compared.getArtist_hotttnesss()) && (this->song_hotttnesss > compared.song_hotttnesss);
    
    return isThisMore;
}

bool Music :: operator == (const Music & compared)
{
    bool isThisTheSame = (this->artist_id == compared.artist_id) && (this->title == compared.title);
    
    return isThisTheSame;
}

double Music:: getArtist_hotttnesss() const
{
    return artist_hotttnesss;
}
string  Music :: getArtist_id() const
{
    return artist_id;
}

string Music:: getArtist_name() const
{
    return artist_name;
}
string Music::getArtist_mbtags() const
{
    return artist_mbtags;
}
double Music:: getArtist_mbtags_count() const
{
    return artist_mbtags_count;
}
double Music:: getBars_confidence() const
{
    return bars_confidence;
}
double Music :: getBars_start() const
{
    return bars_start;
}
double Music :: getBeats_confidence() const{   return  beats_confidence; }
double Music :: getBeats_start() const{   return  beats_start; }
double Music :: getDuration() const{   return  duration; }
double Music :: getEnd_of_fade_in() const{   return  end_of_fade_in; }
double Music :: getFamiliarity() const{   return  familiarity; }
int Music :: getKey() const{   return  key; }
double Music :: getKey_confidence() const{   return  key_confidence; }
double Music :: getLatitude() const{   return  latitude; }
string Music :: getLocation() const{   return  location; }
double Music :: getLongitude() const{   return  longitude; }
double Music :: getLoudness() const{   return  loudness; }
int Music :: getMode() const{   return  mode; }
double Music :: getMode_confidence() const{   return  mode_confidence; }
int Music :: getRelease_id() const{   return  release_id; }
string Music :: getRelease_name() const{   return  release_name; }
string Music :: getSimilar() const{   return  similar; }
double Music :: getSong_hotttnesss() const{   return  song_hotttnesss; }
string Music :: getSong_id() const{   return  song_id; }
double Music :: getStart_of_fade_out() const{   return  start_of_fade_out; }
double Music :: getTatums_confidence() const{   return  tatums_confidence; }
double Music :: getTatums_start() const{   return  tatums_start; }
double Music :: getTempo() const{   return  tempo; }
string Music :: getTerms() const{   return  terms; }
double Music :: getTerms_freq() const{   return  terms_freq; }
int Music :: getTime_signature() const{   return  time_signature; }
double Music :: getTime_signature_confidence() const{   return  time_signature_confidence; }
string Music :: getTitle() const{   return  title; }
int Music :: getYear() const{   return  year; }

ostream & operator << (ostream &outputStream, const Music & outputData)
{
    return outputStream << outputData.getSong_id() << " is the song " << outputData.getArtist_id() << " is the artist from " << outputData.getYear() << endl;;
}
