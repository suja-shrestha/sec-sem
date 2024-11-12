using System;
namespace sujalshrestha_
{

        class ASK
        {
            public static void Main(string[] args)
            {
                Console.WriteLine("Enter num1");
                int num1 = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Enter num2");
                int num2 =Convert.ToInt32(Console.ReadLine());
               Console.WriteLine("Enter num3");
                int num3= Convert.ToInt32(Console.ReadLine()); 
                if(num1 > num2 && num1 > num3) {
                    Console.WriteLine(num1);

                }
                else if(num2 > num1 && num2 > num3) {
                Console.WriteLine(num2);
                        }
                else
                {
                    Console.WriteLine(num3);
                }
            }
        }
    }

