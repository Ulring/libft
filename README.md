<h1 align="center">
	Libft
</h1>

<p align="center">
	<img alt="Code size in bytes" src="https://img.shields.io/github/languages/code-size/ulring/libft?color=blueviolet" />
  <img alt="GitHub top language" src="https://img.shields.io/github/languages/top/ulring/libft?color=purple" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/ulring/libft?color=blue" />
</p>

<h3 align="center">
	<a href="#-what-is-libft">What is libft?</a>
	<span> · </span>
	<a href="#-functions">Functions</a>
	<span> · </span>
	<a href="#-setup">Setup</a>
</h3>

---

## 📜 What is libft?

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones.
For more information, please refer to the [**subject**](https://github.com/Ulring/libft/blob/master/Resources/Libft.pdf).

## 📑 Functions

[`ft_isalpha`](src/ft_isalpha.c) [`ft_isdigit`](src/ft_isdigit.c) [`ft_isalnum`](src/ft_isalnum.c) [`ft_isascii`](src/ft_isascii.c) [`ft_isprint`](src/ft_isprint.c) [`ft_strlen`](src/t_strlen.c) [`ft_memset`](src/ft_memset.c) [`ft_bzero`](src/ft_bzero.c) [`ft_memcpy`](src/ft_memcpy.c) [`ft_memmove`](src/ft_memmove.c) [`ft_strlcpy`](src/ft_strlcpy.c) [`ft_strlcat`](src/ft_strlcat.c) [`ft_tolower`](src/ft_tolower.c) [`ft_toupper`](src/ft_toupper.c) [`ft_strchr`](src/ft_strchr.c) [`ft_strrchr`](src/ft_strrchr.c) [`ft_strncmp`](src/ft_strncmp.c) [`ft_memchr`](src/ft_memchr.c) [`ft_memcmp`](src/ft_memcmp.c) [`ft_strnstr`](src/ft_strnstr.c) [`ft_atoi`](src/ft_atoi.c) [`ft_calloc`](src/ft_calloc.c) [`ft_strdup`](src/ft_strdup.c) [`ft_substr`](src/ft_substr.c) [`ft_strjoin`](src/ft_strjoin.c) [`ft_strtrim`](src/ft_strtrim.c) [`ft_split`](src/ft_split.c) [`ft_itoa`](src/ft_itoa.c) [`ft_strmapi`](src/ft_strmapi.c) [`ft_striteri`](src/ft_striteri.c) [`ft_putchar_fd`](src/ft_putchar_fd.c) [`ft_putstr_fd`](src/ft_putstr_fd.c) [`ft_putendl_fd`](src/ft_putendl_fd.c) [`ft_putnbr_fd`](src/ft_putnbr_fd.c)

## 🔧 Setup

Clone the repository, and compile the library using the Makefile.
Here are the Makefile commands:

Command       |  Description
:-------------|:-------------
`make`        | Compile the library.
`make clean`  | Remove objects files.
`make fclean` | Remove objects files and the library.
`make re`     | Re-compile the library.

The binary `libft.a` will be created in the bin directory.
