//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "XSearchStatUT-Protocol.h"

@class NSString;

@interface TBXSearchUTHelper : NSObject <XSearchStatUT>
{
}

+ (id)getPageName:(id)arg1;
+ (void)pageDisAppear:(id)arg1;
+ (void)pageAppear:(id)arg1 withPageName:(id)arg2;
+ (void)updateNextPageProperties:(id)arg1;
+ (void)updateViewControllerProperties:(id)arg1 properties:(id)arg2;
+ (void)updatePageName:(id)arg1 pageName:(id)arg2;
+ (void)commitOnPage:(id)arg1 eventId:(int)arg2 arg1:(id)arg3;
+ (void)et_updateViewControllerProperties:(id)arg1 properties:(id)arg2;
+ (void)updatePageName:(id)arg1 newPageName:(id)arg2;
+ (void)commitEvent:(id)arg1 dict:(id)arg2;
+ (void)commitOnPage:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
+ (void)reportUsabilityEventOnPage:(id)arg1 error:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
+ (void)ctrlClicked:(id)arg1 onPage:(id)arg2 args:(id)arg3;
+ (void)ctrlClicked:(id)arg1 args:(id)arg2;
+ (void)ctrlClicked:(id)arg1 onPage:(id)arg2;
+ (void)ctrlClicked:(id)arg1;
+ (id)getRnDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

