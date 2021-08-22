
# Generic Linked List using C

This project explore that how can we implement the
concept of polymorphism in C with the help of void and 
function pointer. It also helps us to understand that  how
can we create a hetrogeneous array in C.

# Sample code
```
#include <ll.h>
main()
{
   node *h;
   l_in(&h);
   ins(&h,77,0);
   menu(&h);
   del(&h,2);
} 
```
![image](https://user-images.githubusercontent.com/62440699/130314459-f9407c9f-22ee-4ab9-b978-15e6624635a2.png)
![image](https://user-images.githubusercontent.com/62440699/130314466-97b92b6b-5bd4-4b2b-81cf-e9deb27152fd.png)
![image](https://user-images.githubusercontent.com/62440699/130314473-00132a13-8c43-41ab-9ca9-93e68b9c997e.png)


## Documentation

This linked list supports elements of any data type.

### Initialise
You have to first declare and initialse the
head varible by writing

```bash
 node *h;
 l_in(&h); //this line is important
```

### Insert
Elements of any data type can be inserted at the end
of the list by writing 

```bash
 ins(&<head_variable>,<element>,<position>);
```
To insert the element at the place of head: pass 0 as position

To insert the element at the end of the list: pass -1 as position

If you pass position value which exceeds the linked list length,
it will insert it at the last of the list

[For more information about inserting different data types](https://github.com/Bhaumik-Tandan/Generic_Stack_using_c#pushing-integer)


### Delete

Elements can be deleted from the list by entering

```bash
del(&<head_variable>,<position>);
```
Position 0/1: head
Position -1/greater than length: Last element

Position other: h->n is represented by 2 and then the count goes on increasing

### Length
You can find the length of the list by using
```
int a=len(&h);
```
The function returns an integer

### Display
You can display the list by using
```
disp(&h);
```
### Head/Tail

It displays as well as returns the head/tail element of the element

You can store it's value in a varible.

```
int a=head(&h);
char *c=tail(&h);
```
![image](https://user-images.githubusercontent.com/62440699/130312473-61d2c14c-8761-420f-b9db-fb3059b2a21c.png)

[Other data types can be stored like this](https://github.com/Bhaumik-Tandan/Generic_Stack_using_c#pop)

### Other elements

You can get element at any position by using:
```
dispe(&h,<position>);
```
You can also get any element in a varible like
head/tail.

The position varible works same as delete.

## Linked List menu
You can directly interact with the list by initialising 
the list and then entering:-

```
menu(&h)
```

  ![image](https://user-images.githubusercontent.com/62440699/130312678-a55ca5b9-426c-41cd-93f8-5ce2361e3475.png)

You can insert anything float,integer,character and string.
Note that the program treats a single character entered as 
char.

![image](https://user-images.githubusercontent.com/62440699/130312778-7d5d2246-7682-42c2-b239-a9d94b0f9604.png)
![image](https://user-images.githubusercontent.com/62440699/130312789-ee9f8bcc-cb6d-47ec-910b-c1987e82c7d4.png)

You can display anything in the list by going to the 
display meny and then giving your choice 

![image](https://user-images.githubusercontent.com/62440699/130312863-555a45ae-8b00-413f-ac00-abd6fe39fdc4.png)
![image](https://user-images.githubusercontent.com/62440699/130312881-1f025cd6-0439-4add-807b-643a4ee0ac6f.png)

You can display whole list by entering 3 in display menu

![image](https://user-images.githubusercontent.com/62440699/130312953-f2a85e36-df84-4e0f-9dec-d6aad1fc5f3c.png)

In the same way you can delete as well get get the length 
of any elment using the menu

![image](https://user-images.githubusercontent.com/62440699/130313043-7f6a9574-55c8-4ffb-beda-c78f428554b1.png)
## Installation

Clone the repository to your local system using the command
```bash
  git clone https://github.com/Bhaumik-Tandan/Generic_linked_list_in_c
```

In order to include the file from anywhere you must add
the ll_header folder and you ll.h file in your sytem's
include folder.

You can check it's path using the command

```bash
  gcc -v /dev/null
```

And then paste the folder and file inside it

![image](https://user-images.githubusercontent.com/62440699/130313095-518e2aeb-064c-40d1-a451-86069a01ef34.png)
![image](https://user-images.githubusercontent.com/62440699/130313104-e4d692ea-38c5-471c-8ccd-d330704be3cd.png)
![image](https://user-images.githubusercontent.com/62440699/130313112-6e7cf6bd-5b76-4e1e-b63c-a477c8b9763a.png)



Now you can include the header file from anywhere by using

```bash
  #include <ll.h>
```

If you don't want to place it in your include folder 
you can also use it by saving the code file, in the same
folder and including the header file in it by using the 
command
Now you can write
```bash
   #include "ll.h"
```


    
# Tech 
### node.h 
It constains the defination of
of strcture of node of the linked list.

### node_form.h
It constains the function which is actully
responsible for forming a new node incase  a new
element is inserted

### get.h

It returns node at a particular position in the list

### disp_in.h

It 4 functions for all four data types to print
the element in the output

### display_fucntion.h

It constains 4 functions to display with padding,
it is used while printing the whole linked list

### print_e.h

While displaying the head/tail/any element we have to print
different messages so this file contains those different messages
for different scenerios

### disp_route.h

It constains a single function which is called
everytime we dispaly tail/head/element.

### disp.h

It is called while displaying the whole list

### head.h

It constains 3 functions each to display head/tail/element

### ins.h
It is main insert function which directly inserts
an element in the list.
Value of n tells which data type the element
belongs to and d tells us the position of insertion.


### ins_e_.h

This header file has functions to insert elements
of all four data types, which are caled by the generic function
defined at the footer.

### len.h

It returns the length of the list

### del.h
It constains the function that deletes the elements
from the list as  per the situation.

### menu_fun.h
In the menu mode we need to display some intermediatary messages,
and we need to cutomise the output, so for this purpose menu has
these functions as buffer to interact with the list.


## ll.h

All the nessesary header files are included in this file,
functions in which will be used by the user


The l_in function initilises the initial values of the list

And the menu function displays the menu, and calls the function
from the function pointer.







## Related

Here are some related projects

[Generic queue](https://github.com/Bhaumik-Tandan/Generic_queue_in_c)

[Generic stack](https://github.com/Bhaumik-Tandan/Generic_Stack_using_c)

  
## 🛠 Skills Used
C...

  
