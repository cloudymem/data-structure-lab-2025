#include "Music.h"

int main()
{
	//music streaming service 생성
	MusicstreamingService my_service("Spotify");
	my_service.addMusic("Happy ending", "Mika", "Flower", 2014);
	my_service.addMusic("Finder", "Mika", "Water", 2011);
	my_service.addMusic("Sugar", "Maroon5", "Album", 2001);


	//add music by user 직접 해보기
	Music service
	cout << "title :" << endl;
	cin >> service.title;
	cout << "artist" << endl;
	cin >> service.artist;
	cout << "album" << endl;
	cin >> service.album;
	cout >> "year" >> endl;
	cin >> service.year


		// search music by title
	string music_title;
	cout << "Enter music title: ";
	cin >> music_title;
	Music* result = my_service.searchbyTitle(music_title);
	if (result != NULL)
	{
		cout << "FOUND: " << result->getTitle() << "by" << result->getArtist() << endl;
	}
	else
	{
		cout << "NOT FOUND" << endl;
	}

	//search music by artist
	string artist_name;
	cout << "Enter artist name" << endl;
	cin >> artist_name;
	vector<Music*> artist_result = my_service.searchbyArtist(artist_name);
	if (artist_result.size() > 0)
	{
		cout << "found" << artist_result.size() << "song by" << artist_name << ":" << endl;
		for (int i = 0; i < artist_result.size(); i++)
		{
			cout << artist_result[i]->getTitle() << endl;
		}
	}

	//음악찾아주는 서비스(Artist)
	vector<Music*> searchByArtist(string Artist);
	{
		vector<Music*> result;
		for (int i = 0; i < music_list.size(); i++)
		{
			if (music_list[i].getArtist() == Artist)
			{
				result.push_back(&music_list[i]); // result는 vector<Music*>로 선언됨, result의 인덱스 각각이 <Music*>
												  // &music_list[i] = music + i이다.
			}
		}
		return result;
	}


}