create schema localhost;

use localhost;

show databases;

show tables;

create table academico (
	id int auto_increment primary key,
	name varchar(50) not null,
    rga int8 not null unique,
    phone varchar(20) null,
    cpf varchar(20) not null,
    birth date null,
    address varchar(255) null,
    gender varchar(5) not null,
    ammount int8 null,
    profile_picture blob null,
    curriculum text null
);

describe academico;

drop table localhost.academico;

insert into localhost.academico (name, rga, phone, cpf, birth, address, gender, ammount, profile_picture, curriculum) values
(
	'Fernando Queiroz da Silva',
    220334823,
    '(67) 3421-1122',
    '33344555587',
    '1955-12-08',
    'Rua da Lapa, 751. São Paulo - SP',
    'm',
    7500.00,
    '',
    'Texto longo...'
),
(
	'Alice de Melo',
    247898034,
    '(67) 3422-3324',
    '99988777767',
    '1968-01-19',
    'Rua Souza Lima, 35. Curitiba - PR',
    'f',
    null,
    '',
    ''
),
(
	'Fernando Queiroz da Silva',
    287954893,
    '(67) 3421-1122',
    '66688444476',
    '1962-09-15',
    'Rua Rebolças, 65. Piracicaba - SP',
    'm',
    8000.00,
    '',
    'Texto longo...'
);

select * from localhost.academico;
