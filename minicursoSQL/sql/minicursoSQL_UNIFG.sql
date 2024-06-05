CREATE TABLE `usuarios` (
  `cpf` integer PRIMARY KEY,
  `username` varchar(255),
  `celular` varchar(255),
  `email` varchar(255),
  `endereco` varchar(255)
);

CREATE TABLE `produto` (
  `codigo` integer PRIMARY KEY,
  `nomeprod` varchar(255),
  `origemcep` integer
);

CREATE TABLE `empresa` (
  `cnpj` integer PRIMARY KEY,
  `nome` varchar(255),
  `endereco` integer
);

ALTER TABLE `empresa` ADD FOREIGN KEY (`cnpj`) REFERENCES `usuarios` (`cpf`);

ALTER TABLE `produto` ADD FOREIGN KEY (`codigo`) REFERENCES `empresa` (`cnpj`);
