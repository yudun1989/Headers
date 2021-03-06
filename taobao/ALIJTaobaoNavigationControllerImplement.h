//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ALIJNavigationControllerProtocol-Protocol.h"

@class NSString;

@interface ALIJTaobaoNavigationControllerImplement : NSObject <ALIJNavigationControllerProtocol>
{
}

- (void)removeChildViewController:(id)arg1 forController:(id)arg2;
- (void)addChildViewController:(id)arg1 forController:(id)arg2;
- (void)setNavigationBarHidden:(_Bool)arg1 forController:(id)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1 forController:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 forController:(id)arg3;
- (void)closeTmallGlobalNavigationView:(_Bool)arg1 forController:(id)arg2;
- (void)completeTmallGlobalNavigationForController:(id)arg1;
- (void)setupTmallGlobalNavigation:(id)arg1 forController:(id)arg2;
- (void)tmallClearRightItemForController:(id)arg1;
- (void)setRightItem:(id)arg1 forController:(id)arg2;
- (void)setLeftItem:(id)arg1 forController:(id)arg2;
- (void)setH5TitleView:(id)arg1 forController:(id)arg2;
- (void)setTitleView:(id)arg1 forController:(id)arg2;
- (void)setTitle:(id)arg1 forController:(id)arg2;
- (void)setBottomLineOfNaviBarHidden:(_Bool)arg1 forController:(id)arg2;
- (id)naviBarForController:(id)arg1;
- (id)viewForController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

