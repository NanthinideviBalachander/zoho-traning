int top=0,stack[50]={0};
push(char a[])
{
    stack[++top]=a;
}
pop(char a[])
{
    stack[--top];
}
void main()
{
    char symbol[50];
    scanf("%s",symbol);
    int len=strlen(symbol);
    for(int i=0;i<=len;i++)
    {
        if(symbol[i]=="{"||symbol[i]=="["||symbol[i]=="(")
            {
                push(symbol[i]);
            }
         else if(symbol[i]=="}")
         {
              if(stack[top]=="{")
                   pop(symbol[i]);
                else
                {
                      printf("False");
                }

         }
            else if (symbol[i]=="]")
            {
                 if(stack[top]=="[")
                   pop(symbol[i]);
                else
                {
                      printf("False");
                }

            }
                else if(||symbol[i]==")")
               {
                if(stack[top]=="(")
                   pop(symbol[i]);
                else
                {
                      printf("False");
                }

            }
    }
    if(stack==0)
    printf("True");
    else
        printf("False");

}
