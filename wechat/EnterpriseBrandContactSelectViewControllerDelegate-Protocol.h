//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, EnterpriseBrandContactSelectViewController;

@protocol EnterpriseBrandContactSelectViewControllerDelegate <NSObject>

@optional
- (void)onEnterpriseCancelSelectBrand:(EnterpriseBrandContactSelectViewController *)arg1;
- (void)onEnterpriseSelectBrandContact:(CContact *)arg1 viewController:(EnterpriseBrandContactSelectViewController *)arg2;
@end

