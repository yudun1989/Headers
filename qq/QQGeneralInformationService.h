//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQBizDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQGeneralInformationService : NSObject <QQBizDelegate>
{
    NSMutableDictionary *_handlerDict;
}

+ (id)instance;
- (void)invoke:(id)arg1 forProtocol:(id)arg2;
- (_Bool)isPassViewSHow;
- (_Bool)isLogin;
- (id)doRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)sendData:(id)arg1 cmd:(id)arg2 pSeq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (void)unregisterDispatchDelegate:(id)arg1;
- (_Bool)registerDispatchDelegate:(id)arg1 dispatchDelegate:(id)arg2;
- (id)QQCleanTips;
- (id)QQLoadingTips:(id)arg1;
- (void)QQTrace:(id)arg1 inFile:(const char *)arg2 atLine:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

