//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MOBILEPRODExpenditure : NSObject
{
    NSString *_paymentId;
    NSString *_amount;
    NSString *_memo;
    NSDate *_date;
}

@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSString *paymentId; // @synthesize paymentId=_paymentId;
- (void).cxx_destruct;

@end

