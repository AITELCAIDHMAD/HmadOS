#include "../include/function.h"
//help procudure okay
void help(){
	  	 print("\n\n\tHmadOS bash, version 1.0-release (x86-pc-HmadOS)");
	  	 print("\n\tThese shell commands are defined internally.Type help to see this list.");
		 print("\n\tType help name to find out more about the function name.");
		 print("\n\tUse info bash to find out more about the shell in general.");
		 print("\n\tUse man to find out more about commands not in this list.");
		 print("\n\n\tA star (*) next to a name means that the command is disabled.");

		 print("\n\n \t help  : this command show you all the commands line that you can use  ");
		 print("\n \t man   : to show information about  the commands that you look for");

		 print("\n \t echo  : this command display what you wrote ");
		 print("\n \t pwd   : this command print the work directory ");
		 print("\n \t history : this command give the last 10 commands entred");

		 //print("\n \t lower : this command change uppercase to lowercase");
		 print("\n \t upper : this command change lowercase to uppercase");
		 print("\n \t split : this command clip a line of string  to array of string\n \t\t using separator");


		 print("\n \t max   : this command give the maximum element in array");
		 print("\n \t min   : this command give the minimum element in array");
		 print("\n \t avg   : this give you the average of liste of number");

		 print("\n");
}

//echo function okay
void echo(){
	 string ch=(string )malloc (300);
   print("   ");
	 ch=readStr(ch);
   print("\n  ");
	 print(ch);
	 print("\n");
}

