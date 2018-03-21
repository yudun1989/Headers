//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "GrowingNode-Protocol.h"

@class NSString;

@interface UIWindow (Growing_xPath) <GrowingNode>
- (id)growingNodeWindow;
- (id)growingNodeDataDict;
- (id)growingViewContent;
- (id)growingNodeName;
- (_Bool)growingViewUserInteraction;
- (_Bool)growingNodeDonotCircle;
- (_Bool)growingNodeDonotTrack;
- (_Bool)growingWindowNodeIsInvisiable;
- (void)growingNodeOutChilds:(id)arg1 outPaths:(id)arg2 filterChildNode:(id)arg3;
- (void)growingNodeOutContainerChilds:(id)arg1 outPaths:(id)arg2 filterChildNode:(id)arg3;
- (struct CGRect)growingNodeFrame;
- (void)growingNodeHighLight:(_Bool)arg1 withBorderColor:(id)arg2 andBackgroundColor:(id)arg3;
- (id)growingNodeParent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

