
public class Exercicio4 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int cod;
		
		cod = Console.readInt("Insira o código do produto: ");
		
		if (cod >= 1 && cod < 20) 
			System.out.println("Origem: Europa");
		else if(cod >= 20 && cod < 40)
			System.out.println("Origem: Ásia");
		else if(cod >= 40 && cod < 60)
			System.out.println("Origem: América");
		else if(cod >= 60 && cod < 80)
			System.out.println("Origem: África");
		else if(cod > 80)
			System.out.println("Origem: Paraguai");
		else 
			System.out.println("Código Inválido!");

	}

}
