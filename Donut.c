#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>



void S(int nombre);


int main()
{
	float A = 0.0, B = 0.0, i, j, z[1760];
	int k;
	char b[1760];
	
	// printf("x1b[2J");
	
	while (true)
	{
		memset(b, 32, 1760);
		memset(z, 0, 7040);

		for(j=0; j < 6.28; j += 0.07)
		{
			for(i=0; i < 6.28; i += 0.02)
			{
				float cos_i = cos(i);
				float sin_i = sin(i);

				float cos_j = cos(j);
				float sin_j = sin(j);

				float cos_A = cos(A);
				float sin_A = sin(A);

				float cos_B = cos(B);
				float sin_B = sin(B);

				float cos_j2 = cos_j + 2;
				float D = 1 / (sin_i * cos_j2 * sin_A + sin_j * cos_A + 5);
				float t = sin_i * cos_j2 * cos_A - sin_j * sin_A;
				
				int x = 40 + 30 * D * (l * cos_j2 * cos_B - t * sin_B);
				int y = 12 + 15 * D * (l * cos_j2 * sin_B + t * m);
				int o = x + 80 * y;
				int N = 8 * ((f * sin_A - sin_i * cos_j * cos_A) * cos_B - sin_i * cos_j * sin_A - sin_j * cos_A - cos_i * cos_j * sin_B);
				
				if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o])
				{
					z[o] = D;
					b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
				}
			}
		}

		printf("\\x1b[H");
		
		for(k = 0; k < 1761; k++)
		{
			if (k % 80 == 0)
			{
				S(b[k]);
			}
			
			else
			{
				S(10);
			}
			
			A += 0.00004;
			B += 0.00002;
		}
		
		usleep(30000);
	}

	return 0;
}