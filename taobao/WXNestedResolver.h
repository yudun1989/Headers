//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXNestedScrollHandlerProtocol-Protocol.h"

@class NSHashTable, NSString, UIScrollView, WXComponent, WXNestedParentComponent;
@protocol WXNestedScrollProtocol;

@interface WXNestedResolver : NSObject <WXNestedScrollHandlerProtocol>
{
    struct CGRect _innerRect;
    _Bool _hardCodeArea;
    WXNestedParentComponent<WXNestedScrollProtocol> *_scrollParent;
    WXComponent<WXNestedScrollProtocol> *_scrollChild;
    UIScrollView *_outerScroller;
    UIScrollView *_innerScroller;
    UIScrollView *_controllingScroller;
    WXComponent *_slider;
    NSHashTable *_childList;
    double _offsetY;
    double _actualOffsetY;
    unsigned long long _direction;
}

@property(nonatomic) _Bool hardCodeArea; // @synthesize hardCodeArea=_hardCodeArea;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) double actualOffsetY; // @synthesize actualOffsetY=_actualOffsetY;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) NSHashTable *childList; // @synthesize childList=_childList;
@property(retain, nonatomic) WXComponent *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak UIScrollView *controllingScroller; // @synthesize controllingScroller=_controllingScroller;
@property(nonatomic) __weak UIScrollView *innerScroller; // @synthesize innerScroller=_innerScroller;
@property(nonatomic) __weak UIScrollView *outerScroller; // @synthesize outerScroller=_outerScroller;
@property(nonatomic) __weak WXComponent<WXNestedScrollProtocol> *scrollChild; // @synthesize scrollChild=_scrollChild;
@property(nonatomic) __weak WXNestedParentComponent<WXNestedScrollProtocol> *scrollParent; // @synthesize scrollParent=_scrollParent;
- (void).cxx_destruct;
- (id)scrollHeader;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (CDStruct_31142d93)getScrollResults;
- (unsigned long long)scrollDirection;
- (void)snapHeader;
- (void)scrollDidEnd:(id)arg1;
- (_Bool)shouldScrollActuallyTriggered:(id)arg1;
- (void)scrollViewWillBeginDrag:(id)arg1;
- (id)findScrollViewInView:(id)arg1 depth:(long long)arg2;
- (void)resetSlider:(id)arg1;
- (void)reset;
- (void)setup;
- (void)findScrollChild:(id)arg1;
- (void)scrollsToTop:(_Bool)arg1;
- (void)updateWithScrollChild:(id)arg1 slider:(id)arg2;
- (void)dealloc;
- (id)initWithScrollParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

