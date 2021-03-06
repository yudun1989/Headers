//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMessageCenterAtViewController.h"

@class NSMutableArray, NSString, UIViewController, WBMessageCenterEngine;

@interface MMMessageAggregationViewController : WBMessageCenterAtViewController
{
    _Bool isFirstReload;
    UIViewController *rootViewController;
    NSString *_aggr_id;
    NSString *_users_count;
    WBMessageCenterEngine *_messageCenterEngine;
    NSMutableArray *_messages;
}

@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) WBMessageCenterEngine *messageCenterEngine; // @synthesize messageCenterEngine=_messageCenterEngine;
@property(retain, nonatomic) NSString *users_count; // @synthesize users_count=_users_count;
@property(retain, nonatomic) NSString *aggr_id; // @synthesize aggr_id=_aggr_id;
- (void).cxx_destruct;
- (void)didPressUserScreenNameLabel:(id)arg1 timelineItem:(id)arg2;
- (id)analysisParameters;
- (id)defaultParametersWithFlow:(id)arg1;
- (void)blockWeibo_out_shield_center_enable:(id)arg1;
- (void)blockUser_out_shield_center_enable:(id)arg1;
- (void)removeFlowItem:(id)arg1;
- (void)blockUser:(id)arg1;
- (void)blockUserOperate:(id)arg1;
- (void)blockWeibo:(id)arg1;
- (void)blockWeiboOperate:(id)arg1;
- (_Bool)didPressResponder:(id)arg1 ofType:(unsigned long long)arg2 andCommonID:(id)arg3 inCell:(id)arg4 userInfo:(id)arg5;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)loadDataFromCache;
- (void)loadMoreData;
- (void)reloadData;
- (id)pushBlockTypeArr;
- (id)initWithRootViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (void)configDefaultFeatureCode;
- (id)uicodeInit;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

// Remaining properties
@property(nonatomic) _Bool isDelayShowNotificationSettingTipFlag;

@end

