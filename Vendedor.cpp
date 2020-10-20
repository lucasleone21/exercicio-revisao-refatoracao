#include "Vendedor.hpp"

int Vendedor::getQuotaMensalVendas()const {

    return this -> QuotaMensalVendas;
}

void Vendedor::setQuotaMensalVendas(double _vendas){

     this -> QuotaMensalVendas = _vendas;
}
double Vendedor::quotaTotalAnual(){

    return this -> QuotaMensalVendas * MESES_ANO;
}
