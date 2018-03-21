//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString, QQLockDictionary;

@interface QQStoryDiscoverUserInfoDataEngine : NSObject <IEngineDispatchDelegate>
{
    QQLockDictionary *_requestDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QQLockDictionary *requestDict; // @synthesize requestDict=_requestDict;
- (void)p_doEngineerReportCmd:(id)arg1 code:(long long)arg2 msg:(id)arg3 beginTime:(id)arg4;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)duplicateRequest:(id)arg1;
- (int)requestUserInfo:(id)arg1 userType:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

