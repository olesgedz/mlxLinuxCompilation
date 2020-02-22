cmake_minimum_required(VERSION 3.15)
project(fdf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(libft)
include_directories(sources/minilibx)
include_directories(sources/minilibx_macos)
include_directories(sources/minilibx_mms_20191025_beta)

add_executable(fdf
        libft/ft_atoi.c
        libft/ft_bzero.c
        libft/ft_isalnum.c
        libft/ft_isalpha.c
        libft/ft_isascii.c
        libft/ft_isblank.c
        libft/ft_iscntrl.c
        libft/ft_isdigit.c
        libft/ft_islower.c
        libft/ft_isprint.c
        libft/ft_isspace.c
        libft/ft_isupper.c
        libft/ft_itoa.c
        libft/ft_lstadd.c
        libft/ft_lstdel.c
        libft/ft_lstdelone.c
        libft/ft_lstiter.c
        libft/ft_lstmap.c
        libft/ft_lstnew.c
        libft/ft_memalloc.c
        libft/ft_memccpy.c
        libft/ft_memchr.c
        libft/ft_memcmp.c
        libft/ft_memcpy.c
        libft/ft_memdel.c
        libft/ft_memmove.c
        libft/ft_memset.c
        libft/ft_putchar.c
        libft/ft_putchar_fd.c
        libft/ft_putendl.c
        libft/ft_putendl_fd.c
        libft/ft_putnbr.c
        libft/ft_putnbr_fd.c
        libft/ft_putstr.c
        libft/ft_putstr_fd.c
        libft/ft_strcat.c
        libft/ft_strchr.c
        libft/ft_strclr.c
        libft/ft_strcmp.c
        libft/ft_strcpy.c
        libft/ft_strdel.c
        libft/ft_strdup.c
        libft/ft_strequ.c
        libft/ft_striter.c
        libft/ft_striteri.c
        libft/ft_strjoin.c
        libft/ft_strlcat.c
        libft/ft_strlen.c
        libft/ft_strmap.c
        libft/ft_strmapi.c
        libft/ft_strncat.c
        libft/ft_strncmp.c
        libft/ft_strncpy.c
        libft/ft_strnequ.c
        libft/ft_strnew.c
        libft/ft_strnstr.c
        libft/ft_strrchr.c
        libft/ft_strsplit.c
        libft/ft_strstr.c
        libft/ft_strsub.c
        libft/ft_strtrim.c
        libft/ft_tolower.c
        libft/ft_toupper.c
        libft/libft.h
        sources/minilibx/test/main.c
        sources/minilibx/test/new_win.c
        sources/minilibx/mlx.h
        sources/minilibx/mlx_clear_window.c
        sources/minilibx/mlx_destroy_image.c
        sources/minilibx/mlx_destroy_window.c
        sources/minilibx/mlx_expose_hook.c
        sources/minilibx/mlx_flush_event.c
        sources/minilibx/mlx_get_color_value.c
        sources/minilibx/mlx_get_data_addr.c
        sources/minilibx/mlx_hook.c
        sources/minilibx/mlx_init.c
        sources/minilibx/mlx_int.h
        sources/minilibx/mlx_int_anti_resize_win.c
        sources/minilibx/mlx_int_do_nothing.c
        sources/minilibx/mlx_int_get_visual.c
        sources/minilibx/mlx_int_param_event.c
        sources/minilibx/mlx_int_set_win_event_mask.c
        sources/minilibx/mlx_int_str_to_wordtab.c
        sources/minilibx/mlx_int_wait_first_expose.c
        sources/minilibx/mlx_key_hook.c
        sources/minilibx/mlx_lib_xpm.c
        sources/minilibx/mlx_loop.c
        sources/minilibx/mlx_loop_hook.c
        sources/minilibx/mlx_mouse_hook.c
        sources/minilibx/mlx_new_image.c
        sources/minilibx/mlx_new_window.c
        sources/minilibx/mlx_pixel_put.c
        sources/minilibx/mlx_put_image_to_window.c
        sources/minilibx/mlx_rgb.c
        sources/minilibx/mlx_string_put.c
        sources/minilibx/mlx_xpm.c
#        sources/minilibx_macos/font.c
#        sources/minilibx_macos/mlx.h
#        sources/minilibx_macos/mlx_init_loop.m
#        sources/minilibx_macos/mlx_int.h
#        sources/minilibx_macos/mlx_int_str_to_wordtab.c
#        sources/minilibx_macos/mlx_new_image.m
#        sources/minilibx_macos/mlx_new_window.h
#        sources/minilibx_macos/mlx_new_window.m
#        sources/minilibx_macos/mlx_rgb.c
#        sources/minilibx_macos/mlx_shaders.c
#        sources/minilibx_macos/mlx_xpm.c
#        sources/minilibx_mms_20191025_beta/font.c
#        sources/minilibx_mms_20191025_beta/mlx.h
#        sources/minilibx_mms_20191025_beta/mlx_png.c
#        sources/minilibx_mms_20191025_beta/mlx_rgb.c
#        sources/minilibx_mms_20191025_beta/mlx_string_put.c
#        sources/minilibx_mms_20191025_beta/mlx_xpm.c
        errors.h
        fdf.h
        ft_read.c
        get_next_line.c
        get_next_line.h
        grafon.c
        main.c
        start.c)

target_link_libraries(fdf "-framework AppKit")
target_link_libraries(fdf "-framework OpenGL")
