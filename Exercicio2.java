
public class Exercicio2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int cod;
		double sal;
		cod = Console.readInt("Insira o C�digo do seu cargo\n T�cnico (Cod 1)\n Gerente (Cod 2)\n Outros (Cod 3): ");
		sal = Console.readFloat("Insira seu Salario atual: ");
		
		switch(cod) 
		{
		
		case 1:
			sal = sal + sal*0.5;
			
			System.out.println("Seu salario ap�s aumento �: " + sal);
			break;
		case 2:
			sal = sal + sal*0.3;
			System.out.println("Seu salario ap�s aumento �: " + sal);
			break;
		case 3:
			sal = sal + sal*0.2;
			System.out.println("Seu salario ap�s aumento �: " + sal);
			break;
		default:
			System.out.println("C�digo invalido!");
			break;
		
		
		}

	}

}
