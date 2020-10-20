#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <iostream>

int main() {

    Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setPagamentoHora(35);
  eng1.setProjetos(3);
  eng1.setHorasTrabalhadas(9.5);
  std::cout << "Nome: " << eng1.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng1.SalarioMes() << std::endl;
  std::cout << "Projetos: " << eng1.getProjetos() << std::endl;
  std::cout << std::endl;

    Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setPagamentoHora(30);
  eng2.setProjetos(1);
  eng2.setHorasTrabalhadas(8);
  std::cout << "Nome: " << eng2.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng2.SalarioMes() << std::endl;
  std::cout << "Projetos: " << eng2.getProjetos() << std::endl;
  std::cout << std::endl;

    Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setPagamentoHora(30);
  eng3.setProjetos(2);
  eng3.setHorasTrabalhadas(8);
  std::cout << "Nome: " << eng3.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng3.SalarioMes() << std::endl;
  std::cout << "Projetos: " << eng3.getProjetos() << std::endl;
  std::cout << std::endl;


    Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setPagamentoHora(20);
  vend1.setQuotaMensalVendas(5000);
  vend1.setHorasTrabalhadas(6);
  std::cout << "Nome: " << vend1.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend1.SalarioMes() << std::endl;
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

    Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setPagamentoHora(25);
  vend2.setQuotaMensalVendas(3000);
  vend2.setHorasTrabalhadas(8);
  std::cout << "Nome: " << vend2.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend2.SalarioMes() << std::endl;
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

    Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setPagamentoHora(30);
  vend3.setQuotaMensalVendas(4000);
  vend3.setHorasTrabalhadas(8);
  std::cout << "Nome: " << vend3.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend3.SalarioMes() << std::endl;
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;

  return 0;
}

