//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMRequestItem.h>

@class NSArray;

@interface QQRedPointReqItem : SAMRequestItem
{
    NSArray *_pullReqList;
    NSArray *_unfinishedReqList;
}

@property(retain, nonatomic) NSArray *unfinishedReqList; // @synthesize unfinishedReqList=_unfinishedReqList;
@property(retain, nonatomic) NSArray *pullReqList; // @synthesize pullReqList=_pullReqList;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (id)nsdataFromCString:(basic_string_075b6133)arg1;
- (id)nsstringFromCString:(basic_string_075b6133)arg1;
- (void)dealloc;

@end

