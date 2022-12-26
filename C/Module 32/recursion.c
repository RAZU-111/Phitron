#include <stdio.h>
void print(int i,int n)
{
    if(i==11) return 0;
    printf("%d ",i);
    print(i+1,n);
}
int main()
{
  int n;
  scanf("%d",&n);
  print(1,n);

}