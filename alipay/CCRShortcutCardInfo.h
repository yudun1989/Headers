//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCRBaseModel.h"

@class NSString;

@interface CCRShortcutCardInfo : CCRBaseModel
{
    NSString *_signId;
    NSString *_signChannelType;
    NSString *_cardNoTail;
    NSString *_instId;
    NSString *_instName;
    NSString *_holderName;
}

@property(retain, nonatomic) NSString *holderName; // @synthesize holderName=_holderName;
@property(retain, nonatomic) NSString *instName; // @synthesize instName=_instName;
@property(retain, nonatomic) NSString *instId; // @synthesize instId=_instId;
@property(retain, nonatomic) NSString *cardNoTail; // @synthesize cardNoTail=_cardNoTail;
@property(retain, nonatomic) NSString *signChannelType; // @synthesize signChannelType=_signChannelType;
@property(retain, nonatomic) NSString *signId; // @synthesize signId=_signId;
- (void).cxx_destruct;

@end
