//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSSet, VZFluxStore;
@protocol VZFNodeHostingView;

@interface VZFNodeHostingView : UIView
{
    Class _nodeProvider;
    unsigned long long _rangeType;
    NSSet *_mountedNodes;
    struct NodeLayout _mountedLayout;
    id _model;
    id _context;
    _Bool _isUpdating;
    _Bool _shouldResize;
    id <VZFNodeHostingView> _delegate;
    VZFluxStore *_store;
}

@property(nonatomic) _Bool shouldResize; // @synthesize shouldResize=_shouldResize;
@property(nonatomic) __weak VZFluxStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <VZFNodeHostingView> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize)containerSizeForHostingView:(const struct NodeLayout *)arg1;
- (struct CGSize)newSize;
- (void)_updateSynchronously;
- (void)reset;
- (void)updateState;
- (void)update:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithNodeProvider:(Class)arg1 RangeType:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
