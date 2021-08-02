// ax^2 + bx + c = 0, where a, b and c are real numbers and a != 0
// term: b^2 - 4ac is known as discriminant of a quadratic equation.
// 		if discriminant is greater than 0, roots are real and different
//		if discriminant is equal to 0, roots are real and equal
// 		if discriminant is less than 0, roots are complex and different

#include <math.h>
#include <stdio.h>

int main()
{
	double a, b, c, discriminant, root1, root2, realPart, imgPart;
	printf("ax^2 + bx + c = 0");
	printf("enter coefficients a, b and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	discriminant = b*b - 4 * a * c;

	// condition for real and different roots
	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
	}
	else if (discriminant == 0)
	{
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %.2lf", root1);
	}
	else {
		realPart = -b / (2 * a);
		imgPart = sqrt(-discriminant) / (2 * a);
		printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imgPart, realPart, imgPart);
	}

	return 0;
}