#include <string>
#pragma once

class Empregado {

    private:
        double PagamentoHora;
        std::string nome;
        double horasTrabalhadas;

    public:
        double getPagamentoHora();
        void setPagamentoHora(double _valorSalario);
		std::string getNome();
		void setNome(std::string Nome);
		double getHorasTrabalhadas();
		void setHorasTrabalhadas(double _horasTrabalhada);
		double SalarioMes();
};
