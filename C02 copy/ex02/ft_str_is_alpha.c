#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}


int ft_str_is_alpha(char *str)
{
    int i;
    int n;
    
    n = ft_strlen(str);
    if(n == 0)
    {
        return 1;
    }
	i = 0;
	while (str[i] != '\0')
	{
	    if((str[i] >= 97 && str[i] <= 122 )|| (str[i] 
	    >= 65 && str[i] <= 122 ))
	    {
	        return 1;
	        
	    }
	    else
	    {
	        return 0;
	    }
		i++;
	}
}

int main()
{
    
    ft_str_is_alpha("");
}

