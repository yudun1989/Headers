//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface GroupLiveReqData : NSObject
{
    int __reqSeq;
    NSMutableArray *__listCallback;
    NSMutableDictionary *__0x3fb_0RspData;
    double __lastReqTimer;
    long long __requestState;
    unsigned long long __groupUin;
}

@property(nonatomic) unsigned long long _groupUin; // @synthesize _groupUin=__groupUin;
@property(nonatomic) int _reqSeq; // @synthesize _reqSeq=__reqSeq;
@property(nonatomic) long long _requestState; // @synthesize _requestState=__requestState;
@property(nonatomic) double _lastReqTimer; // @synthesize _lastReqTimer=__lastReqTimer;
@property(nonatomic) NSMutableDictionary *_0x3fb_0RspData; // @synthesize _0x3fb_0RspData=__0x3fb_0RspData;
@property(nonatomic) NSMutableArray *_listCallback; // @synthesize _listCallback=__listCallback;
- (void)executeBufferCallbacks;
- (void)dealloc;
- (id)init;

@end

