Function → Type identifier (ArgList ) CompoundStmt

ArgList → Type identifier | ArgList , Arg   // supp production unitaire

Arg → Type identifier

Declaration → Type IdentList ;

Type → int | float

IdentList → identifier , IdentList | identifier

Stmt → ForStmt
		| WhileStmt
		| Expr ;
		| IfStmt
		| CompoundStmt
		| Declaration
		| ;

ForStmt → for ( Expr ; OptExpr ; OptExpr ) Stmt
		|for ( Expr ; ; OptExpr ) Stmt 		// supp ε-productions
		|for ( Expr ; OptExpr ; ) Stmt
		|for ( Expr ; ; ) Stmt


WhileStmt → while ( Expr ) Stmt

IfStmt → if ( Expr ) Stmt ElsePart

ElsePart → else Stmt | ε

CompoundStmt → { StmtList }

StmtList → StmtList Stmt | ε

Expr → identifier = Expr | Rvalue

Rvalue → Rvalue Compare Mag | Mag

Compare → == | < | > | <= | >= | !=

Mag → Mag + Term | Mag - Term | Term

Term → Term * Factor | Term / Factor | Factor

Factor → ( Expr ) | - Factor | + Factor | identifier | number