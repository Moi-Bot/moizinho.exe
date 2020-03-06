
public class Exercicio5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int vet[], i;
		
		vet = new int[20];
		
		for(i = 0; i<20; i++) 
		{
			vet[i] = Console.readInt("Digite um número: ");
		}
		
		System.out.println("Os 20 números digitados:");
		
		for(i = 0; i<20; i++) 
		{
			System.out.println(vet[i]);
		}
		

	}

}
