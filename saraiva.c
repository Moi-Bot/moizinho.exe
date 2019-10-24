int maior (int v1, int v2, int v3)
{
	if ((v1 > v2) && (v1>v3))
	{
		return v1;
	}
	else if ((v2>v1) && (v2>v3))
	{
		return  v2;
    }
	else
	{
		return v3;
	}
}

float area_quadrado(float lado)
{
	float result = 0.0;
	result = (lado*lado);
	return result;
}

float area_triang_ret(float lado1, float lado2)
{
	float result = 0.0;
	result = (lado1*lado2)/2;
	return result;
}
