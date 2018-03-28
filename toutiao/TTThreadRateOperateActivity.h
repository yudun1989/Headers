//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTActivityProtocol-Protocol.h"

@class NSString, UIViewController;
@protocol TTActivityContentItemProtocol;

@interface TTThreadRateOperateActivity : NSObject <TTActivityProtocol>
{
    id <TTActivityContentItemProtocol> _contentItem;
}

@property(retain, nonatomic) id <TTActivityContentItemProtocol> contentItem; // @synthesize contentItem=_contentItem;
- (void).cxx_destruct;
- (id)shareLabel;
- (id)contentTitle;
- (id)activityImageName;
- (void)performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (id)activityType;
- (id)contentItemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *presentingViewController;
@property(readonly) Class superclass;

@end

