//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSString;

@interface MBKRouter : NSObject
{
    NSString *_mapFileName;
    CDUnknownBlockType _defaultExecutingBlock;
    NSString *_prefix;
    NSString *_postfix;
    Class _defaultClassType;
    NSMutableDictionary *_plistMapDictionary;
    NSMutableDictionary *_routes;
    NSMapTable *_instanceMap;
    NSArray *_defaultSubClasses;
}

+ (void)map:(id)arg1 toClassName:(id)arg2;
+ (_Bool)canOpenURL:(id)arg1;
+ (void)removeURL:(id)arg1;
+ (void)registerURL:(id)arg1 executingBlock:(CDUnknownBlockType)arg2;
+ (id)existedInstanceWithURL:(id)arg1;
+ (_Bool)openURL:(id)arg1 parameters:(id)arg2 preparationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 responseBlock:(CDUnknownBlockType)arg5;
+ (_Bool)openURL:(id)arg1 parameters:(id)arg2 preparationBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (_Bool)openURL:(id)arg1 parameters:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
+ (_Bool)openURL:(id)arg1 parameters:(id)arg2;
+ (_Bool)openURL:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *defaultSubClasses; // @synthesize defaultSubClasses=_defaultSubClasses;
@property(retain, nonatomic) NSMapTable *instanceMap; // @synthesize instanceMap=_instanceMap;
@property(retain, nonatomic) NSMutableDictionary *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) NSMutableDictionary *plistMapDictionary; // @synthesize plistMapDictionary=_plistMapDictionary;
@property(nonatomic) Class defaultClassType; // @synthesize defaultClassType=_defaultClassType;
@property(copy, nonatomic) NSString *postfix; // @synthesize postfix=_postfix;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(copy, nonatomic) CDUnknownBlockType defaultExecutingBlock; // @synthesize defaultExecutingBlock=_defaultExecutingBlock;
@property(retain, nonatomic) NSString *mapFileName; // @synthesize mapFileName=_mapFileName;
- (void).cxx_destruct;
- (id)assembledClassNameWithString:(id)arg1;
- (id)objectWithName:(id)arg1 parameters:(id)arg2;
- (id)executeDefaultBlock:(id)arg1 preparationBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 responseBlock:(CDUnknownBlockType)arg4;
- (Class)matchObjectByName:(id)arg1;
- (id)routeByURL:(id)arg1;
- (id)init;

@end
