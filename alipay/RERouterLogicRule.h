//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RERouterRule.h"

#import "BEEWithSubTitleActionWindowDelegate-Protocol.h"

@class NSDictionary, NSString, REActionSheetInterceptor;

@interface RERouterLogicRule : RERouterRule <BEEWithSubTitleActionWindowDelegate>
{
    NSDictionary *_launchOptions;
    REActionSheetInterceptor *_actionSheetInterceptor;
}

@property(retain, nonatomic) REActionSheetInterceptor *actionSheetInterceptor; // @synthesize actionSheetInterceptor=_actionSheetInterceptor;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (void)exit;
- (_Bool)executeWithApp:(id)arg1 launchOptions:(id)arg2 isResume:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

