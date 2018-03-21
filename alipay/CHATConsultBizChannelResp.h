//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CHATBaseRespVO.h"

@class NSDictionary, NSString;

@interface CHATConsultBizChannelResp : CHATBaseRespVO
{
    _Bool _needBindNewCard;
    NSString *_bizLimit;
    NSString *_channelType;
    NSString *_availableLimit;
    NSString *_instId;
    NSString *_bankName;
    NSString *_cardNo;
    NSString *_cardLast4No;
    NSString *_signId;
    NSString *_holderName;
    NSString *_assignedChannel;
    NSDictionary *_extInfos;
    NSString *_bizProduct;
    NSString *_tradeFrom;
    NSString *_limitShowUrl;
    NSString *_bizLimitDes;
    NSString *_channelTypeName;
}

+ (Class)extInfosElementClass;
@property(retain, nonatomic) NSString *channelTypeName; // @synthesize channelTypeName=_channelTypeName;
@property(retain, nonatomic) NSString *bizLimitDes; // @synthesize bizLimitDes=_bizLimitDes;
@property(retain, nonatomic) NSString *limitShowUrl; // @synthesize limitShowUrl=_limitShowUrl;
@property(nonatomic) _Bool needBindNewCard; // @synthesize needBindNewCard=_needBindNewCard;
@property(retain, nonatomic) NSString *tradeFrom; // @synthesize tradeFrom=_tradeFrom;
@property(retain, nonatomic) NSString *bizProduct; // @synthesize bizProduct=_bizProduct;
@property(retain, nonatomic) NSDictionary *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) NSString *assignedChannel; // @synthesize assignedChannel=_assignedChannel;
@property(retain, nonatomic) NSString *holderName; // @synthesize holderName=_holderName;
@property(retain, nonatomic) NSString *signId; // @synthesize signId=_signId;
@property(retain, nonatomic) NSString *cardLast4No; // @synthesize cardLast4No=_cardLast4No;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *instId; // @synthesize instId=_instId;
@property(retain, nonatomic) NSString *availableLimit; // @synthesize availableLimit=_availableLimit;
@property(retain, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *bizLimit; // @synthesize bizLimit=_bizLimit;
- (void).cxx_destruct;

@end

