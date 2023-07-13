/*

CONCEPTS OF CONSTRUCTOR

    A constructor is a special member function which is used to allocate memory space and values to the 
    data members of the object.
     
    A constructor makes the object functional by converting an object with the unused (uninitialized)
    memory into a uasable (initialized) object.
    
    Whenever, an object is created , the constructor will executed automically and initialization
    data member takes place.
    
    It is called constructor because it constructs the value of data members of the class. A constructor 
     is a member function that is automatically called when a class object is created.
    
     A contructor is a speical member as it has the same name as that of the class and is automatically 
     invoked whenever an object in function main();
      1. Memory will be allocated.
      2. Constructors will be called by the compiler automatically.
      3. Initialization of variables (data member) takes place.

      It is not possible for us to initialize the data member in the calss declaration itself. Because at 
      that poit memory is not allocated for the object.

      Syntax Rules for Writing Constructor Functions: 
      The following are the rules used for writing a constructor. These are also referred as characteristics
      of constructors.

      1. A constructor's name must be same as the class name in which is declared.
      2. It does not have any  return value 
      3. It is generally declared as a public member function. It may have protected access within the class
      and only in rare circumstances it should be declared private.
      4. It can have default arguement.
      5. It can not be declared constant, variable, static or virtual.
      6. It can not be refered by it  address.
      7. It can not be inherited like other member functions.
      8. The implicit calls are given to the operators new and delete when memory allocation is required.
      9. It is automatically called when an object is created.
      10. It specifies how an object is created.

      Like other member functions of the class, a constructor can also he defined either inside or 
      outside  the class definition.


        The syntax to define a constructor ( inside the class) is as follows:



        class class_name
        {
            public:
            class_name(parameter_list) // header of the constructor
            {
                // body of the constructor
            }
        };


        where , parameter_list is optional.

        A constructor can also be declared outside. The class using the scope resoultion operator(::). The
        syntax to define the constructor (outside the class) is as follows:

        class class_name
        {
            public:
            class_name(parameter_list); //constructor prototype

        }:
            class_name::class_name(parameter_list) // constructor definition
            {
                // body of the contructor

             }

             where, parameter_list is optional.


              Example 1: 

              // class with constructor
               
               class time
               {
                int hour;
                int min;
                public:
                time();  // contructor delcared

               }
               time::time()    // definition of constructor
               {
                hour= min = sec = 0 ;   // initialization

               }

        When a class is declared with the constructor as above, then oject is created by the class will be 
        initialized automatially.
         
         for exmaple :

         time t;

         Here , object t is created and it initializes data members: hour , min, sec to zero. There is no need to 
          write any statement to invoke the constructor function (as we do with normal function).

    Example 2 :

    class bank
    {
        private :
        int accno;
        float balance;
         public:
         bank()
         {
            accno = 0;
             balance = 0.0;

         }
    }

    












*/
 




