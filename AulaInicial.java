
public class Exemplo {
	
	public static void main(String[] args) {
		String nome;
		int idade;
		//classe exemplo
		
		//Imprimir uma mensagem no console
		System.out.println("Classe com exemplos em Java\n");
		
		//Leitura de dados do teclado
		 nome = Console.readString("Digite o seu nome: ");
		
		 idade = Console.readInt("Digite sua idade: ");
		 
		 System.out.println("\nO nome digitado foi: " + nome);
		 System.out.println("\nA idade digitada foi: " + idade);
		
		 if (idade >= 18) {
			 System.out.println("Pode comprar bebida legalmente!");
		 }else {
			 System.out.println("Não pode beber!");
		 }
	}


}
