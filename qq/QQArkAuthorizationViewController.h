//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSetupRelatedViewController.h>

@class NSArray;

@interface QQArkAuthorizationViewController : QQSetupRelatedViewController
{
    NSArray *_appIDList;
}

@property(retain, nonatomic) NSArray *appIDList; // @synthesize appIDList=_appIDList;
- (void)showAuthorizationDaZhongDianPing:(id)arg1 appID:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)restoreDataAfterViewDidLoad;
- (void)viewDidLoad;
- (id)init;

@end

