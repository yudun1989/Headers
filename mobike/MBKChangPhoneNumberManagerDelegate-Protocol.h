//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MBKChangPhoneNumberManager;

@protocol MBKChangPhoneNumberManagerDelegate <NSObject>
- (void)popToRootAction:(MBKChangPhoneNumberManager *)arg1;
- (void)changeAction:(MBKChangPhoneNumberManager *)arg1;
- (void)verifyAction:(MBKChangPhoneNumberManager *)arg1;
- (void)sureButtonAction:(MBKChangPhoneNumberManager *)arg1;
- (void)countryCodeButtonAction:(MBKChangPhoneNumberManager *)arg1;
- (void)authenticationAction:(MBKChangPhoneNumberManager *)arg1;
@end

