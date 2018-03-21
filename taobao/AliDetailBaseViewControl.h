//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBMagicCubeLifeCycleProtocol-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface AliDetailBaseViewControl : NSObject <TBMagicCubeLifeCycleProtocol>
{
    NSDictionary *_childViewControlMaps;
    AliDetailBaseViewControl *_parentViewControl;
    NSMutableArray *_childViewControls;
}

@property(retain, nonatomic) NSMutableArray *childViewControls; // @synthesize childViewControls=_childViewControls;
@property(nonatomic) __weak AliDetailBaseViewControl *parentViewControl; // @synthesize parentViewControl=_parentViewControl;
@property(retain, nonatomic) NSDictionary *childViewControlMaps; // @synthesize childViewControlMaps=_childViewControlMaps;
- (void).cxx_destruct;
- (void)homeScrollViewOffsetChanged:(struct CGPoint)arg1;
- (void)parseWithDetailModel:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload:(_Bool)arg1;
- (void)viewDidLoad:(_Bool)arg1;
- (id)getComponentView;
- (void)bindData:(id)arg1;
- (void)clearChildViewControls;
- (void)removeFromParentViewControl;
- (void)removeChildViewControl:(id)arg1;
- (void)addChildViewControl:(id)arg1;
- (void)refreshStateChanged:(int)arg1 data:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

