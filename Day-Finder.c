//Warning! This is a horror. I knew little programming practices while writing this.
#include<stdio.h>
#include<time.h>
int main ()
{
     int a, b, c, d, e, f, g, h, i, j, k, l, m, n, p, q, r, s, t, u, v, w, x;
     char o;
     n=2;
     printf("\n                  Welcome to Calender Day Finder. \nType any date and get the day\n");
     printf("                                              Developed by Rahul Bothra\n                                  ");
     lp:
     printf("\nPlease type the Date (dd):\n");
     scanf("%d" ,& a);
     if((a<=0) || (a>=32))
     {
               printf("Invalid date. Please try again");
               goto lp;
     }
     e=a%7;
     printf("Please type the year: (yyyy)\n");
     scanf("%d", & b);
       for(q=0;q<400;q++)
    {
                      r=b-q;
                      if(r%400==0)
                      {
                                  s=q;
                                  if((s>=0) && (s<=99))
                                  t=0;
                                  else if((s>=100) && (s<=199))
                                  t=5;
                                  else if((s>=200) && (s<=299))
                                  t=3;
                                  else if((s>=300) && (s<=399))
                                  {
                                      t=1;
                                  }
                      }
                      
    }
    for(u=0;u<100;u++)
    {
                      v=b-u;
                      if(v%100==0)
                      {
                                  w=v;
                                  x=b-v;
                                  d=x%7;
                                  f=x/4;                                  
                      }
                      }
                          
          
     printf("Please type the month no. that is against the month name \n 1  | January\n 2  | February\n 3  | March\n ");
     printf("4  | April\n 5  | May\n 6  | June\n 7  | July\n 8  | August\n 9  | September\n 10 | October\n 11 | November \n 12 | December\n "); 
     gp:
                scanf("%d" ,& g);

     switch (g)
     {
            case 1:
                 if(a>31)
                 {
                         printf("Invalid date. Please try again");
                         goto lp;
                 }
                 else
                 {
                     if ((b%100==0) && (b%400!=0))
                 {
                      h=6;
                 }
                 else if ((b%100==0) && (b%400==0))
                 {
                      h=5;
                 }
                 else if(b%4==0)
                 {
                      h=5;
                 }
                 else
                 h=6;
                 }
                 break;
                 case 2:
                      if((b%4==0) && (a>29))
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else if ((b%4==0) && (a<=29))  
                      {
                           if(b%100!=0)
                           {
                           h=1;
                           }
                           else if((b%100==0) && (b%400!=0))
                           {
                                if(a>28)
                                {
                                    printf("Invalid date. Please try again.");
                              goto lp;
                              }
                              else
                              h=2;
                           }
                      else if((b%100==0) && (b%400==0))
                      {
                           if(a<=29)
                           {
                                   h=1;
                                   }
                           else
                           {
                               printf("Invalid date. Please try again.");
                              goto lp;
                           }
                      }
                      }
                      else if (a>28)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                         {
                              abd:
                     if ((b%100==0) && (b%400!=0))
                 {
                      h=2;
                 }
                 else if ((b%100==0) && (b%400==0))
                 {
                      h=1;
                 }
                 else if(b%4==0)
                 {
                      h=1;
                 }
                 else
                 h=2;
                 }
                      break;
                      case 3:
                            if(a>31)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                       else
                       h=2;
                       break;
                           case 4:
                                if(a>30)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                      
                                h=5;
                                break;
                                case 5:
                                     if(a>31)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                                     h=0;
                                     break;
                                     case 6:
                                          if(a>30)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                                          h=3;
                                          break;
                                          case 7:
                                               if(a>31)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                                               h=5;
                                               break;
                                               case 8:
                                                    if(a>31)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                                                    h=1;
                                                    break;
                                                    case 9:
                                                         if(a>30)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                                                         h=4;
                                                         break;
                                                         case 10:
                                                              if(a>31)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                                                              h=6;
                                                              break;
                                                              case 11:
                                                                   if(a>30)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                                                                   h=2;
                                                                   break;
                                                                   case 12:
                                                                        if(a>31)
                      {
                              printf("Invalid date. Please try again.");
                              goto lp;
                      }
                      else
                      h=4;
                      break;
                      default:
                      printf("Invalid Choice. Please type again.");
                      goto gp;
     }
     i=d+f+h+t+a;
     
     j=i%7;
     if(j==0)
     printf("\nIt is Sunday.\n");
     else if (j==1)
     printf("\nIt is Monday.\n");
     else if(j==2)
     printf("\nIt is Tuesday.\n");
     else if(j==3)
     printf("\nIt is Wednesday.\n");
     else if(j==4)
     printf("\nIt is Thursday.\n");
     else if(j==5)
     printf("\nIt is Friday.\n");
     else
     {
         printf("\nIt is Saturday.\n");
     }
     
      if((a==2) && (g==10))
               printf("This is Gandhi Jayanti.");
     else if((a==15) && (g==8))
          printf("This is India's Independence Day.\n");
     else if((a==25) && (g==12))
          printf("This is Christmas.\n");
     else if ((a==14) && (g==1))
          printf("This is Makar Sakranti.\n");
     else if((a==26) && (g==1))
          printf("This is India's Republic Day\n");
     else if((a==1) && (g==5))
          printf("This is May Day.\n");
     else if((a==5) && (g==6))
          printf("This is Rahul Bothra's Birthday.\n");
     else
     {
     }
     
     ad:
          printf("\nPress 1 to find another day.\nPress 2 to exit\n");
     scanf("%d" , & m);
     if (m==1)
     {
     goto lp;
     }
     else if(m==2)
     {
         printf("Are you sure you want to Exit?\nPress y to confirm or n to go back.\n");
         mp:
                     scanf("%s" ,& o);
         switch (o)
         {
                case 'y':
                     printf("Well, Goodbye.");
                     break;
                case 'n':
                     goto lp;
                     break;
                     default:
                             printf("\nWrong choice.\nPlease try again.\n");
                             goto mp;
                             }
                             
     }
     else
     {
         printf("Wrong Choice. Please Try Again");
         goto ad;
     }
     }  
