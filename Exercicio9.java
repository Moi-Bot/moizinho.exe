
public class Exercicio9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int n, cont = 0, soma = 0, media;
		
		do 
		{
			n = Console.readInt("Digite um n�mero: ");
			if(n<0)break;
			soma += n;
			cont++;
		}while(n >= 0);
		
		media = soma / cont;
		
		System.out.println("M�dia: " + media);

	}
}