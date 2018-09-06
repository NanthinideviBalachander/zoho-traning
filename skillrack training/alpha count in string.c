main()
{

    char arr[40];
    int count[128]={0};
    scanf("%[^\n]",arr);
    for(int index=0;arr[index]!='\0';index++)
    {
        //to print repeted values
        if(count[arr[index]]++==1){
            printf("%c",arr[index]);
            ++count[arr[index]];
        }
      // count[arr[index]]++;
         if(count[arr[index]]++==1)
            printf("%c",arr[index]);
    }
    /*for(int i=0;i<128;i++)
    {
   // to print unrepeted values
        if(count[i]==1)
            printf("%c",i);
    }*/
}
