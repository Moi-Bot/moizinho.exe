
public class Exercicio3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int idade ;
		
		idade = Console.readInt("Digite sua idade: ");
		
		if (idade <= 13)
			System.out.println("Criança");
		else if (idade >= 13 && idade < 20)
			System.out.println("Adolescente");
		else if (idade <= 20 && idade < 60)
			System.out.println("Adulto");
		else System.out.println("Idoso");
		}

	}


