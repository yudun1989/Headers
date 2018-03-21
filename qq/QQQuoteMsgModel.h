//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString, QQMessageModel;

@interface QQQuoteMsgModel : QQModel
{
    _Bool _hasPlayEmojAnimation;
    int _quoteMsgType;
    int _chatType;
    NSArray *_quoteMsgSeqArray;
    NSString *_senderUin;
    unsigned long long _time;
    long long _flag;
    NSString *_text;
    NSString *_outMsgQuoteText;
    NSString *_anonyNick;
    NSString *_groupCode;
    QQMessageModel *_origMsgModel;
    NSString *_title;
    NSString *_summary;
    NSString *_cover;
    NSString *_jumpUrl;
    NSString *_busiParams;
    NSString *_picLightCommentRichStr;
}

@property(nonatomic) _Bool hasPlayEmojAnimation; // @synthesize hasPlayEmojAnimation=_hasPlayEmojAnimation;
@property(copy, nonatomic) NSString *picLightCommentRichStr; // @synthesize picLightCommentRichStr=_picLightCommentRichStr;
@property(nonatomic) int chatType; // @synthesize chatType=_chatType;
@property(retain, nonatomic) NSString *busiParams; // @synthesize busiParams=_busiParams;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) QQMessageModel *origMsgModel; // @synthesize origMsgModel=_origMsgModel;
@property(retain, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(retain, nonatomic) NSString *anonyNick; // @synthesize anonyNick=_anonyNick;
@property(retain, nonatomic) NSString *outMsgQuoteText; // @synthesize outMsgQuoteText=_outMsgQuoteText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *senderUin; // @synthesize senderUin=_senderUin;
@property(retain, nonatomic) NSArray *quoteMsgSeqArray; // @synthesize quoteMsgSeqArray=_quoteMsgSeqArray;
@property(nonatomic) int quoteMsgType; // @synthesize quoteMsgType=_quoteMsgType;
- (void)dealloc;
- (id)getQuoteNickAndTime;
- (id)getQuoteNick;
- (id)getOutMsgAbstractQuoteText:(_Bool)arg1;
- (id)getAbstractQuoteText:(_Bool)arg1;
- (_Bool)isNeedUpdateNick;
- (_Bool)isNeedRequestOrigMsg;
- (void)limitTextLen:(long long)arg1;
- (_Bool)isComplete;

@end

