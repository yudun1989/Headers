//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSString;

@interface GLiveGroupVideoStateMgr : NSObject <IEngineDispatchDelegate>
{
}

+ (id)shareInstance;
- (void)notifyError:(id)arg1;
- (void)parseResponseBuffer:(char *)arg1 size:(int)arg2 seq:(int)arg3;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)requestGroupVideoState:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

