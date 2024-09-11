 #include<iostream>
 #include<conio.h>
 #include<string.h>
 #include<stdlib.h>
using namespace std;

 class assignment
 {
  public:
   void f_page();
   void class_object();
   void features();
   void members();
   void function_overloading();
   void default_parameter();
  };

  void assignment::f_page()
  {
   cout<<"\n\n\t\t\t :OOP TUTORIAL:";
   cout<<"\n\t\t\t================";
   cout<<"\n\n\t :LEARNING OBJECT ORIENTED PROGRAMMING USING C++:";
   cout<<"\n\t--------------------------------------------------";
   cout<<"\n\n\t1. Concept Of Class And Object.\n\n\t2. Features Of OOP.\n\n\
\t3. Private,Public And Protected Members.\n\n\t4. Function Overloading.\n\
\n\t5. Default Parameter.\n\n\t** Enter 0 For Exit.** Enter Your Choice: ";
  int i;   cin>>i;
  switch(i)
  {
  case 0:exit(0);                   break;
  case 1:class_object();            break;
  case 2:features();                break;
  case 3:members();                 break;
  case 4:function_overloading();    break;
  case 5:default_parameter();       break;

  }
 }

 //===================Concept Of Class And Object=======================\\
 //----------------------------------------------------------------------\\

 void assignment::class_object()
 {
  system("cls");
  cout<<"\n\n\t\t :CONCEPT OF CLASS AND OBJECT:";
  cout<<"\n\t\t===============================";
  cout<<"\n\n\t\t\t :CLASS AND OBJECT:";
  cout<<"\n\t\t\t====================";
  cout<<"\n\n\t1. What is class ?\n\n\t2. Uses of class ?\n\n\t3. General\
Format.\n\n\t4. What is object ?\n\n\t5. Uses of object ?\n\n\t6. General\
Format.\n\n\t7. Press 7 to return front page.\n\n\n\t ** Enter Your Choice:";
  int a;
  cin>>a;
  switch(a)
  {
   case 1: system("cls");
       cout<<"\n\n\tCLASS: Class is a user defined data type.It is declr\
ared using class\n\nkeyword.The syntax of a class decleration is similar to\
that of astructure.\n\n\n * Press Any Key To Go Back Page *"; getch();
       class_object();            break;
   case 2: system("cls");
       cout<<"\n\n\tUSES: It is a important features of Object Oriented\
Programming.To\n\ndescribe a object we use class.Class is also used to handle\
many operations.\n\n\t * Press Any Key To Go Back Page *"; getch();
      class_object();            break;
   case 3:system("cls");
      cout<<"\n\n\tGeneral Format:\n\n\t class class_name{\n\n\t //\
private finction and variable.\n\n\tprivate:\n\n\t //public function and\
variable.\n\n\t}object list;\n\n\t * Press Any Key To Go Back Page *"; getch();
      class_object();             break;
   case 4:system("cls");
      cout<<"\n\n\tOBJECT: Object is a class type variable.It is a \
basic run time entities\n\nin an object-oriented system.\n\n\t * Press Any \
Key To Go Back Page *";  getch();

      class_object();             break;
   case 5:system("cls");
      cout<<"\n\n\tUSES: Object is mainly used in a class.It is a run \
time NTT of OOP.Each\n\nobject of a class has its own copy of every variable \
declared within the class.\n\n\t * Press Any Key To Go Back Page *";getch();
      class_object();              break;
   case 6:system("cls");
      cout<<"\n\n\tGeneral Format:\n\n\t\tclass class_name{\n\n\t\t //\
private functions and variables.\n\n\t\tpublic:\n\n\t\t //public functions \
and variables.\n\n\t\t}object list;\n\n\t * Press Any Key To Go Back Page *";
      getch();
      class_object();             break;
   case 7:system("cls");
      f_page();                   break;
  }
  getch();
  }

  //=====================Features Of OOP=============================\\
 //------------------------------------------------------------------\\

 void assignment::features()
 {
  system("cls");
  cout<<"\n\n\t\t:FEATURES OF OOP:";
  cout<<"\n\n\t\t==================";
  cout<<"\n\n\t\t1. Abstruction.\n\n\t\t2. Encaptulation.\n\n\t\t3. Dynamic\
 Binding.\n\n\t\t4. Press 4 To Return Front Page.\n\n\t\t ** Enter Your Choic\
 e: ";
  int a;
  cin>>a;
  switch(a)
  {
   case 1:system("cls");
      cout<<"\n\n\t\t\t :ABSTRUCTION:\n\n\t\t\t================\n\n\t\t\
Abstruction refers to the act of representing essential features\nwithout \
including the background details or explanations.Classes use the concept\n\
of abstruction and are defined as a list of abstruct attributes as size,\
\n\nweight and cost, and functions to operate on these attributes.\n\n\t\t \
 * Press Any Key To Go To BAck Page *";getch();
      features();              break;
   case 2:system("cls");
      cout<<"\n\n\t\t\t :ENCAPTULATION:\n\t\t\t=================\n\n\t\
\tEncaptulation is the mechanism that binds together code and the\n\ndata it\
manipulates, and keeps both safe from outside interference and misuse. In\n\
any object the private data and its related function are binded together\
,so\n\nthat nothing from outside can directly access these private members\
.Even if one\n\nobject cannot access or change the intrnal state of another\
object of same class.\nOnly the own methods involving with that object c\
an allowed to access or change\n\nits inernal state.\n\n\t\t * Press Any Key \
TO Go To Back Page * ";getch();
       features();               break;
    case 3:system("cls");
       cout<<"\n\n\t\t\t :DYNAMIC BINDING:\n\t\t\t===================\n\
\n\t\tIn object oriented programming it is possible to impliment\n\ndifferent\
 version of a particular function.But it is not known which version of\n\nthat\
 function will call untill runtime.This system is calles dynamic binding.\n\n\
There nare two types of binding one is early binding that is not known\n\n\
untill compile time and another is late binding that is not known untill \
runtime.\n\n\n * Press Any Key To Go To BAck Page *";getch();
       features();               break;
    case 4:system("cls");
       f_page();                break;
  }
  getch();
  }

 //==============Privatre, Public And Protected Members==================\\
 //-----------------------------------------------------------------------\\

 void assignment::members()
 {
  system("cls");
  cout<<"\n\n\t\t\t :PRIVATE, PUBLIC AND PROTECTED MEMBERS:";
  cout<<"\n\n\t\t\t=========================================";
  cout<<"\n\n\t\t1. Variables.\n\n\t\t2. Functions.\n\n\t\t3. press 3 To\
 Return Front Page.\n\n\n\t\tEnter Your Choice:";
  int a;
  cin>>a;
  switch(a)
  {
   case 1:system("cls");
      cout<<"\n\n\t\t PRIVATE, PUBLIC AND PROTECTED VARIABLES:\n\n\t\t\
------------------------------------------\n\n\t\tPrivate variable can be\
declared defaultly withing using private\n\naccess specier.We can not use a p\
rivate variable directly anywhere in the\n\nprogram.Public member variable is\
 declared with public access specier.We can use\npublic variable directly any\
where in the program.Protected member variable\n\nis declared with protected\
access specier.It like as private member variable. But\nwe can inherite it\
directly.\n\n\n\t\tGeneral Format:\n\n\t\t class class_name{\n\n\t\t  \
//private variables.\n\n\t\t public:\n\n\t\t  //public variables.\n\n\t\t \
protected:\n\n\t\t  //protected variables.\n\n\t\t};\n\n\n\t\t * Press Any \
Key To Go To Back Page *";  getch();
      members();              break;
   case 2:system("cls");
      cout<<"\n\n\t\t PRIVATE, PUBLIC AND PROTECTED FUNCTIONS:\n\n\t\t\
------------------------------------------\n\n\t\tPrivate functions can be\
declared defaultly withing using private\n\naccess specier.We can not use a p\
rivate functions directly anywhere in the\n\nprogram.Public member function is\
 declared with public access specier.We can use\npublic function directly any\
where in the program.Protected member function\n\nis declared with protected\
access specier.It like as private member function. But\nwe can inherite it\
directly.\n\n\n\t\tGeneral Format:\n\n\t\t class class_name{\n\n\t\t  \
//private functions.\n\n\t\t public:\n\n\t\t  //public functions.\n\n\t\t \
protected:\n\n\t\t  //protected functions.\n\n\t\t};\n\n\n\t\t * Press Any \
 Key To Go To Back Page *";  getch();
        members();              break;
     case 3:system("cls");
        f_page();             break;
  }
  getch();
  }

 //=======================Function Overloading==========================\\
 //---------------------------------------------------------------------\\

 int add(int a,int b)
 {
   return a+b;
 }
