//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString, NSString, NSTimer;

@interface RPEasyTrack : NSObject
{
    NSString *_verifyToken;
    NSMutableString *_strHits;
    NSTimer *_timer;
}

+ (id)shareTrack;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) NSMutableString *strHits; // @synthesize strHits=_strHits;
@property(retain, nonatomic) NSString *verifyToken; // @synthesize verifyToken=_verifyToken;
- (void).cxx_destruct;
- (id)getVerifyToken;
- (void)doHitTimer:(id)arg1;
- (void)reportAtOnce;
- (id)dict2str:(id)arg1;
- (void)trace:(id)arg1 page:(id)arg2 eventId:(id)arg3 extraInfo:(id)arg4;
- (void)livenessTrace:(id)arg1;
- (void)h5TraceWithPage:(id)arg1 eventId:(id)arg2 extraInfo:(id)arg3;
- (void)sdkTraceWithPage:(id)arg1 eventId:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 extraInfo:(id)arg6;
- (id)init;

@end

