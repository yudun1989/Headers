//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBizNameSettingBaseViewController.h"

@class APGroupInfo, DTRpcAsyncCaller, NSString;

@interface SCSetGroupNameController : SPBizNameSettingBaseViewController
{
    APGroupInfo *_groupInfo;
    DTRpcAsyncCaller *_rpcCaller;
    NSString *_bizName;
}

@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
@property(retain, nonatomic) APGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (void)baseController:(id)arg1 didSetNewBizName:(id)arg2;
- (id)baseControllerConfigDisplayPattern;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithDefaultBizName:(id)arg1;
- (void)dealloc;

@end

