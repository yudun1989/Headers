//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKAppInviteContent, UIViewController;
@protocol FBSDKAppInviteDialogDelegate;

@interface FBSDKAppInviteDialog : NSObject
{
    UIViewController *_fromViewController;
    id <FBSDKAppInviteDialogDelegate> _delegate;
    FBSDKAppInviteContent *_content;
}

+ (id)showFromViewController:(id)arg1 withContent:(id)arg2 delegate:(id)arg3;
+ (id)showWithContent:(id)arg1 delegate:(id)arg2;
+ (void)initialize;
@property(copy, nonatomic) FBSDKAppInviteContent *content; // @synthesize content=_content;
@property(nonatomic) __weak id <FBSDKAppInviteDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void).cxx_destruct;
- (void)_logDialogShow;
- (void)_invokeDelegateDidFailWithError:(id)arg1;
- (void)_invokeDelegateDidCompleteWithResults:(id)arg1;
- (void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2;
- (_Bool)_canShowNative;
- (_Bool)validateWithError:(id *)arg1;
- (_Bool)show;
- (_Bool)canShow;

@end

