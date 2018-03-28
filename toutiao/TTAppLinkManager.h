//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface TTAppLinkManager : NSObject
{
    _Bool _hasEnterBackground;
    NSArray *_whiteList;
    NSString *_currentADID;
    NSMutableDictionary *_linkCompleteBlockDic;
}

+ (id)escapesBackURL:(id)arg1 value:(id)arg2 extraDic:(id)arg3;
+ (id)_backURLWithSourceTag:(id)arg1 channel:(id)arg2 value:(id)arg3 extraDic:(id)arg4;
+ (id)sharedInstance;
+ (_Bool)_dealCommonWithOpenURLList:(id)arg1 routeUrl:(id *)arg2 sourceTag:(id)arg3 value:(id)arg4 extrDic:(id)arg5;
+ (_Bool)_dealCommonWithOpenURL:(id)arg1 sourceTag:(id)arg2 value:(id)arg3 extrDic:(id)arg4;
+ (_Bool)_dealURLInJingDong:(id)arg1 openURL:(id)arg2 sourceTag:(id)arg3 value:(id)arg4 extrDic:(id)arg5;
+ (_Bool)_dealURLInTaoBao:(id)arg1 openURL:(id)arg2 sourceTag:(id)arg3 value:(id)arg4 extrDic:(id)arg5;
+ (_Bool)dealWithWebURL:(id)arg1 openURL:(id)arg2 openURLList:(id)arg3 routeUrl:(id *)arg4 sourceTag:(id)arg5 value:(id)arg6 extraDic:(id)arg7;
+ (_Bool)dealWithWebURL:(id)arg1 openURL:(id)arg2 sourceTag:(id)arg3 value:(id)arg4 extraDic:(id)arg5;
@property _Bool hasEnterBackground; // @synthesize hasEnterBackground=_hasEnterBackground;
@property(copy, nonatomic) NSMutableDictionary *linkCompleteBlockDic; // @synthesize linkCompleteBlockDic=_linkCompleteBlockDic;
@property(copy, nonatomic) NSString *currentADID; // @synthesize currentADID=_currentADID;
@property(retain, nonatomic) NSArray *whiteList; // @synthesize whiteList=_whiteList;
- (void).cxx_destruct;
- (void)linkCompleleBlockDicSetValue:(id)arg1 forKey:(id)arg2;
- (_Bool)handOpenURL:(id)arg1;
- (_Bool)containsScheme:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)addAppRuntimeObservers;
- (void)dealloc;
- (id)init;
- (void)openURL:(id)arg1 options:(id)arg2 condition:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)openURL:(id)arg1 value:(id)arg2 condition:(id)arg3;
- (void)openURL:(id)arg1 condition:(id)arg2;

@end

