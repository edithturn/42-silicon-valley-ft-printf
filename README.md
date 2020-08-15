# ft_printf

### Info:

clang - similar a c++
windows other compilator
assembler, languaje intermediate, se genran objets, then ensamblado {flow}
- Readme : lo convierte en pagina web.
- Datatype Union |https://www.tutorialspoint.com/cprogramming/c_unions.htm | Docosaurius | https://github.com/facebook/docusaurus
- https://github.com/lgutter/ft_printf



### Compilation
```bash
cd /home/edith/workspace/42/ft_printf/42-silicon-valley-ft-printf/test_files
```

```bash

../source_files/ft_eval_context.c ../source_files/  ft_eval_format_specifer.c ../source_files/ft_printf.c
../source_files/ft_utils.c ../source_files/solve_character.c
../source_files/solve_decimal_integer.c ../source_files/solve_percent_sign.c ../source_files/solve_pointer.c
../source_files/solve_string.c ../source_files/solve_unsigned_decimal_integer.c ../source_files/solve_unsigned_hexadecimal_integer.c

export FNC="../source_files/ft_eval_context.c ../source_files/ft_eval_format_specifer.c ../source_files/ft_printf.c
../source_files/ft_utils.c ../source_files/solve_character.c
../source_files/solve_decimal_integer.c ../source_files/solve_percent_sign.c ../source_files/solve_pointer.c
../source_files/solve_string.c ../source_files/solve_unsigned_decimal_integer.c ../source_files/solve_unsigned_hexadecimal_integer.c ../libft/ft_bzero.c  ../libft/ft_memset.c ../libft/ft_putchar.c ../libft/ft_putchar_fd.c ../libft/ft_itoa.c ../libft/ft_strdup.c ../libft/ft_putstr.c ../libft/ft_putstr_fd.c ../libft/ft_atoi.c ../libft/ft_isdigit.c   ../libft/ft_strncpy.c  ../libft/ft_memalloc.c  ../libft/ft_strnew.c ../libft/ft_strcat.c  ../libft/ft_strlen.c"

gcc main.c $FNC
gcc main_test_s.c $FNC

gcc  ./test_files/main_test_c.c libftprintf.a  -I ./source_files/

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

```
Debug mode -g3

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