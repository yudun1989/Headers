//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSDCoupon : NSObject
{
    long long _realPayFen;
    long long _couponFen;
    NSString *_couponFenText;
    NSString *_sumFenText;
    NSString *_validBefore;
}

@property(copy, nonatomic) NSString *validBefore; // @synthesize validBefore=_validBefore;
@property(retain, nonatomic) NSString *sumFenText; // @synthesize sumFenText=_sumFenText;
@property(retain, nonatomic) NSString *couponFenText; // @synthesize couponFenText=_couponFenText;
@property(nonatomic) long long couponFen; // @synthesize couponFen=_couponFen;
@property(nonatomic) long long realPayFen; // @synthesize realPayFen=_realPayFen;
- (void).cxx_destruct;

@end

