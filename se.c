#include <stdio.h>
int main()
{
  //Array Sieb erstellen  
    int sieb[300];
    
  for (int i=0;i<300;i++)
  {
        sieb[i]=1;//alle Zahlen wurden noch nciht geprüft und erhalten den Namen 1
  }
  //sieben nach Primzahlen
  for(int e=2;e<=150;e++)
    {
     for(int n=2;n<=150;n++)
        {
          if(n*e<300)//Zahlen werden anhand der Rechnung geprüft ob sie Primzahlen sind
            {
              sieb[n*e]=0;//Zahlen welche als nicht Primzahlen gefunden wurden werden mit dem Namen 0 angesprochen
            }
        }
    }
    //Ausgabe bestimmen
    int i;
    for(i=2;i<300;i++)
    {
        if(sieb[i]==1)// Dadurch das wir die Werte mit Namen 1 ansprechen werden nur geprüfte Werte welche Primzahlen sind geschrieben, da alle anderen den Namen 0 bekommen haben.
        {
            printf("%d\n",i);
        }
    }
       
  
    return 0;
}
