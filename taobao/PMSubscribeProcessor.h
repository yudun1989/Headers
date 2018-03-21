//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface PMSubscribeProcessor : NSObject
{
    NSString *_topic;
    NSString *_bizTag;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_subArray;
    NSMutableArray *_unsubArray;
}

@property(retain, nonatomic) NSMutableArray *unsubArray; // @synthesize unsubArray=_unsubArray;
@property(retain, nonatomic) NSMutableArray *subArray; // @synthesize subArray=_subArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *bizTag; // @synthesize bizTag=_bizTag;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (void)unsubscribeCallback:(id)arg1 result:(id)arg2;
- (void)subscribeCallback:(id)arg1 result:(id)arg2;
- (void)unsubCallbackProc:(id)arg1;
- (void)subCallbackProc:(id)arg1;
- (void)unSubscribeSend:(id)arg1;
- (void)procUnSubscribeStatus:(id)arg1;
- (void)subscribeSend:(id)arg1;
- (void)procSubscribeStatus:(id)arg1;
- (void)unsubscribe:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)subscribe:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)init;

@end

