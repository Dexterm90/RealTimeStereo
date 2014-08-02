set language "C"
set globalAPint ""
set globalVariable ""
set gportName0 "_iob"
set gportInterface0 "memory"
set structName0 "FILE"
set structMember0 ""
set portName100 "_ptr"
set portInterface100 "memory"
set portData100 "char"
set portPointer100 "1"
set portArrayDim100 0
set portConst100 "0"
set portVolatile100 "0"
set portArrayOpt100 ""
set port100 [list $portName100 $portInterface100 $portData100 $portPointer100 $portArrayDim100 $portConst100 $portVolatile100 $portArrayOpt100]
lappend structMember0 $port100
set portName101 "_cnt"
set portInterface101 "memory"
set portData101 "int"
set portPointer101 "0"
set portArrayDim101 0
set portConst101 "0"
set portVolatile101 "0"
set portArrayOpt101 ""
set port101 [list $portName101 $portInterface101 $portData101 $portPointer101 $portArrayDim101 $portConst101 $portVolatile101 $portArrayOpt101]
lappend structMember0 $port101
set portName102 "_base"
set portInterface102 "memory"
set portData102 "char"
set portPointer102 "1"
set portArrayDim102 0
set portConst102 "0"
set portVolatile102 "0"
set portArrayOpt102 ""
set port102 [list $portName102 $portInterface102 $portData102 $portPointer102 $portArrayDim102 $portConst102 $portVolatile102 $portArrayOpt102]
lappend structMember0 $port102
set portName103 "_flag"
set portInterface103 "memory"
set portData103 "int"
set portPointer103 "0"
set portArrayDim103 0
set portConst103 "0"
set portVolatile103 "0"
set portArrayOpt103 ""
set port103 [list $portName103 $portInterface103 $portData103 $portPointer103 $portArrayDim103 $portConst103 $portVolatile103 $portArrayOpt103]
lappend structMember0 $port103
set portName104 "_file"
set portInterface104 "memory"
set portData104 "int"
set portPointer104 "0"
set portArrayDim104 0
set portConst104 "0"
set portVolatile104 "0"
set portArrayOpt104 ""
set port104 [list $portName104 $portInterface104 $portData104 $portPointer104 $portArrayDim104 $portConst104 $portVolatile104 $portArrayOpt104]
lappend structMember0 $port104
set portName105 "_charbuf"
set portInterface105 "memory"
set portData105 "int"
set portPointer105 "0"
set portArrayDim105 0
set portConst105 "0"
set portVolatile105 "0"
set portArrayOpt105 ""
set port105 [list $portName105 $portInterface105 $portData105 $portPointer105 $portArrayDim105 $portConst105 $portVolatile105 $portArrayOpt105]
lappend structMember0 $port105
set portName106 "_bufsiz"
set portInterface106 "memory"
set portData106 "int"
set portPointer106 "0"
set portArrayDim106 0
set portConst106 "0"
set portVolatile106 "0"
set portArrayOpt106 ""
set port106 [list $portName106 $portInterface106 $portData106 $portPointer106 $portArrayDim106 $portConst106 $portVolatile106 $portArrayOpt106]
lappend structMember0 $port106
set portName107 "_tmpfname"
set portInterface107 "memory"
set portData107 "char"
set portPointer107 "1"
set portArrayDim107 0
set portConst107 "0"
set portVolatile107 "0"
set portArrayOpt107 ""
set port107 [list $portName107 $portInterface107 $portData107 $portPointer107 $portArrayDim107 $portConst107 $portVolatile107 $portArrayOpt107]
lappend structMember0 $port107
set gportData0 [list $structName0 "struct _iobuf " $structMember0 0 0]
set gportPointer0 "0"
set gportArrayDim0 [list 0]
set gportConst0 "0"
set gportVolatile0 "0"
set gportInitilizer0 ""
set gextern0 1
set gport0 [list $gportName0 $gportInterface0 $gportData0 $gportPointer0 $gportArrayDim0 $gportConst0 $gportVolatile0 $gportInitilizer0 $gextern0]
lappend globalVariable $gport0
set staticVariable ""
set moduleName "disparityMap"
set rawDecl [list "void" "disparityMap \(ptype leftImage\[288 * 384\],
     ptype rightImage\[288 * 384\],
     ptype dMap\[288 * 384\]\)"]
set argAPint ""
set returnAPint ""
set portList ""
set portName0 "leftImage"
set portInterface0 "memory"
set portData0 "[list ap_uint "8" ]"
set portPointer0 "0"
set portArrayDim0 [list 110592]
set portConst0 "0"
set portVolatile0 "0"
set portArrayOpt0 ""
set port0 [list $portName0 $portInterface0 $portData0 $portPointer0 $portArrayDim0 $portConst0 $portVolatile0 $portArrayOpt0]
lappend portList $port0
set portName1 "rightImage"
set portInterface1 "memory"
set portData1 "[list ap_uint "8" ]"
set portPointer1 "0"
set portArrayDim1 [list 110592]
set portConst1 "0"
set portVolatile1 "0"
set portArrayOpt1 ""
set port1 [list $portName1 $portInterface1 $portData1 $portPointer1 $portArrayDim1 $portConst1 $portVolatile1 $portArrayOpt1]
lappend portList $port1
set portName2 "dMap"
set portInterface2 "memory"
set portData2 "[list ap_uint "8" ]"
set portPointer2 "0"
set portArrayDim2 [list 110592]
set portConst2 "0"
set portVolatile2 "0"
set portArrayOpt2 ""
set port2 [list $portName2 $portInterface2 $portData2 $portPointer2 $portArrayDim2 $portConst2 $portVolatile2 $portArrayOpt2]
lappend portList $port2
set dataPackList ""
set module [list $moduleName $portList $rawDecl $argAPint $returnAPint $dataPackList]
set hasCPPAPInt 1
set hasCPPAPFix 0
set hasSCFix 0
set hasCPPComplex 0
set hasCBool 0
set isTemplateTop 0
set useIntT 1
