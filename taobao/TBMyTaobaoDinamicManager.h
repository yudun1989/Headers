//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBMyTaobaoDinamicManager : NSObject
{
    _Bool _isDinamicOn;
    NSMutableDictionary *_dataModelDic;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isDinamicOn; // @synthesize isDinamicOn=_isDinamicOn;
@property(retain, nonatomic) NSMutableDictionary *dataModelDic; // @synthesize dataModelDic=_dataModelDic;
- (void).cxx_destruct;
- (void)downloadTemplates:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)initOriginalData;
- (void)registView;
- (void)registPaser;
- (void)registHandler;
- (void)updateABTestSwitch;

@end
