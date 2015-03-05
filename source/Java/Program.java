package nl.compra.ProfanityFilter;

public class Program 
{

	ProfanityFilter pf;
	
	public Program (String word)
	{
		
		 pf = new ProfanityFilter ();
		 if (pf.IsProfanity(word))
			 System.out.println (1);
		 else
			 System.out.println (0);
		
	}
	
	public static void main (String[] args)
	{
		
		if (args.length == 0)
			System.out.println (2);
		else
			new Program (args[0]);
		
	}
	
}
