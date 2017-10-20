##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=stack
ConfigurationName      :=Debug
WorkspacePath          :=/home/darkness/code/roma3/asdBarabashRomaTre/c_projects/programmingc
ProjectPath            :=/home/darkness/code/roma3/asdBarabashRomaTre/c_projects/programmingc/stack
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=darkness
Date                   :=20/10/17
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
ObjectsFileList        :="stack.txt"
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
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/stack.c$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c $(IntermediateDirectory)/main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/darkness/code/roma3/asdBarabashRomaTre/c_projects/programmingc/stack/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(DependSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c

$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/stack.c$(ObjectSuffix): stack.c $(IntermediateDirectory)/stack.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/darkness/code/roma3/asdBarabashRomaTre/c_projects/programmingc/stack/stack.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/stack.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/stack.c$(DependSuffix): stack.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/stack.c$(ObjectSuffix) -MF$(IntermediateDirectory)/stack.c$(DependSuffix) -MM stack.c

$(IntermediateDirectory)/stack.c$(PreprocessSuffix): stack.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/stack.c$(PreprocessSuffix) stack.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


