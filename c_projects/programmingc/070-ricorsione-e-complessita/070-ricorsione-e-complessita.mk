##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=070-ricorsione-e-complessita
ConfigurationName      :=Debug
WorkspacePath          :=/home/darkness/code/roma3/asdBarabashRomaTre/c_projects/programmingc
ProjectPath            :=/home/darkness/code/roma3/asdBarabashRomaTre/c_projects/programmingc/070-ricorsione-e-complessita
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=darkness
Date                   :=25/10/17
CodeLitePath           :=/home/darkness/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="070-ricorsione-e-complessita.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/fattoriale_ricorsivo.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/fattoriale_ricorsivo.c$(ObjectSuffix): fattoriale_ricorsivo.c $(IntermediateDirectory)/fattoriale_ricorsivo.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/darkness/code/roma3/asdBarabashRomaTre/c_projects/programmingc/070-ricorsione-e-complessita/fattoriale_ricorsivo.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/fattoriale_ricorsivo.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/fattoriale_ricorsivo.c$(DependSuffix): fattoriale_ricorsivo.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/fattoriale_ricorsivo.c$(ObjectSuffix) -MF$(IntermediateDirectory)/fattoriale_ricorsivo.c$(DependSuffix) -MM fattoriale_ricorsivo.c

$(IntermediateDirectory)/fattoriale_ricorsivo.c$(PreprocessSuffix): fattoriale_ricorsivo.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/fattoriale_ricorsivo.c$(PreprocessSuffix) fattoriale_ricorsivo.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


