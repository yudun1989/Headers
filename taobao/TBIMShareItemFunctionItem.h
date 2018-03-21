//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMInputFunctionItem.h"

#import "ShareItemDelegate-Protocol.h"
#import "TBIMInputFunctionItem-Protocol.h"

@class NSString, UIViewController;
@protocol TBIMMessageServiceAdapter;

@interface TBIMShareItemFunctionItem : TBIMInputFunctionItem <ShareItemDelegate, TBIMInputFunctionItem>
{
}

- (void)sendShareItem:(id)arg1;
- (void)clickItemAction;
- (id)initWithSessionId:(id)arg1 serviceType:(int)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *clickSPM;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) id defaultFunctionItemContext;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *iconFontName;
@property(nonatomic) _Bool isNew;
@property(nonatomic) __weak id <TBIMMessageServiceAdapter> messageSvr;
@property(copy, nonatomic) NSString *moduleSPM;
@property(copy, nonatomic) NSString *pageName;
@property(nonatomic) __weak UIViewController *responseVC;
@property(nonatomic) int serviceType;
@property(copy, nonatomic) NSString *sessionId;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

