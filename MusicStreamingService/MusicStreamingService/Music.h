#pragma once
#include <iostream> //input/outpun
#include <string>   // 문자열
#include <vector>   // STL vector

using namespace std; //namespace를 std로 정의(std생략가능) 

class Music
{
private:
	string title;
	string artist;
	string album;
	int year;

public:
	Music(string title, string artist, string album, int year)
	{
		this->title = title; // this가 가르키는 것이 멤버변수임
		this->artist = artist;
		this->album = album;
		this->year = year;
	}

	//Getters
	string getTitle()
	{
		return title;
	}
	string getArtist()
	{
		return artist;
	}
	string getAlbum()
	{
		return album;
	}
	int getYear()
	{
		return year;
	}
	char myMusic;
};

class MusicstreamingService
{
private:
	string service_name;
	vector<Music> music_list;

public:
	// 생성자
	MusicstreamingService(string service_name)
	{
		this->service_name = service_name;
	}
	// 음악 추가 기능
	void addMusic(string title, string artist, string album, int year)
	{
		Music new_music(title, artist, album, year);
		music_list.push_back(new_music);
		cout << title << "by" << artist << "added to" << service_name << endl;
	}
	// 음악찾아주는 서비스(Title)
	Music* searchbyTitle(string title) 
	{
		for(int i = 0; i < music_list.size(); i++)
		{
			if (music_list[i].getTitle() == title)
			{
				return &music_list[i]; //music_list는 Music 형을 가지는 vector 따라서 vector의 값을 반환하기 위해 주소값을 반환
									   //&music_list[i] = music_list + i
			}
		}
		return NULL;
	}
	// 음악찾아주는 서비스(Artist)
	Music* searchbyArtist(string artist)
	{
		for (int i = 0; i < music_list.size(); i++)
		{
			if (music_list[i].getArtist() == artist)
			{
				return &music_list[i];
			}
			return NULL;
		}
	}

};
