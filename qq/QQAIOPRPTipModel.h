//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQAIOMsgModel.h>

@class NSMutableArray, NSString;

@interface QQAIOPRPTipModel : QQAIOMsgModel
{
    NSMutableArray *_messages;
    double _cellHeight;
    NSString *_content;
}

- (void).cxx_destruct;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (id)cellClassName;
@property(readonly, nonatomic) NSString *prpIndex;
@property(readonly, nonatomic) NSString *prpId;
- (double)cellHeight;
@property(readonly, nonatomic) NSString *content;
- (id)getMessages;
- (void)addMessage:(id)arg1;
- (id)initWithMessageModel:(id)arg1;

@end

