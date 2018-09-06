 /*


4
1 8 21 7
19 17 10 20
2 18 23 22
14 25 4 13


*/
int arr[40][40],n,currweight=1,curr=0;
call(int i,int j)
{
   // curr=arr[i+1][j]<arr[i][j+1]?arr[i+1][j]:arr[i][j+1];
   int posi,posj;
   if(i+1<=n || j+1<=n){
   if(arr[i+1][j]<arr[i][j+1])
   {
      curr=arr[i+1][j];
      posi=i+1;
      posj=j;
   }
   else if(arr[i][j+1]!='\0')
    {
     curr=arr[i][j+1];
      posi=i;
      posj=j+1;
   }
    printf("%d-%d-%d-%d-%d-",i,j,posi,posj,curr);
    if(curr>currweight)
        currweight=curr;
    printf("%d \n",currweight);
    if(posi<=n && posj<=n)
        call(posi,posj);
   }
}
main()
{
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
        //scanf("\n");
    }
    curr=arr[1][1];
   // for(int i=1;i<=n;i++)
    //{
      //  for(int j=1;j<=n;j++)
        //{
           // if(!(i==1&&j==1))
            call(1,1);
        //}
    //}
    printf("%d",currweight);

}