int add(int x,int y,int z)
 {
  return x+y+z;
 }
 void assignment::function_overloading()
 {
  system("cls");
  cout<<"\n\n\t\t\t :FUNCTION OVERLOADING:\n\t\t\t========================";
  cout<<"\n\n\t\t1. What is function overloading ?\n\n\t\t2. Why function \
overloading is used ?\n\n\t\t3. General format.\n\n\t\t4. Example.\n\n\t\t5.\
 Press 5 To Return Front Page.\n\n\n\t\t  **Enter Your Choice:";
  int a;
  cin>>a;
  switch(a)
  {
   case 1:system("cls");
      cout<<"\n\n\t\tFUNCTION OVERLOADING:Function overloading is the \
process by\n\nwhich we can use many functions with a single name where they a\
re different\n\nbased on their argument type or argument name.Here return\
 type has no effect.It\n\nis an important feature of OOP.\n\n\n\t\t * Press a\
ny Key To Go To Back Page *";getch();
      function_overloading();          break;
   case 2:system("cls");
      cout<<"\n\n\tSometimes we may need similar type of funtion differen\
ciang only\n\nfunction parameter type or number of arguments.In such situati\
ion we will use\n\nfunction overloading.Besides funtion overloading is widel\
y used to handle class\n\nobjects such as overloading constructor funtion.\n\
\n\n\t\t * Press Any Key To Go To Back Page *";getch();
      function_overloading();               break;
   case 3:system("cls");
      cout<<"\n\n\t\treturn_type  function_name(argument_list)\n\n\t\t{\
\n\n\t\t  //body of funtion\n\n\t\t}\n\n\t\treturn_type  same_function_name\
(argument_list)\n\n\t\t{\n\n\t\t  //body of funtion\n\n\t\t}\n\n\t\t  //Defi\
nation of function as many needed.\n\n\n\t\t * Press Any Key To Go To Back Pa\
ge *";    getch();
      function_overloading();                break;
   case 4:start:
      system("cls");
      cout<<"\n\t\t#include<iostream.h>\n\n\t\t\
int add(int a,int b)                       \n\n\t\t\
 {                                         \n\n\t\t\
   return a+b;                             \n\n\t\t\
 }                                         \n\n\t\t\
int add(int x,int y,int z)                 \n\n\t\t\
 {                                         \n\n\t\t\
  return x+y+z;                            \n\n\t\t\
 }                                         \n\n\t\t\
void main()                                \n\n\t\t\
 {                                         \n\n\t\t\
  int a,b,c;                               \n\n\t\t\                   \n\n\t\t\
  cout<<\"enter value for a,b,c:\";        \n\n\t\t\
  cin>>a>>b>>c;                            \n\n\t\t\
  cout<<\"add(a,b)=\"<<add(a,b)<<endl;     \n\n\t\t\
  cout<<\"add(a,b,c)=\"<<add(a,b,c)<<endl;  \n\t\t\t\
  }";
  cout<<"\n\n\n\t\tEnter 1 To Go To Back Page.\n\n\n\t\tEnter 2 To Run The\
 Program.\n\n\n\t\t  **Enter Your Choice:";
   int a;
   cin>>a;
   switch(a)
  {
   case 1:function_overloading();        break;
   case 2:system("cls");
      cout<<"\n\n\t\t\t OUTPUT\n\t\t\t---------\n\n";
      cout<<"\n\n\t\tenter value for a,b,c:\n";
      cout<<"\t\tadd(10,20)="<<add(10,20)<<endl;
      cout<<"\t\tadd(10,20,30)="<<add(10,20,30)<<endl;
      cout<<"\n\n\t\t * Press Any Key To Go To Back Page *"; getch();
      goto start;
   }
    case 5:system("cls");
       f_page();                   break;

  }
  getch();
  }

 //========================Default Parameter=============================\\
 //-----------------------------------------------------------------------\\

 int area(int l,int w=0)   {
   if(w==0)
    return l*l;
   else
    return w*l;
 }

 void assignment::default_parameter()
 {
  system("cls");
  cout<<"\n\n\t\t\t : DEFAULT PARAETER :\n\t\t\t======================\n\n\t\
\t1. What is it ?\n\n\t\t2. Why used ?\n\n\t\t3. General format.\n\n\t\t4.\
Example.\n\n\t\t5. Press 5 To Return Front Page.\n\n\n\t\tEnter Your Choice:";
  int a;
  cin>>a;
  switch(a)
 {
  case 1:system("cls");
     cout<<"\n\n\tIn object oriented programming we can use some initial\
 value to the\n\nformal parameter of a function.when we call that funtion wi\
th missing those\n\nparameter which is given a default value,programme will\
 work with that default\n\nvalue.this type of parameter is called default p\
 arameter.\n\n\n\t\t * Press Any Key To Go To Back Page *"; getch();
     default_parameter();   break;
  case 2:system("cls");
     cout<<"\n\n\tWe default parameter in related to function overloadi\
ng,that means\n\nsometimes we can use default parameter insted of function\
 over loading.Besides\n\nwe use default parameter to combine similar funct\
 ion into one.we also use\n\ndefault parameter to add new parameter to exi\
 sting function.\n\n\n\t\t * Press Any Key To Go To Back Page * "; getch();
     default_parameter();    break;
  case 3:system("cls");
     cout<<"\n\n\n   ret_type fun_name(data_type var1=def_value,...,dat\
a_type varn=def_value);\n\n\n\t\t * Press Any Key To Go To Back Page *";
     getch();
     default_parameter();    break;
  case 4:start:
     system("cls");
     cout<<"\n\t\t#include<iostream.h>      \n\n\n\t\t\
int area(int l,int w=0)   {                           \n\n\t\t\
   if(w==0)                                           \n\n\t\t\
    return l*l;                                       \n\n\t\t\
   else                                               \n\n\t\t\
    return w*l;                                       \n\n\t\t\
 }                                                    \n\n\t\t\
void main() {                                         \n\n\t\t\
  int w,h;                                            \n\n\t\t\
  cout<<\"enter wide and height\\n\";                 \n\n\t\t\
  cin>>w>>h;                                          \n\n\t\t\
  cout<<\"area of rectangle= \"<<area(w,h)<<endl;     \n\n\t\t\
  cout<<\"area of squre= \"<<area(w);                 \n\n\t\t\
 }          ";
   cout<<"\n\n\n\t\tEnter 1 To Go To Back Page.\n\n\n\t\tEnter 2 To Run The\
 Program.\n\n\n\t\t  **Enter Your Choice:";
   int a;
   cin>>a;
   switch(a)
  {
   case 1:default_parameter();   break;
   case 2:system("cls");
      cout<<"enter wide and height\n10 12\n";
      cout<<"area of rectangle= "<<area(10,12)<<endl;
      cout<<"area of squre= "<<area(10);
      cout<<"\n\n\n\t\t * Press Any Key To Go To Back Page *"; getch();
      goto start;
   }
   case 5:system("cls");
      f_page();        break;
  }
   getch();
  }


 //=================================Main Function=========================\\
 
 int main()
 {
  system("cls");
  assignment a;
  a.f_page();
 return 0;
 }
