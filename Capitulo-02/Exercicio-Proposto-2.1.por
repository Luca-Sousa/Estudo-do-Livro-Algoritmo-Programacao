programa
{
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real delta, x1, x2, a, b, c

		escreva("Informe o Coeficiente A: ")
		leia(a)
		escreva("Informe o Coeficiente B: ")
		leia(b)
		escreva("Informe o Termo Independente C: ")
		leia(c)

		delta = mat.potencia(b, 2.0) - 4.0 * a * c
		
		x1 = (-b + mat.raiz(delta, 2.0)) / (2.0 * a)
		x2 = (-b - mat.raiz(delta, 2.0)) / (2.0 * a)

		escreva("As raízes da Equação são: ", x1, " e ", x2)
	}
}