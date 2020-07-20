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
export FNC="../source_files/ft_printf.c  ../source_files/ft_process_input.c  ../source_files/ft_process_format_specifier.c  ../libft/ft_bzero.c  ../libft/ft_memset.c ../libft/ft_putchar.c ../libft/ft_putchar_fd.c ../libft/ft_itoa.c ../libft/ft_strdup.c ../libft/ft_putstr.c ../libft/ft_putstr_fd.c"

gcc main.c $FNC
```
