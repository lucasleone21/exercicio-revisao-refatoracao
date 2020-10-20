#include "Empregado.hpp"
#define BONUS 0.5
#define HORAS_MAX 8

double Empregado::getPagamentoHora(){
	return this -> PagamentoHora;
}

std::string Empregado::getNome(){
	return this -> nome;
}

double Empregado::getHorasTrabalhadas(){
	return this -> horasTrabalhadas;
}

void Empregado::setPagamentoHora(double _pagamento){
	this -> PagamentoHora = _pagamento;
}

void Empregado::setNome(std::string _nome){
	this -> nome = _nome;
}

void Empregado::setHorasTrabalhadas(double _horasTrabalhadas){
	this -> horasTrabalhadas = _horasTrabalhadas;
}

double Empregado::SalarioMes(){
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    double total = horasTrabalhadas;

    if(horasTrabalhadas > HORAS_MAX){
        double horaExtra = horasTrabalhadas - HORAS_MAX; // tirei o this ->
        total += horaExtra * BONUS; // 50%
    }
    return  total * PagamentoHora;

}
