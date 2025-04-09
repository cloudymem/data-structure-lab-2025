#include "Music.h"

int main()
{
	//music streaming service 생성
	MusicstreamingService my_service("Spotify");
	my_service.addMusic("Happy ending", "Mika", "Flower", 2014);
	my_service.addMusic("Finder", "Mika", "Water", 2011);

	// search music by title
	string music_title;
	cout << "Enter music title: ";
	cin >> music_title;
	Music* result = my_service.searchbyTitle(music_title);
		if(result != NULL)
		{
			cout << "FOUND: " << result->getTitle() << "by" << result->getArtist() << endl;
		}
		else
		{
			cout << "NOT FOUND" << endl;
		}

}