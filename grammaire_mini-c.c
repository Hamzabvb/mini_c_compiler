/*---pour rendre la grammaire factorisée à gauche
1 A → α β1 | α β2 | ... | α βn | γ avec α <> ε
2 A → α X | γ
3 X → β1 | β2 | ... | βn

*/

Function → Type identifier (ArgList ) CompoundStmt

ArgList → Type identifier NewArgList			
NewArgList → , Arg NewArgList | ε

Arg → Type identifier

Declaration → Type IdentList ;

Type → int | float

IdentList → identifier IdentListEnd 			//factorisée à gauche 
IdentListEnd → , IdentList | ε

Stmt → ForStmt
		| WhileStmt
		| Expr ;
		| IfStmt
		| CompoundStmt
		| Declaration
		| ;

ForStmt → for ( Expr ; ForStmtEnd			//factorisée à gauche 
ForStmtEnd → Expr ; ForStmtEnd1 | ; ForStmtEnd2
ForStmtEnd1 → Expr ) Stmt | ) Stmt
ForStmtEnd2 → ) Stmt | Expr ) Stmt 

WhileStmt → while ( Expr ) Stmt			

IfStmt → if ( Expr ) Stmt IfStmtEnd		//factorisée à gauche 				
IfStmtEnd → else Stmt | ε

CompoundStmt → { StmtList } 

StmtList → Stmt StmtList |  ε		
	
Expr → identifier = Expr | Rvalue		

Rvalue → Mag NewRvalue					
NewRvalue → Compare Mag NewRvalue | ε

Compare → == | < | <= | > | >= | !=		// ne pose pas des problémes

Mag → Term NewMag						
NewMag → + Term NewMag | - Term NewMag | ε

Term → Factor NewTerm					
NewTerm → * Factor NewTerm | / Factor NewTerm | ε

Factor → ( Expr ) | - Factor | + Factor | identifier | number