CREATE TABLE [usuarios] (
  [cpf] integer PRIMARY KEY,
  [username] nvarchar(255),
  [celular] nvarchar(255),
  [email] nvarchar(255),
  [endereco] nvarchar(255)
)
GO

CREATE TABLE [produto] (
  [codigo] integer PRIMARY KEY,
  [nomeprod] nvarchar(255),
  [origemcep] integer
)
GO

CREATE TABLE [empresa] (
  [cnpj] integer PRIMARY KEY,
  [nome] nvarchar(255),
  [endereco] integer
)
GO

ALTER TABLE [empresa] ADD FOREIGN KEY ([cnpj]) REFERENCES [usuarios] ([cpf])
GO

ALTER TABLE [produto] ADD FOREIGN KEY ([codigo]) REFERENCES [empresa] ([cnpj])
GO
