//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class O2OSearchBar, O2OSearchDimmingView, O2OSearchMiddleDisplayVC, UIView;

@interface O2OSearchMiddleDisplayVCModel : NSObject
{
    O2OSearchDimmingView *_contentOfDimmingView;
    O2OSearchMiddleDisplayVC *_ownerVC;
    O2OSearchBar *_searchBar;
    UIView *_dimmingView;
}

@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(readonly, nonatomic) O2OSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak O2OSearchMiddleDisplayVC *ownerVC; // @synthesize ownerVC=_ownerVC;
- (void).cxx_destruct;
@property(readonly, nonatomic) O2OSearchDimmingView *contentOfDimmingView; // @synthesize contentOfDimmingView=_contentOfDimmingView;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;

@end

