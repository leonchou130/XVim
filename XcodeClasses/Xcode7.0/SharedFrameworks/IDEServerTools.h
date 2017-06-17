//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/SharedFrameworks/IDEServerTools.framework/Versions/A/IDEServerTools
// UUID: F2FA6EDE-67FE-317F-B5B9-160EF38990BC
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 8174.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @executable_path/
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/IDEServerTools.framework/Versions/A
//                       Run path: @executable_path/../../../Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/Frameworks
//                       Run path: @executable_path/../../../SharedFrameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/SharedFrameworks
//                       Run path: @executable_path/../../../PlugIns
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/PlugIns
//                       Run path: @executable_path/../../../PlugIns
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/PlugIns
//                       Run path: @executable_path/../../../PlugIns/IDEiOSSupportCore.ideplugin/Contents/Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/PlugIns/IDEiOSSupportCore.ideplugin/Contents/Frameworks
//                       Run path: @executable_path/../../../PlugIns/Xcode3Core.ideplugin/Contents/Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/PlugIns/Xcode3Core.ideplugin/Contents/Frameworks
//                       Run path: @executable_path/../../../OtherFrameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/OtherFrameworks
//                       Run path: @executable_path/../../../Developer/Library/PrivateFrameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/Developer/Library/PrivateFrameworks
//                       Run path: @executable_path/../../../Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib
//                       Run path: @loader_path/../Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/IDEServerTools.framework/Versions/Frameworks
//                       Run path: @executable_path/../Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/IDEServerTools.framework/Versions/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/IDEServerTools.framework/Versions/A/Frameworks
//

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface XCSPlatform (DVTPlatform)
+ (id)platformWithDVTPlatform:(id)arg1 validationErrors:(id *)arg2;
- (id)platformWithSimulatorPlatform:(id)arg1 validationErrors:(id *)arg2;
@end

@interface XCSPlatformList : NSObject
{
    NSMutableDictionary *_platforms;
}

@property(retain, nonatomic) NSMutableDictionary *platforms; // @synthesize platforms=_platforms;
- (void).cxx_destruct;
- (id)blocksForSavingOnService:(id)arg1;
- (void)addSimulatorPlatform:(id)arg1;
- (void)addPlatform:(id)arg1;
- (void)addPlatforms:(id)arg1;
- (id)init;

@end

@interface XCSPlatformManager : NSObject
{
    XCSService *_service;
}

@property(readonly) XCSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (BOOL)saveAvailablePlatformsWithError:(id *)arg1;
- (id)initWithService:(id)arg1;

@end

