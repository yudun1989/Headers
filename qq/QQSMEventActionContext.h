//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQAIOMsgModel, QQBaseChatModel, QQBaseChatUIOperation, QQStructuredMessageEvent, QQViewController;

@interface QQSMEventActionContext : NSObject
{
    QQAIOMsgModel *_aioMsgModel;
    QQStructuredMessageEvent *_event;
    QQViewController *_controller;
    QQBaseChatModel *_chatModel;
    QQBaseChatUIOperation *_chatUIOperation;
}

@property(retain, nonatomic) QQBaseChatUIOperation *chatUIOperation; // @synthesize chatUIOperation=_chatUIOperation;
@property(retain, nonatomic) QQBaseChatModel *chatModel; // @synthesize chatModel=_chatModel;
@property(nonatomic) __weak QQViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) QQStructuredMessageEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) QQAIOMsgModel *aioMsgModel; // @synthesize aioMsgModel=_aioMsgModel;
- (void).cxx_destruct;

@end

