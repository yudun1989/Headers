//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTActivityProtocol-Protocol.h"
#import "TTAliShareDelegate-Protocol.h"

@class NSString, TTZhiFuBaoContentItem, UIViewController;

@interface TTZhiFuBaoActivity : NSObject <TTAliShareDelegate, TTActivityProtocol>
{
    TTZhiFuBaoContentItem *_contentItem;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TTZhiFuBaoContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (void).cxx_destruct;
- (void)aliShare:(id)arg1 sharedWithError:(id)arg2 customCallbackUserInfo:(id)arg3;
- (void)performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)shareWithContentItem:(id)arg1 presentingViewController:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)shareLabel;
- (id)activityImageName;
- (id)contentTitle;
- (id)activityType;
- (id)contentItemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *presentingViewController;
@property(readonly) Class superclass;

@end

