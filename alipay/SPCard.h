//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SPCard : NSObject
{
    _Bool _cardNoHidden;
    int _sourceChannel;
    NSString *_bankName;
    NSString *_bankShortName;
    NSString *_cardIndex;
    NSString *_cardNo;
    NSString *_cardLastNo;
    NSString *_billId;
    NSString *_sourceChannelString;
    NSString *_bankSpeed;
    NSString *_holderName;
}

@property(retain, nonatomic) NSString *holderName; // @synthesize holderName=_holderName;
@property(retain, nonatomic) NSString *bankSpeed; // @synthesize bankSpeed=_bankSpeed;
@property(retain, nonatomic) NSString *sourceChannelString; // @synthesize sourceChannelString=_sourceChannelString;
@property(nonatomic) int sourceChannel; // @synthesize sourceChannel=_sourceChannel;
@property(nonatomic) _Bool cardNoHidden; // @synthesize cardNoHidden=_cardNoHidden;
@property(retain, nonatomic) NSString *billId; // @synthesize billId=_billId;
@property(retain, nonatomic) NSString *cardLastNo; // @synthesize cardLastNo=_cardLastNo;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSString *cardIndex; // @synthesize cardIndex=_cardIndex;
@property(retain, nonatomic) NSString *bankShortName; // @synthesize bankShortName=_bankShortName;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

