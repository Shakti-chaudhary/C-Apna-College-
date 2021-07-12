Arithmetic Operators :-

Operator   |     Operation                                                |        Example
           |                                                              |
+          |     Adds two operands                                        |        A*B = 50
/          |     Divides left operand by right operand                    |        B/A = 2
%          |     Finds the remainder after integer division               |        B%A = 0
++         |     Incrementer                                              |        A++ = 6
--         |     Decrementer                                              |        A-- = 

Relational Operators :-

Suppose : A=5 and B=10

Operator  |   Operation                                                                 |   Example
          |                                                                             | 
==        |   Gives true if two operands are equal                                      |   A==B is not  true
!=        |   Gives true if two operands are not equal                                  |   A!=B is true
>         |   Gives true if left operand is more than right operand                     |   A>B is not true
<         |   Gives true if left operand is less than right operand                     |   A<B is true
>=        |   Gives true if left operand is more than right operand or equal to it      |   A>=B is not true
<=        |   Gives true if left operand is more than rightoperand or equal to it       |   A<=B is true

Logical Operators:- 

Suppose : A=0 and B=1

Operator     |           Operation                                                              |   Example   
             |                                                                                  |              
&&           |      AND operator. Gives true if both operands are non-zero                      |   (A && B) is false
||           |      OR operator.  Gives true if atleast one of the two operands are non-zero.   |   (A || B) is true
!            |      NOT operator. Reverse the logical state of operand                          |   !A is true

Bitwise Operators:-  

Suppose : A=5(0101) and B=6(0110)

Operator  |   Operation                                                                |  Example    
          |                                                                            |    
&         |   Binary AND. Copies a bit to the result if it exists in both operands.    |    0101
          |                                                                            |  & 0110
          |                                                                            |    0100
          |                                                                            |              
|         |   Binary OR. Copies a bit if it exists in either operand.                  |    0101
          |                                                                            |  | 0110
          |                                                                            |    0111
          |                                                                            |              
^         |   Binary XOR. Copies the    bit if it is set in one operand but not both.  |    0101
          |                                                                            |  ^ 0110
          |                                                                            |    0011
          |                                                                            |     
~         |   Binary Ones Complement. Flips the bit.                                   |   ~0101 =>
          |                                                                            |   1010
          |                                                                            |              
<<        |   Binary Left Shift. The left operand's bits are moved left by             |   4 (0100)
          |   the number of places specified by the right operand.                     |   4<<1
          |                                                                            |   =1000 = 8 
          |                                                                            |                
>>        |   Binary Right Shift Operator. The left operand's bits are                 |   4>>1
          |   moved right by the number of places specified by the right operand.      |   =0010 = 2
|
                                                                                                   
     :- If shift operator is applied on a number N then,

         * N<<a will give a result N*2^a
         * N>>a will give a result N/2^a


Assignment Operators:-   

Operator  |  Operation                                         |  Example
          |                                                    |   
=         |  Assigns value of right operand to left operand    |  A=B will put value of B in A
          |                                                    |    
+=        |  Adds right operand to the left operand and        |  A+=B means A = A+B
          |  assigns the result to left operand.               |  
          |                                                    |     
-=        |  Subtracts right operand from the left operand     |  A-=B means A=A-B
          |  and as signs the result to left operand.          | 
          |                                                    |      
*=        |  Multiplies right operand with the left operand    |  A*=B means A=A*B
          |  and assigns the result to left operand.           |           
          |                                                    |        
/=        |  Divides left operand with the right operand and   |  A/=B means A=A/B
          |  assigns the result to left operand.               |
|

Misc Operators:-    

Operator    |  Operation                                     |   Example
            |                                                |         
sizeof()    |  Returns the size of variable                  |  If a is integer
            |                                                |  then sizeof(a) will
            |                                                |  return 4Condition?
            |                                                |            
X:Y         | Conditional operator. If condition is true,    |  A+=B means A =
            | then returns value of X or else value of Y     |  A+B
            |                                                |    
Cast        | Casting operators convert one data             |  int(4.350) would
            | type to another.                               |  return 4.
            |                                                |        
Comma (,)   | Comma operator causes a sequence of            |        
            | operations to be performed. The value of       |             
            | the entire comma expression is the value of    |                
            | the last expression of the comma-separated     |               
            | list.                                          | 

:-----------------------------------------------------------------------------------------:

