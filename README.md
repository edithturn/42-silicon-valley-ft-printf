# ft_printf

### Info:
Recode printf function

### Printf Workflow

See the workflow [HERE](https://drive.google.com/file/d/1zPrMQ2q4wuR16TWdBtKlLVVquNKdpGmb/view?usp=sharing)

### Compilation
```bash
make all
gcc  ./tests/main_test_c.c libftprintf.a  -I ./source/
gcc  ./tests/main_test_di.c libftprintf.a  -I ./source/
```

### Debug  Mode

- First: Change your Makefile, adding -g3
```c
	@$(CC) -g3 $(CFLAGS) $(SRCS) -I$(INCLUDES)
```
Then execute:
```c
cd {$HOME}/42-silicon-valley-ft-printf
make all
gcc -g3 ./tests/01_main_test_s.c libftprintf.a
gcc -g3 ./tests/02_main_test_s.c libftprintf.a
gcc -g3 ./tests/03_main_test_di.c libftprintf.a
gcc -g3 ./tests/04_main_test_p.c libftprintf.a
gcc -g3 ./tests/05_main_test_x.c libftprintf.a
gcc -g3 ./tests/05_main_test_u.c libftprintf.a

lldb a.out
b main
run
gui
```



### Note
- Guaradar Contexto
- Mandar a Dispatcher
	- Depende de si es d,s, c
- Mandar a procesar toda la estructura del contexto
-https://stackoverflow.com/questions/48066271/how-to-print-a-pointer-address-without-
- Readme : lo convierte en pagina web.
- Datatype Union |https://www.tutorialspoint.com/cprogramming/c_unions.htm | Docosaurius | https://github.com/facebook/docusaurus
- https://github.com/lgutter/ft_printf


# Testers

Recommended tester:
- git clone https://github.com/gavinfielder/pft.git pft && echo "pft/" >> .gitignore

Others
- https://github.com/Kwevan/PRINTF_TESTER
- https://github.com/Mazoise/42TESTERS-PRINTF
- https://github.com/gavinfielder/pft
- https://github.com/charMstr/printf_lover_v2