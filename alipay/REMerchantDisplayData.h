//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface REMerchantDisplayData : NSObject
{
    NSString *_title;
    NSString *_avatarUrl;
    NSString *_name;
    NSString *_remark;
    NSString *_receiveAmount;
    NSString *_descText;
    NSString *_voucherTitile;
    NSString *_voucherUrl;
    long long _priceLabelStyle;
}

@property(nonatomic) long long priceLabelStyle; // @synthesize priceLabelStyle=_priceLabelStyle;
@property(retain, nonatomic) NSString *voucherUrl; // @synthesize voucherUrl=_voucherUrl;
@property(retain, nonatomic) NSString *voucherTitile; // @synthesize voucherTitile=_voucherTitile;
@property(retain, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(retain, nonatomic) NSString *receiveAmount; // @synthesize receiveAmount=_receiveAmount;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

