//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SDPBUtils : NSObject
{
    NSMutableDictionary *_delegates;
    NSMutableDictionary *_sels;
}

+ (struct CPBMessageDecoder *)decodePB:(struct CPBMessageDecoder *)arg1 types:(id)arg2 tags:(id)arg3 datas:(id)arg4;
+ (id)decodePBWithData:(id)arg1 types:(id)arg2 tags:(id)arg3;
+ (struct CPBMessageEncoder *)encodePB:(struct CPBMessageEncoder *)arg1 datas:(id)arg2 types:(id)arg3 tags:(id)arg4;
+ (id)encodePBWithData:(id)arg1 types:(id)arg2 tags:(id)arg3;
+ (int)parseCnt4PB:(id *)arg1;
+ (int)sendWupBuffer:(id)arg1 cmd:(id)arg2 immediately:(_Bool)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)unregisterDispatchDelegate:(id)arg1;
- (void)registerDispatchDelegate:(id)arg1 dispatchDelegate:(id)arg2 method:(id)arg3;

@end

