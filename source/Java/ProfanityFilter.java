package nl.compra.ProfanityFilter;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class ProfanityFilter implements IProfanityFilter {

	@Override
	public boolean IsProfanity(String word) 
	{
		
		try 
		{
			
			BufferedReader br = new BufferedReader (new FileReader("badwords.txt"));
			String line = null;
			while ((line = br.readLine()) != null)
			{
				
				if (line.equals (word))
				{

					br.close ();
					return true;
					
				}
				
			}
		
			br.close ();
			
		} 
		catch (IOException e) 
		{
			
			// TODO Auto-generated catch block
			e.printStackTrace();
			
		}
		
		return false;
		
	}

}
