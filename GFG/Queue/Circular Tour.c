 // My successful approach
 int tour(petrolPump p[],int n)
    {
       int sp=-1,balance=0,f;
       for(int i=0;i<n;i++)
       {
           f=0;
           if(p[i].petrol-p[i].distance>=1)
           {
               balance=p[i].petrol-p[i].distance;
              // cout<<"Starting Point:"<<p[i].petrol<<":"<<p[i].distance<<endl;
               sp=i;
               for(int j=i+1;j<n;j++)
               {
                  // cout<<"\t"<<"Next bulks:"<<p[j].petrol<<":"<<p[j].distance<<endl;
                   if((p[j].petrol-p[j].distance)+balance<0)
                   {
                      f=1;
                    //  cout<<"\t"<<"End of tour"<<endl;
                      break;
                   }
                   balance+=(p[j].petrol-p[j].distance);
               }
               
               if(!f)
               {
                   int k;   
                   for(k=0;k<i;k++)
                   {
                      // cout<<"\t"<<"Next bulks:"<<p[k].petrol<<":"<<p[k].distance<<endl;
                       if((p[k].petrol-p[k].distance)+balance<0)
                       {
                          f=1;
                          break;
                       }
                       balance+=(p[k].petrol-p[k].distance);
                   }
                   if(k==i)
                      return sp;
                   }
           }
           if(f==1)
           {
              sp=-1;
              continue;
           }
       }
      
       return sp;
    }