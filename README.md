 A program that maintains a personal phone book. The program allows to: 
 
▪ Add and Delete entries from the phone book, 
▪ Search the phone book for a specific entry by last name or by phone number, and 
▪ Print out the entire entries in the phone book. 

The data in the phone book is maintained by storing in memory with the use of a singly linked list, with 
one list node per entry. Each node contains members for storing a person’s family name, first name, address, 
and  the  phone  number.  Use  strings  to  store  this  information.  The  linked  list  must  be  kept  in  increasing 
alphabetical  order,  sorted  by  family  name.  There  are  no  duplicate  entries  with  the  same  family  name 
allowed in the phone book. 
 
This program should be menu driven, with the user being offered a choice of the following commands 
described below: 

▪ Insert a new entry into the phone book. 
The program should prompt the user for a new family name and first name, an address and a phone 
number. This information should be placed in a new node that has been created dynamically using 
the malloc function. And then the node should be inserted at the proper place within the linked list 
so to maintain an increasing alphabetical order by the family name. If a node with the given family 
name is already in the phone book, an error message should be produced, and the new node should 
not  be  inserted  into  the  linked  list.  (Note:  only  identical  family  names  would  result  in  a  error 
message and rejection of the entry.) 

▪ Delete an entry from the phone book. 
The program should prompt the user for the family name to be deleted and then delete the node 
containing that family name  from the linked list that stores the  phone book. If no node  with the 
given family name is found in the phone book, an error message should be printed. 

▪ Search for a family name in the phone book. 
The program should print the family name, first name, address and phone number of the entry, with 
each piece of information on a separate line. If no node with the given family name is found in the 
phone book, an error message should be printed. 

▪ Search for a phone number in the phone book. 
The program should print the family name, first name, address and phone number of the entry, with 
each piece of information on a separate line. If no node with the given phone number is found in 
the phone book, an error message should be printed. 
 
▪ Print the phone book.
Print the list in alphabetical order by the family name, first name, address and phone number of 
each entry, with each piece of information on a separate line. An extra blank line should be printed 
between each phone book entry. 

▪ Quit the program. 
When the program is given the quit command, it should delete all of the nodes in the linked list 
by using calls to the free function. It should then try to print the linked list.
