
public class ListaExercicios1 {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n1, n2;
		
		//System.out.println("Digite o número 1:" );
		n1 = Console.readInt("Digite o número 1: ");
		//System.out.println("Digite o número 2:" );
		n2 = Console.readInt("Digite o número 2: ");
		
		if (n1 > n2) 
		{
		//Número é maior
			System.out.println("N1 é maior que N2!");
		}else if (n1 == n2) 
		{
		System.out.println("N1 é igual N2");
		}else 
		{
			System.out.println("N2 é maior que N1!");
		}
	}
}