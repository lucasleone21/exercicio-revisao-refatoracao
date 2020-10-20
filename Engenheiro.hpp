#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#pragma once
#include "Empregado.hpp"

class Engenheiro : public Empregado{

    public:
        void setProjetos(int _projetos);
        int getProjetos();

    private:
        int projetos;
};
#endif
