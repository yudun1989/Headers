//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "Singleton-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TTProjectLogicManager : NSObject <Singleton>
{
    NSMutableDictionary *_logicDict;
    NSMutableDictionary *_mapperDict;
}

+ (id)dictionaryWithFilePathForResource:(id)arg1 type:(id)arg2;
+ (void)load;
@property(retain, nonatomic) NSMutableDictionary *mapperDict; // @synthesize mapperDict=_mapperDict;
@property(retain, nonatomic) NSMutableDictionary *logicDict; // @synthesize logicDict=_logicDict;
- (void).cxx_destruct;
- (void)registerMapper:(id)arg1;
- (id)dictionary:(id)arg1 forKey:(id)arg2;
- (id)dictionary:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
- (_Bool)logicBoolForKey:(id)arg1;
- (id)logicArrayForKey:(id)arg1;
- (id)logicDictionaryForKey:(id)arg1;
- (int)logicIntForKey:(id)arg1;
- (float)logicFloatForKey:(id)arg1;
- (id)logicStringForKey:(id)arg1;
- (_Bool)logicBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)logicArrayForKey:(id)arg1 defaultValue:(id)arg2;
- (id)logicDictionaryForKey:(id)arg1 defaultValue:(id)arg2;
- (int)logicIntForKey:(id)arg1 defaultValue:(int)arg2;
- (float)logicFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (id)logicStringForKey:(id)arg1 defaultValue:(id)arg2;
- (void)initLogicSettingDic;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

