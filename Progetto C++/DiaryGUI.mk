##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=DiaryGUI
ConfigurationName      :=Debug
WorkspacePath          :=/Users/heidigarciacanizares/Documents/CodeLite
ProjectPath            :=/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Heidi Garcia Canizares
Date                   :=02/12/2018
CodeLitePath           :="/Users/heidigarciacanizares/Library/Application Support/CodeLite"
LinkerName             :=clang++
SharedObjectLinkerName :=clang++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
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
ObjectsFileList        :="DiaryGUI.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  $(shell /usr/local/bin/wx-config --libs)
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)/Users/heidigarciacanizares/Desktop/Diary_include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)boost_serialization 
ArLibs                 :=  "libboost_serialization" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := clang++
CC       := clang
CXXFLAGS :=  -g -O0 -Wall $(shell /usr/local/bin/wx-config --cflags)  $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := llvm-as


##
## User defined environment variables
##
CodeLiteDir:=/private/var/folders/3j/7z1hwkfx7zb0y61xgbbnyw140000gn/T/AppTranslocation/D2AC5CAD-E0DC-459D-8AE0-FBA86FE83D98/d/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/AddActivityListFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/ActivityDetailsFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivityList.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Activity.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Date.cpp$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IntermediateDirectory)/AddActivityFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_ActivityList.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivity.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Administrator.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Board.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_DateException.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/AddSubActivity.cpp$(ObjectSuffix) $(IntermediateDirectory)/NewBoardFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/AddPersonFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/DropTargetListCtrl.cpp$(ObjectSuffix) $(IntermediateDirectory)/DiaryHomeFrame.cpp$(ObjectSuffix) \
	



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
$(IntermediateDirectory)/AddActivityListFrame.cpp$(ObjectSuffix): AddActivityListFrame.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/AddActivityListFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AddActivityListFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AddActivityListFrame.cpp$(PreprocessSuffix): AddActivityListFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AddActivityListFrame.cpp$(PreprocessSuffix) AddActivityListFrame.cpp

$(IntermediateDirectory)/ActivityDetailsFrame.cpp$(ObjectSuffix): ActivityDetailsFrame.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/ActivityDetailsFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ActivityDetailsFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ActivityDetailsFrame.cpp$(PreprocessSuffix): ActivityDetailsFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ActivityDetailsFrame.cpp$(PreprocessSuffix) ActivityDetailsFrame.cpp

$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix): MainFrame.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/MainFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix): MainFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix) MainFrame.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivityList.cpp$(ObjectSuffix): ../../../Desktop/Diary_include/SubActivityList.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Desktop/Diary_include/SubActivityList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivityList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivityList.cpp$(PreprocessSuffix): ../../../Desktop/Diary_include/SubActivityList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivityList.cpp$(PreprocessSuffix) ../../../Desktop/Diary_include/SubActivityList.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Activity.cpp$(ObjectSuffix): ../../../Desktop/Diary_include/Activity.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Desktop/Diary_include/Activity.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Activity.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Activity.cpp$(PreprocessSuffix): ../../../Desktop/Diary_include/Activity.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Activity.cpp$(PreprocessSuffix) ../../../Desktop/Diary_include/Activity.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Date.cpp$(ObjectSuffix): ../../../Desktop/Diary_include/Date.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Desktop/Diary_include/Date.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Date.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Date.cpp$(PreprocessSuffix): ../../../Desktop/Diary_include/Date.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Date.cpp$(PreprocessSuffix) ../../../Desktop/Diary_include/Date.cpp

$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix): wxcrafter_bitmaps.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/wxcrafter_bitmaps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix): wxcrafter_bitmaps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix) wxcrafter_bitmaps.cpp

$(IntermediateDirectory)/AddActivityFrame.cpp$(ObjectSuffix): AddActivityFrame.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/AddActivityFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AddActivityFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AddActivityFrame.cpp$(PreprocessSuffix): AddActivityFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AddActivityFrame.cpp$(PreprocessSuffix) AddActivityFrame.cpp

