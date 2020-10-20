#ifndef VENDEDOR_H
#define VENDEDOR_H
#pragma once
#define MESES_ANO 12
#include "Empregado.hpp"

class Vendedor : public Empregado{

    public:
       double quotaTotalAnual();
       void setQuotaMensalVendas(double _vendas);
       int getQuotaMensalVendas() const;

    private:
        double QuotaMensalVendas;
};
#endif
