#include <QScriptEngine>

#include "foo.h"

int main( int argc, char **argv )
{
    //test3
    QScriptEngine *engine = new QScriptEngine();
    engine->evaluate( "print( 'Hello World' );" );

    Foo *foo = new Foo();

    QScriptValue objectValue = engine->newQObject( foo );
    engine->globalObject().setProperty("foo", objectValue);

    engine->evaluate( ""
		      "print('Properties...');\n"
		      "for ( i in foo ) { print(i); }\n" );

    engine->evaluate( "foo.notASlot();"  );
		      
    engine->evaluate( "foo.myString = 'Hello World';\n"  );

    engine->evaluate( "foo.reverseString();"  );

    engine->evaluate( "print( foo.myString );"  );

//Comment 3
    return 0;
}
// final comments123