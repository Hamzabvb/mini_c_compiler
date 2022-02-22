
Function → Type identifier (ArgList ) CompoundStmt

ArgList → Type identifier NewArgList			
NewArgList → , Arg NewArgList | ε

Arg → Type identifier

Declaration → Type IdentList ;

Type → int | float

IdentList → identifier IdentListEnd 			
IdentListEnd → , IdentList | ε

Stmt → ForStmt
		| WhileStmt
		| Expr ;
		| IfStmt
		| CompoundStmt
		| Declaration
		| ;

ForStmt → for ( Expr ; ForStmtEnd			
ForStmtEnd → Expr ; ForStmtEnd1 | ; ForStmtEnd2
ForStmtEnd1 → Expr ) Stmt | ) Stmt
ForStmtEnd2 → ) Stmt | Expr ) Stmt 

WhileStmt → while ( Expr ) Stmt			

IfStmt → if ( Expr ) Stmt IfStmtEnd						
IfStmtEnd → else Stmt | ε

CompoundStmt → { StmtList } 

StmtList → Stmt StmtList |  ε		
	
Expr → identifier = Expr | Rvalue		

Rvalue → Mag NewRvalue					
NewRvalue → Compare Mag NewRvalue | ε

Compare → == | < | <= | > | >= | !=		

Mag → Term NewMag						
NewMag → + Term NewMag | - Term NewMag | ε

Term → Factor NewTerm					
NewTerm → * Factor NewTerm | / Factor NewTerm | ε

Factor → ( Expr ) | - Factor | + Factor | identifier | number