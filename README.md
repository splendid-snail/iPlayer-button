# iPlayer-button
An ATtiny85-based single-button remote for a Hisense TV. This does one thing only: automatically sends the right combination of button presses to load the iPlayer app, something which takes an arduous FOUR button presses on the OEM remote. 

There's a 1-second delay after the first IR signal is sent. This is because the load time for the TV's app menu screen can vary. Sometimes it's instantaneous; sometimes it takes, well, a second. My solution is a bit of a kludge but it's the best I've found - although it does mean you have to keep the remote pointed at the TV for at least a second after pressing the button. 

OSCCAL value is for my particular ATtiny. Yours will no doubt vary - although I'm not sure it's critical for this project to include OSCCAL at all. 

In the unlikely event that you'd like to see a circuit schematic for this, hmu. 
