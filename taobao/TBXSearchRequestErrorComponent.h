//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchMainViewComponent.h"

#import "TBXSearchErrorViewDelegate-Protocol.h"

@class NSString, TBXSearchErrorView;

@interface TBXSearchRequestErrorComponent : XSearchMainViewComponent <TBXSearchErrorViewDelegate>
{
    TBXSearchErrorView *_errorView;
}

@property(retain, nonatomic) TBXSearchErrorView *errorView; // @synthesize errorView=_errorView;
- (void).cxx_destruct;
- (void)refreshAgain;
- (void)loadFailed:(id)arg1;
- (void)dataLoaded;
- (id)initWithFrame:(struct CGRect)arg1 Service:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

