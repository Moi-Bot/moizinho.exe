import java.util.ArrayList;

public class HotUius {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//VETOR
		String[] vetorStrings = new String[4];
		
		vetorStrings[0] = "Bananinha da Silva";
		vetorStrings[1] = "Conecunda Pioneira";
		vetorStrings[2] = "Fecebuckson de Oliveira";
		vetorStrings[3] = "Codeína Santos";
		
		/*for(int i = 0; i < vetorStrings.length; i++)
		{
			System.out.println(vetorStrings[i]);
		}*/
		
		//foreach
		for(String posicao : vetorStrings) 
		{
			System.out.println(posicao);
		}
		
		//COLEÇÃO
		ArrayList<String> colecaoStrings = new ArrayList<String>();
		
		colecaoStrings.add("Pickle Rick");
		colecaoStrings.add("Cucumber Rick");
		colecaoStrings.add("Horny Rick");
		
		for(String posicao : colecaoStrings) 
		{
			System.out.println(posicao);
		}
		
		System.out.println("vetor: " + vetorStrings.length);
		System.out.println("Coleção: " + colecaoStrings.size());
		

	}

}