//pwd function okay
void pwd(){
	print("\n   /home/root\n");
}
//man for echo okay
void man_echo(){
		    print("\n\n NAME \n");
		    print("\t echo - display a line of text \n SYNOPSIS\n");
       	print("\t echo  [STRING]...\n");
        print(" DESCRIPTION \n");
        print("\t Echo the STRING(s) to standard output.\n");
        print(" AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
       	print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
}

//man for echo this one is static now okay
void man_pwd(){
        print("\n\n NAME \n");
        print("\t pwd - print name of current/working directory \n SYNOPSIS\n");
        print("\t pwd \n");
        print(" DESCRIPTION \n");
        print("\t Print the full filename of the current working directory.\n");
        print(" AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
        print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
}

//man for man okay
void man_man(){
        print("\n\n NAME \n");
        print("\t man - an interface to the on-line reference manuals \n SYNOPSIS\n");
        print("\t man command \n");
        print(" DESCRIPTION \n");
        print("\t man is the system's manual pager.  Each page argument given to  man  is normally  the  name of a program, utility or function.  The manual page associated with each of these arguments is then found and displayed.  A section,  if  provided, will direct man to look only in that section of the manual.\n");
        print("\n AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
        print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
}

//man for history okay
void man_history(){
        print("\n\n NAME \n");
        print("\t history - HmadOS History Library \n SYNOPSIS\n");
        print("\t history \n");
        print(" DESCRIPTION \n");
        print("\t The HmadOS History Library is Copyright (C)\n\t 2017-2019 by the Free Software Foundation, Inc.\n");
        print(" AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
        print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
}
//function of max okay
void max(){
int first,i,max,tmp,number;
    print("\n\t Enter the number of elemnts : ");
    string ch=(string )malloc (10);
           ch=readStr(ch);
           number=string_to_int(ch);
           first=0;

           for(i=1;i<=number;i++){
                print("\n\t  Value of element number ");print(int_to_string(i)); print(" : ");
                 ch=readStr(ch);
                 tmp=string_to_int(ch);

                 if(first==0){
                    max=tmp;
                    first++;
                 }

            if(tmp>max) max=tmp;
           }
     print("\n\n\t  >>  the maximum of all number is "); print(int_to_string(max));

}

//function of min okay
void min(){
int first,i,min,tmp,number;
    print("\n\t Enter the number of elemnts : ");
    string ch=(string )malloc (10);
           ch=readStr(ch);
           number=string_to_int(ch);
           first=0;

           for(i=1;i<=number;i++){
                print("\n\t  Value of element number ");print(int_to_string(i)); print(" : ");
                 ch=readStr(ch);
                 tmp=string_to_int(ch);

                 if(first==0){
                    min=tmp;
                    first++;
                 }

            if(tmp<min) min=tmp;
           }
      print("\n\n\t  >>  the minimum of all number is "); print(int_to_string(min));


}
//function of avg       okay
void avg(){
int after,first,i,tmp,number,somme=0,mod;
float tmp1;
    print("\n\t Enter the number of elemnts : ");
    string ch=(string )malloc (10);

           ch=readStr(ch);
           number=string_to_int(ch);
           first=0;

           for(i=1;i<=number;i++){
                print("\n\t  Value of element number ");print(int_to_string(i)); print(" : ");
                 ch=readStr(ch);
                 tmp=string_to_int(ch);
                 somme+=tmp;
           }
           tmp1=somme+0.00;
           tmp1=tmp1/number; after=2;

      print("\n\n\t  >>  the average integer is "); ftoa(tmp1,ch,after) ;print(ch);


}

////function of upper okay
void upper() {
  print("   ");
           string s=(string )malloc (200);
           s=readStr(s);

   int c = 0;

   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
   print("\n\t\t ");print(s);
}


//function of split okay
void split(){
    string ch=(string )malloc (200);
    char c;


      print("\n [separator][space] [string] \n\n");
      print("                ");
      ch=readStr(ch);
      c=ch[0];
 print("\n");

int l=strlength(ch);
int i;

    for(i=2;i<l;i++){

         if(ch[i]==c){
           print("\n");
        }
        else
        printch(ch[i]);
    }
}

//man for min okay
void man_min(){

        print("\n\n NAME \n");
        print("\t min - min give you the minimum of list of number \n SYNOPSIS\n");
        print("\t min \n");
        print(" DESCRIPTION \n");
        print("\t this command  give you the minimum of list of number just you need to \n\t determine the number of elements and get in each  value of \n\t these elements.\n");
        print(" AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
        print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
			  }


//man for max okay
void man_max(){

        print("\n\n NAME \n");
        print("\t max - max give you the maximum of list of number \n SYNOPSIS\n");
        print("\t max \n");
        print(" DESCRIPTION \n");
        print("\t this command  give you the maximum of list of number just you need to \n\t determine the number of elements and get in each  value of \n\t these elements.\n");
        print(" AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
        print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
			  }

//man for avg okay
void man_avg(){
        print("\n\n NAME \n");
        print("\t avg - avg give you the average of list of number \n SYNOPSIS\n");
        print("\t avg \n");
        print(" DESCRIPTION \n");
        print("\t this command  give you the average of list of number just you need to \n\t determine the number of \n\t elements and get in each  value of \n\t these elements.\n");
        print(" AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
        print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
			  }

//man for upper okay
void man_upper(){
        print("\n\n NAME \n");
        print("\t upper - upper convert a string from lowercase to uppercase. \n SYNOPSIS\n");
        print("\t upper [>string]  \n");
        print(" DESCRIPTION \n");
        print("\t this command  upper convert a string from lowercase to uppercase just \n\t you need to get in the string .\n");
        print(" AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
        print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
			  }

//man for split okay
void man_split(){
        print("\n\n NAME \n");
        print("\t split - split a string into array of words \n SYNOPSIS\n");
        print("\t split [separator][space] [string]\n");
        print(" DESCRIPTION \n");
        print("\t this command split a string into array of words so just put split \n\t after enter button the make enter your separator then space then \n\t your sentence.\n");
        print(" AUTHOR \n\t Written by AIT EL CAID Hmad.\n");
        print(" COPYRIGHT \n");
        print("\t Copyright   2017  Free Software Foundation, Inc.  License GPLv3+: GNGPL\n\tversion 1 or later This is free software: you are free  to  change\n\tand  redistribute  it.There is NO WARRANTY, to the extent permitted\n\tby law.");
        print("\n \n");
			  }
