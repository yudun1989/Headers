//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKCreditCard, NSString;

@interface MBKAdyenPaymentModel : NSObject
{
    _Bool _isSelected;
    NSString *_cardTitle;
    NSString *_iconImageName;
    NSString *_arrowsImageName;
    long long _cellType;
    long long _cellState;
    MBKCreditCard *_creditCard;
}

@property(retain, nonatomic) MBKCreditCard *creditCard; // @synthesize creditCard=_creditCard;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) NSString *arrowsImageName; // @synthesize arrowsImageName=_arrowsImageName;
@property(copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(copy, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
- (void).cxx_destruct;

@end

