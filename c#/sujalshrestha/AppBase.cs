namespace Calc
{
    internal class AppBase
    {
        public static void Main(string[] args)
        {
            Console.WriteLine("---Simple calculator---");
            Console.WriteLine("Enter operator(+, -, * , /): ");
            char op = Convert.ToChar(Console.Read());
            Console.WriteLine("Enter number 1: ");
            int num1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Enter number 2 ");
            int num2 = Convert.ToInt32(Console.ReadLine());
            switch (op)
            {
                case '+':
                    int sum = num1 + num2;
                    Console.WriteLine($"the addision is{sum}");
                    break;
                case '-':
                    int minus = num1 - num2;
                    Console.WriteLine($"the minus is {minus}");
                    break;
                case '/':
                    int divid = num1 - num2;
                    Console.WriteLine($"the divid is {divid}");
                    break;
                case '%':
                    int remainder = num1 % num2;

                    Console.WriteLine($"the remainder is {remainder}");
                    break;
                case '*':
                    int multiply = num1 * num2;
                    Console.WriteLine($"the multiply is {multiply}");
                    break;
                default:
                    Console.WriteLine("----Invalid Operator----"); break;


            }
        }
    }
}