//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/UINavigationControllerDelegate-Protocol.h>

@class NSString;
@protocol NavigationTranstionDestination, NavigationTranstionSource;

@interface QQReadInJoyVideoFullScreenNavigationTransition : NSObject <UINavigationControllerDelegate>
{
    id <NavigationTranstionSource> _transitionSouce;
    id <NavigationTranstionDestination> _transitionDestination;
}

@property(nonatomic) __weak id <NavigationTranstionDestination> transitionDestination; // @synthesize transitionDestination=_transitionDestination;
@property(nonatomic) __weak id <NavigationTranstionSource> transitionSouce; // @synthesize transitionSouce=_transitionSouce;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

