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

	char myMusic;

};

class MusicstreamingService()
{
	// 음악추가 기능
	
	// 음악찾아주는 서비스
	

}
