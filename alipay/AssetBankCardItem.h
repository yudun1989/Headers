//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AssetBankCardItem : NSObject
{
    NSString *_signId;
    NSString *_applyTime;
    NSString *_cardIndexNo;
    NSString *_cardNoLast4;
    NSString *_instId;
    NSString *_certNoHiding;
    NSString *_cardType;
}

@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *certNoHiding; // @synthesize certNoHiding=_certNoHiding;
@property(retain, nonatomic) NSString *instId; // @synthesize instId=_instId;
@property(retain, nonatomic) NSString *cardNoLast4; // @synthesize cardNoLast4=_cardNoLast4;
@property(retain, nonatomic) NSString *cardIndexNo; // @synthesize cardIndexNo=_cardIndexNo;
@property(retain, nonatomic) NSString *applyTime; // @synthesize applyTime=_applyTime;
@property(retain, nonatomic) NSString *signId; // @synthesize signId=_signId;
- (void).cxx_destruct;

@end

