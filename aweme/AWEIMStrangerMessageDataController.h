//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol AWEIMStrangerMessageDataControllerDelegate;

@interface AWEIMStrangerMessageDataController : NSObject
{
    NSMutableArray *_messageList;
    id <AWEIMStrangerMessageDataControllerDelegate> _delegate;
    NSString *_sessionId;
    NSMutableDictionary *_syncDict;
}

@property(retain, nonatomic) NSMutableDictionary *syncDict; // @synthesize syncDict=_syncDict;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak id <AWEIMStrangerMessageDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *messageList; // @synthesize messageList=_messageList;
- (void).cxx_destruct;
- (void)handleReceiveLatestStrangerMsgNoti:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)fetchStrangerMessageList:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSessionId:(id)arg1;

@end

