# POINTERS
A variable is a box that stores a value. <br>
A pointer is a slip of paper that stores the address of a box.

## Three core operators:
- ```&x``` -> address-of x (where the box lives).
- ```*p``` -> dereference pointer p (go to the address and use the box).
- ```p->member``` is shorthand for ```(*p).member``` when p points to an object.

<br>

```&``` -> Get me the address <br>
```*``` -> Go to the address

## Syntax:
1. Basic Syntax <br>
   ```int* x;```

   - ```x``` is a pointer to an ```int```.
   - The ```*``` is bound to the variable name (here, ```x```) and not the type (here, ```int```).
   
2. Multiple Declarations in one line <br>
    ```int *x, *y;```

    - ```x``` and ```y``` are pointers to an ```int```.
    - The interpretation is ***per-variable***.
  
    ```int* x, y;```
    - ```x``` is a pointer to an ```int```, but ```y``` is plain ```int``` (not a pointer).

- **The above apply to both ```*``` and ```&```.**

## Usage:
- ```&``` 
1. Address-of operator
```
int x = 5;
cout << &x << endl;     // Prints the memory address of 'x'
```
***"Give me the address of this variable"***

2. Reference declarator
```
int a = 10;
int &b = a;
b = 20; // Modifies 'a' because 'b' is basically an alias/reference/alternative variable for 'a'
```
***"This variable is just an alias for another"***

- ```*``` 
1. Dereference operator
```
int x = 5;
int *p = &x;    // 'p' stores the address of x
cout << *p << endl;     // Prints 5 (the value at that address)
```
***"Go to the address this pointer holds and fetch the value"***

2. Pointer declarator
```
int *p;     // p is a pointer to int
```
***"This variable stores the address of an int."***

## Passing Stuff in Functions
1. Pass by Value (default)
   ```
    void fun(int x) {
        x = x + 10; // only local copy changes
    }

    int main() {
        int a = 5;
        fun(a);
        cout << a; // still 5
    }
   ```
   - A copy of ```a``` is made inside ```fun```.
   - Changes don't affect the original.
   - ***Use when you want the function to not modify the original.***

2. Pass by Address (using pointers)
    ```
    void fun(int* p) {
        *p = *p + 10; // modifies the value at that address
    }

    int main() {
        int a = 5;
        fun(&a);      // send address of a
        cout << a;    // now 15
    }
    ```
    - The function receives a **pointer** (address).
    - You manually dereference (```*p```) to change the original.
    - ***Use when you want to allow modifications, or when handling arrays / dynamic memory.***
  
3. Pass by Reference (using ```&```)
   ```
    void fun(int& x) {
        x = x + 10; // modifies directly
    }

    int main() {
        int a = 5;
        fun(a);     // no & or * needed here
        cout << a;  // now 15
    }
   ```
   - The function parameter becomes an **alias** for the original variable.

- ```this``` pointer <br>
    - Every object in C++ has a hidden pointer called ```this``` inside its member functions.
    - Inside any non-static member function, ```this``` is a ```ClassName*``` pointing to the current object.
    - It stores the address of the object that called the function.
    - Used when we need to **refer to the current object** inside a class. <br>
  
  Example:
  ```
    class Box {
        int length;
    public:
        Box(int l) { 
            this->length = l; // “this” stores address of current object
        }   
        void setLength(int l) {
            this->length = l;
        }
        void print() { 
            cout << "Length: " << this->length << endl;
        }
    };

    int main() {
        Box b1(10);
        Box b2(20);

        b1.print();   // this = &b1 → prints 10
        b2.print();   // this = &b2 → prints 20
    }
  ```

- ```new``` Operator

    - In C++, normal variables are created on the stack (auto memory, cleaned automatically).
  - ```new``` creates variables on the heap (dynamic memory).
  - ***Unlike stack memory, heap memory stays until you manually free it.*** <br>
  ### Syntax:
  ```
    int* p = new int;       // allocates 1 integer on heap
    *p = 10;                // assign value

    int* arr = new int[5];  // heap array of 5 ints
    arr[0] = 1;
    arr[1] = 2;
  ```
- ```delete``` Operator

    - Used to free heap memory created with ```new```.
    - If you forget to use ```delete```, you create a memory leak → memory remains occupied until program ends, which is bad in large programs.
  ### Syntax:
  ```
    delete p;        // for single variable
    delete[] arr;    // for arrays
  ```