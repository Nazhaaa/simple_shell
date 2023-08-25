# Définition du projet
project(simple_shell)

# Ajouter vos fichiers source
add_executable(myprogram chek.c  _exceve.c  exit.c  fork.c  functions.c  _getline.c  hsh  main.c  main.h  _printenv.c  _prompt.c  _putchar.c  README.md  token.c  wait.c )

# Spécifier le langage de liaison C
set_target_properties(myprogram PROPERTIES LINKER_LANGUAGE C)
