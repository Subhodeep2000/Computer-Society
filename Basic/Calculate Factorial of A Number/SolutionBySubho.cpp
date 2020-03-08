int factorialUsingRecursion(int number)
{
    if(number<0)
    {
        cout<<"Enter positive Number"<<endl;
        
        return 0;
    }
    if(number==0)
    {
        return 1;
    }
    
    return number*factorialUsingRecursion(number-1);
}