$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix): wxcrafter.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/wxcrafter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix): wxcrafter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix) wxcrafter.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_ActivityList.cpp$(ObjectSuffix): ../../../Desktop/Diary_include/ActivityList.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Desktop/Diary_include/ActivityList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_ActivityList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_ActivityList.cpp$(PreprocessSuffix): ../../../Desktop/Diary_include/ActivityList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_ActivityList.cpp$(PreprocessSuffix) ../../../Desktop/Diary_include/ActivityList.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivity.cpp$(ObjectSuffix): ../../../Desktop/Diary_include/SubActivity.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Desktop/Diary_include/SubActivity.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivity.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivity.cpp$(PreprocessSuffix): ../../../Desktop/Diary_include/SubActivity.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_SubActivity.cpp$(PreprocessSuffix) ../../../Desktop/Diary_include/SubActivity.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Administrator.cpp$(ObjectSuffix): ../../../Desktop/Diary_include/Administrator.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Desktop/Diary_include/Administrator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Administrator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Administrator.cpp$(PreprocessSuffix): ../../../Desktop/Diary_include/Administrator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Administrator.cpp$(PreprocessSuffix) ../../../Desktop/Diary_include/Administrator.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Board.cpp$(ObjectSuffix): ../../../Desktop/Diary_include/Board.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Desktop/Diary_include/Board.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Board.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Board.cpp$(PreprocessSuffix): ../../../Desktop/Diary_include/Board.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_Board.cpp$(PreprocessSuffix) ../../../Desktop/Diary_include/Board.cpp

$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_DateException.cpp$(ObjectSuffix): ../../../Desktop/Diary_include/DateException.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Desktop/Diary_include/DateException.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_DateException.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_up_up_Desktop_Diary_include_DateException.cpp$(PreprocessSuffix): ../../../Desktop/Diary_include/DateException.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_up_up_Desktop_Diary_include_DateException.cpp$(PreprocessSuffix) ../../../Desktop/Diary_include/DateException.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/AddSubActivity.cpp$(ObjectSuffix): AddSubActivity.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/AddSubActivity.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AddSubActivity.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AddSubActivity.cpp$(PreprocessSuffix): AddSubActivity.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AddSubActivity.cpp$(PreprocessSuffix) AddSubActivity.cpp

$(IntermediateDirectory)/NewBoardFrame.cpp$(ObjectSuffix): NewBoardFrame.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/NewBoardFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NewBoardFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NewBoardFrame.cpp$(PreprocessSuffix): NewBoardFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NewBoardFrame.cpp$(PreprocessSuffix) NewBoardFrame.cpp

$(IntermediateDirectory)/AddPersonFrame.cpp$(ObjectSuffix): AddPersonFrame.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/AddPersonFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/AddPersonFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/AddPersonFrame.cpp$(PreprocessSuffix): AddPersonFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/AddPersonFrame.cpp$(PreprocessSuffix) AddPersonFrame.cpp

$(IntermediateDirectory)/DropTargetListCtrl.cpp$(ObjectSuffix): DropTargetListCtrl.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/DropTargetListCtrl.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DropTargetListCtrl.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DropTargetListCtrl.cpp$(PreprocessSuffix): DropTargetListCtrl.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DropTargetListCtrl.cpp$(PreprocessSuffix) DropTargetListCtrl.cpp

$(IntermediateDirectory)/DiaryHomeFrame.cpp$(ObjectSuffix): DiaryHomeFrame.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/heidigarciacanizares/Documents/CodeLite/DiaryGUI/DiaryHomeFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DiaryHomeFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DiaryHomeFrame.cpp$(PreprocessSuffix): DiaryHomeFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DiaryHomeFrame.cpp$(PreprocessSuffix) DiaryHomeFrame.cpp

##
## Clean
##
clean:
	$(RM) -r ./Debug/


