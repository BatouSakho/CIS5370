# CIS5370
<b>Ping of Death</b> 

______________________________________________________________________________________

Description

The main objective of this project is to overflow an IP address to the point that it gets deemed unusable. We use various methods of doing so in our project code. The user is given the option to get the target IP from the current system by running the linux command ifconfig directly in the program through selection. Also, they have the option to flood the target IP using the -f flag, or just ping using a bigger packet size by the flag -s and byte size.  While the target is being attacked, we analyze the logs generated and see if it has any effect on the network.

Technologies
	•		Linux Operating System 
	•	           GCC compiler
	•	           Wireshark 

______________________________________________________________________________________

<b>How To Use</b>

Installations

This project needs the user to be running on a Linux machine, preferably the Seed or Linux distro. Seed and the 14.04 package of Ubuntu already has Wireshark preinstalled. If using Ubuntu, and Wireshark is not installed, in the terminal run the following commands:

						sudo add-apt -repository ppt:wireshark-dev /stable
						sudo apt update
						sudo apt install wireshark 

GCC is already preinstalled in Ubuntu, so no worries there.

Steps to run the program 


	•	Open terminal to the folder that the C program is located in
	⁃	Compile by running
				⁃ gcc  dosattack.c  -o compiledname  (Whatever you choose)
	⁃	Once compiled, we run the executable by
	                        ⁃ ./compiledname

The user is given a Main Menu where they are to select a number from 0 to 5. The last option, 5, exits the program.
	
	-Option 0 allows the user to during execution, run the command to see available IP addresses of the current machine, and gather the IP to target.
	-Option 1 allows the user to input whatever IP of their liking as the target of a continuous ping.
	-Option 2 allows the user to input whatever IP of their liking as the target where the machine floods IP with pings.
	-Option 3 allows the user input whatever IP and size of packet( 0-65535) to target that can lead to easier fragmentation.
	-Option 4 pings the IP address 172.10.0.1 as the target. (This is our target IP for the simulation in the presentation)
	-Option 5 has the program exit.

** Note that if the program is running from user options 1-4, they can only exit by force quitting (^c)**

If the user chooses to exit with  ^c,  they will see the data of the transmissions (packet loss percentage, etc.)

Aside from the above method of seeing the data, we can use Wireshark to see the visual representation of the packet traffic.  For our presentation we use filters and the Expert Information tool for exact figures

___________________________________________________________________________________________




