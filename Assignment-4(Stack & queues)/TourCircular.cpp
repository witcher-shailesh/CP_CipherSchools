//Solved on gfg -> https://practice.geeksforgeeks.org/problems/circular-tour/1

int tour(petrolPump p[],int n)
{
   int pt=0,di=0,index=0,check=0,ext=0;
   for(int i=0;i<n;i++)
   {
       pt+=p[i].petrol;
       di+=p[i].distance;
       int diff = p[i].petrol-p[i].distance;
       if(diff>0&&check==0)
       {index=i;ext=diff;check=1;}
       else
       {
          ext = ext+diff;
          if(ext<0)
          { 
              check=0;
              ext=0;
          }  
       }
   }
   if(pt<di) return -1;
   return index;
}