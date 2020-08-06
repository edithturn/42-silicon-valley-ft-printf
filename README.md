# ft_printf

Format Specifications

Format | Value
int age;
age = 25;
printf ( "I am %d years old\n", age );

The Argument List

int x = 5, y = 10;
printf ( "x is %d and y is %d\n", x, y );



MVP
example: "space : %+45i"
example: "space : %i"

1) (optional) evaluar contexto
2) evaluar el conversor
	* convertirlo a un numero - 😅 -> enum conversions.invalid
	* s -> enum conversions.string;
3) info is ready to go to dispatcher
	*dispatcher process

- Use format
- Convertir d, i,
- Pasar a estructura
- Identificar en dispatcher
- Procesar


Extra Data:

clang - similar a c++
windows other compilator
assembler, languaje intermediate, se genran objets, then ensamblado {flow}
- Readme : lo convierte en pagina web.
- Datatype Union |https://www.tutorialspoint.com/cprogramming/c_unions.htm | Docosaurius | https://github.com/facebook/docusaurus


https://github.com/lgutter/ft_printf



### Compilation
```bash
cd /home/edith/workspace/42/ft_printf/42-silicon-valley-ft-printf/test_files
```

```bash


ft_printf.c
eval_format_specifer.c
solve_string.c utils.c
eval_context.c solve_character.c
solve_decimal_integer.c
solve_percent_sign.c
solve_pointer.c
solve_unsigned_decimal_integer.c
solve_unsigned_hexadecimal_integer.c

export FNC="../source_files/ft_printf.c  ../source_files/eval_format_specifer.c  ../source_files/solve_string.c ../source_files/utils.c ../source_files/eval_context.c ../source_files/solve_character.c ../source_files/solve_decimal_integer.c ../source_files/solve_percent_sign.c  ../source_files/solve_pointer.c ../source_files/solve_unsigned_decimal_integer.c ../source_files/solve_unsigned_hexadecimal_integer.c ../libft/ft_bzero.c  ../libft/ft_memset.c ../libft/ft_putchar.c ../libft/ft_putchar_fd.c ../libft/ft_itoa.c ../libft/ft_strdup.c ../libft/ft_putstr.c ../libft/ft_putstr_fd.c ../libft/ft_atoi.c ../libft/ft_isdigit.c   ../libft/ft_strncpy.c  ../libft/ft_memalloc.c  ../libft/ft_strnew.c ../libft/ft_strcat.c  ../libft/ft_strlen.c"

gcc main.c $FNC
gcc main_test_s.c $FNC


```

```
Debug mode
gcc -g main.c $FNC
gcc -g main_test_s.c $FNC
lldb a.out
b main
run
gui
```


- Guaradar Contexto
- Mandar a Dispatcher
	- Depende de si es d,s, c
- Mandar a procesar toda la estructura del contexto
-https://stackoverflow.com/questions/48066271/how-to-print-a-pointer-address-without-printf
- 


# Testers
- https://github.com/Kwevan/PRINTF_TESTER
- https://github.com/Mazoise/42TESTERS-PRINTF
- https://github.com/gavinfielder/pft
- https://github.com/charMstr/printf_lover_v2



SOURCES	= ft_printf.c  eval_format_specifer.c  solve_string.c utils.c eval_context.c solve_character.c \
					solve_decimal_integer.c solve_percent_sign.c solve_pointer.c solve_unsigned_decimal_integer.c \
					solve_unsigned_hexadecimal_integer.c