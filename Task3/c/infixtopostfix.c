#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char const *argv[])
{
	
    char exp[] = "(a+b*(c^d-e)^(f+g*h)-i)"; 
    int len = strlen(exp);

    //char *pf;

    //pf = infixToPostfix(exp, len);
    //printf("%d\n", len );

    //for (int i = 0; i < len; ++i)
    {
    //	printf("%s", pf );
    }


    char pf[len]; int pf_itr = 0;
	char stack[len]; int st_itr = 0;

	for (int i = 0; i < len - 1; ++i)
	{
		if(exp[i] >= 97 && exp[i] < 123){

			pf[pf_itr] = exp[i];
			pf_itr++;
		
		}else{
			if(st_itr == 0){ 
				stack[st_itr] = exp[i];
				st_itr++;
			}
			else if(exp[i] == '('){
				stack[st_itr] = exp[i];
				st_itr++;	
			}else if(exp[i] == ')'){
				while(stack[st_itr - 1] != '('){
					pf[pf_itr] = stack[st_itr - 1];
					pf_itr++;
					st_itr--;

				}
				st_itr--;
			}else if(exp[i] == '^'){

				stack[st_itr] = exp[i];
				st_itr++;

			}else if(exp[i] == '*' || exp[i] == '/'){

				while(stack[st_itr - 1] != '+' && stack[st_itr - 1] != '-' && stack[st_itr - 1] != '('){
					pf[pf_itr] = stack[st_itr - 1];
					pf_itr++; st_itr--;

				}

				stack[st_itr] = exp[i];
				st_itr++;

			}else if(exp[i] == '+' || exp[i] == '-'){

				while(stack[st_itr - 1] != '('){
					pf[pf_itr] = stack[st_itr - 1];
					pf_itr++; st_itr--;

				}
				stack[st_itr] = exp[i];
				st_itr++;

				
			}
		}
	}
	//return pf;

	printf("%s\n", pf );
	printf("%s\n",exp );
	
	return 0;
}