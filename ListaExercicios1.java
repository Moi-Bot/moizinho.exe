
public class ListaExercicios1 {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n1, n2;
		
		//System.out.println("Digite o n�mero 1:" );
		n1 = Console.readInt("Digite o n�mero 1: ");
		//System.out.println("Digite o n�mero 2:" );
		n2 = Console.readInt("Digite o n�mero 2: ");
		
		if (n1 > n2) 
		{
		//N�mero � maior
			System.out.println("N1 � maior que N2!");
		}else if (n1 == n2) 
		{
		System.out.println("N1 � igual N2");
		}else 
		{
			System.out.println("N2 � maior que N1!");
		}
	}
}