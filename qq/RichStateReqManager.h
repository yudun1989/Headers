//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface RichStateReqManager : NSObject
{
    NSMutableDictionary *_reqDict;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableDictionary *reqDict; // @synthesize reqDict=_reqDict;
- (void).cxx_destruct;
- (void)clearAllRequest;
- (id)getRichStateRequest:(id)arg1;
- (void)removeRichStateReq:(id)arg1;
- (void)addRichStateRequest:(id)arg1 seq:(id)arg2;
- (id)init;

@end

