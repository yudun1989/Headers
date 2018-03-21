//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBMirrorBusinessAdapterDelegate-Protocol.h"

@class MirrorBusinessShoppingListController, NSString, TBMirrorBusinessAdapter;

@interface TBMirrorShoppingListController : TBViewController <TBMirrorBusinessAdapterDelegate>
{
    _Bool _previousVCIsMirrorVC;
    MirrorBusinessShoppingListController *_contentController;
    TBMirrorBusinessAdapter *_adapter;
}

@property(nonatomic) _Bool previousVCIsMirrorVC; // @synthesize previousVCIsMirrorVC=_previousVCIsMirrorVC;
@property(retain, nonatomic) TBMirrorBusinessAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) MirrorBusinessShoppingListController *contentController; // @synthesize contentController=_contentController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)nextIsMirrorVC;
- (_Bool)previousIsMirrorVC;
- (void)onBack;
- (void)onAddToCart;
- (void)onGotoPage:(id)arg1;
- (void)logLeavePage;
- (void)logEnterPage;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

