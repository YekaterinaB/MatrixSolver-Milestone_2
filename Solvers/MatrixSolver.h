//
// Created by yekaterina on 11/01/2020.
//

#ifndef MILESTONE_2_MATRIXSOLVER_H
#define MILESTONE_2_MATRIXSOLVER_H


#include "Solver.h"
#include "../Searchables/MatrixMaze.h"
#include "../StringUtils.h"

class MatrixSolver : public Solver<string, string> {

private:
    Searcher *searcher;
    MatrixMaze *searchable;
    string solution = "";
public:
    MatrixSolver(Searcher *s) {
        searcher = s;
    }

    virtual void createProblemFromString(const string &str);

    virtual string toString(const string &solution) {return solution;}

    virtual string solve(const string &problem);

    ~MatrixSolver() {
        delete searchable;
    }


};


#endif //MILESTONE_2_MATRIXSOLVER_H