#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <curl/curl.h>
#include <libxml/parser.h>

/*
 * Current list of dependencies:
 * https://archlinux.org/packages/core/x86_64/libxml2/
 * https://archlinux.org/packages/core/x86_64/libcurl-gnutls/
 *
 */

/*
 * I am going to layout what I need to do in order for this program to work. I will need a 
 * database with shows uploaded to it. Most I have seen use an xml parser, so I will need
 * one of those as well. Once I have the list of shows downloaded, I will need to search 
 * through the list to find the shows that I want to download, specified in a seperate file. 
 * It will probably be easiest if I make a struct to hold all of the information I need. Then 
 * I will pass over the data to deluge or another program to download the show. 
 * I am going to use doxygen for function documentation. 
 */

char url[50]; 
char file_name[50];

struct show_information {
	char[100] show_title;
	char[200] torrent_name;
	char[200] subtitles;
	time_t current_date;
};

/**
 * A brief description. A more elaborate class description
 * @param bool somebool a boolean argument.
 * @see Test()
 * @return The test results
 */
struct show_information download_and_extract_xml(url,file_name);

/**
 * A brief description. A more elaborate class description
 * @param bool somebool a boolean argument.
 * @see Test()
 * @return The test results
 */
void create_torrent_file(show_information);
