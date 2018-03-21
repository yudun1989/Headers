//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APSKShareBasePlugin.h"

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class DTRpcAsyncCaller, MFMessageComposeViewController, NSString, UIViewController;

@interface APSKPeopleMessagePlugin : APSKShareBasePlugin <MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate>
{
    UIViewController *_rootController;
    MFMessageComposeViewController *_messageComposeViewController;
    NSString *_mobileNum;
    NSString *_extInfo;
    CDUnknownBlockType _completionBlock;
    DTRpcAsyncCaller *_shareRpcCaller;
}

@property(retain, nonatomic) DTRpcAsyncCaller *shareRpcCaller; // @synthesize shareRpcCaller=_shareRpcCaller;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *mobileNum; // @synthesize mobileNum=_mobileNum;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)shareMessageFinish;
- (void)generateShortLinkWithMobileNum:(id)arg1 userId:(id)arg2 bizMemo:(id)arg3 whenDone:(CDUnknownBlockType)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)sendMessageWithBody:(id)arg1 recipient:(id)arg2;
- (void)p2pSendText:(id)arg1 title:(id)arg2 bizMemo:(id)arg3 whenDone:(CDUnknownBlockType)arg4;
- (void)shareContent:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareMessage:(id)arg1 toChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

