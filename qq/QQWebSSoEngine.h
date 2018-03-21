//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface QQWebSSoEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_queryList;
    NSMutableDictionary *_queryCmd;
    NSMutableDictionary *_queryLimitList;
    int _xo;
}

+ (id)getInstance;
- (void)dealloc;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)sendSession:(id)arg1;
- (int)sendSession:(id)arg1 lengthLimit:(unsigned long long)arg2 freqLimit:(double)arg3;
- (_Bool)sendWithData:(id)arg1 webData:(id)arg2 cmd:(id)arg3 seq:(int *)arg4;
- (id)getCurrentDate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableDictionary *queryCmd; // @dynamic queryCmd;
@property(retain, nonatomic) NSMutableDictionary *queryLimitList; // @dynamic queryLimitList;
@property(retain, nonatomic) NSMutableDictionary *queryList; // @dynamic queryList;
@property(readonly) Class superclass;

@end

