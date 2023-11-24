CREATE TABLE Usuarios(
RG text(30) NOT NULL,
Nome text(255) NOT NULL,
Email text(255) NOT NULL,
Pendencias text(255)
);

CREATE TABLE CDs(
Tombo text(150) NOT NULL,
Turma text(2) NOT NULL,
Arquivos text(255) NOT NULL
);

CREATE TABLE Emprestam(
RG text(30) NOT NULL,
Tombo text(150) NOT NULL,
Data date NOT NULL,
Status text(200) NOT NULL,
Data_davolucao date NOT NULL
);

CREATE TABLE Enciclopedias(
Tombo text(150) NOT NULL,
Disciplina text(255) NOT NULL
);

CREATE_Funcionarios
CREATE TABLE Funcionarios(
RG text(30) NOT NULL,
Funcao text(255) NOT NULL,
Carga_horaria integer NOT NULL
);

CREATE TABLE Livros(
Tombo text(150) NOT NULL,
Genero text(150) NOT NULL,
Tipo text(255) NOT NULL
);

CREATE TABLE Obras(
Tombo text(255) NOT NULL,
Num_exemplares integer NOT NULL,
Danos text(255) NOT NULL,
Editora text(255) NOT NULL,
Edicao integer NOT NULL,
Nome text(255) NOT NULL,
Ano_lancamento integer NOT NULL,
Volume integer NOT NULL,
Data_chegada date NOT NULL,
Nome_Autor text(255) NOT NULL,
Sobrenome_Autor text(255) NOT NULL 
)

CREATE TABLE Periodicos(
Tombo text(150) NOT NULL,
Periodo_puclicacao date NOT NULL
);

CREATE TABLE Professores(
RG text(30) NOT NULL,
Disciplina text(110) NOT NULL,
Turmas text(255) NOT NULL
);

CREATE TABLE Reservam(
RG text(30) NOT NULL,
Tombo text(150) NOT NULL,
Data date NOT NULL
);

CREATE TABLE Usuarios(
RG text(30) NOT NULL,
Nome text(255) NOT NULL,
Email text(255) NOT NULL,
Pendencias text(255)
);
