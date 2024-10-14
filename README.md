# autocode
This program will download files, transcode them into av1, and move it to another location

This program is going to run in three parts. I am going to first download the media
from a website or just use a file locally available. Next, I am going to gather some 
information about the file like video encoding and audio encoding and pass that information
to ffmpeg to transcode the video codec to av1, while keeping the same audio codec and 
optional subtitle file. Lastly, I am going to transfer the file to my home NAS or any other 
location specified.
