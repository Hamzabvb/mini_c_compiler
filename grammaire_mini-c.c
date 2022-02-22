/*-------------------Éliminer la récursivité à gauche immédiate ou directe
1 Remplacer les productions de la forme A → Aω | β | δ par :
2 A → βA' | δA'
3 A'→ ωA' | ε
*/

Function → Type identifier (ArgList ) CompoundStmt

ArgList → Type identifier NewArgList			// supp la récursivité à gauche
NewArgList → , Arg NewArgList | ε

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

ForStmt → for ( Expr ; Expr ; Expr ) Stmt			
		|for ( Expr ; ; Expr ) Stmt 		
		|for ( Expr ; Expr ; ) Stmt
		|for ( Expr ; ; ) Stmt 


WhileStmt → while ( Expr ) Stmt

IfStmt → if ( Expr ) Stmt 							
		|if ( Expr ) Stmt else Stmt


CompoundStmt → { StmtList } 

StmtList → Stmt StmtList |  ε			// supp la récursivité à gauche
Expr → identifier = Expr | Rvalue		

Rvalue → Mag NewRvalue					// supp la récursivité à gauche
NewRvalue → Compare Mag NewRvalue | ε

Compare → == | < | > | <= | >= | !=

Mag → Term NewMag						// supp la récursivité à gauche
NewMag → + Term NewMag | - Term NewMag | ε

Term → Factor NewTerm					// supp la récursivité à gauche
NewTerm → * Factor NewTerm | / Factor NewTerm | ε

Factor → ( Expr ) | - Factor | + Factor | identifier | number