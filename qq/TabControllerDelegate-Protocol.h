//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSDictionary, NSValue, RDVTabBarController, TabDataItem;

@protocol TabControllerDelegate <NSObject>

@optional
- (void)TabController:(RDVTabBarController *)arg1 cleanup:(id)arg2;
- (void)TabController:(RDVTabBarController *)arg1 TipsShow:(NSValue *)arg2 Data:(NSDictionary *)arg3;
- (void)TabController:(RDVTabBarController *)arg1 menuLongPress:(id)arg2;
- (void)TabController:(RDVTabBarController *)arg1 menuAction:(id)arg2;
- (void)TabController:(RDVTabBarController *)arg1 didUnSelect:(TabDataItem *)arg2 to:(TabDataItem *)arg3;
- (void)TabController:(RDVTabBarController *)arg1 didSelect:(TabDataItem *)arg2 from:(TabDataItem *)arg3;
@end

