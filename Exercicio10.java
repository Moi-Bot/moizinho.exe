
public class Exercicio10 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int i, vet[] = new int[10];
		//int[] teste = {1, 2, 3, 4}; Ex de cria��o de vetor
		
		for(i = 0; i<10; i++) 
		{
			vet[i] = Console.readInt("Digite um n�mero: ");
		}
		for(i = 0; i<10; i++) 
		{
			System.out.println("Posi��o"+ i +": " + vet[i]);
		}
		

	}

}
