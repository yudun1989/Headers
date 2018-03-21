//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface QQMaskView : UIView
{
    NSArray *_highlightRegions;
    CDUnknownBlockType _highlightRegionTapedBlock;
    CDUnknownBlockType _hideCompletionBlock;
    CDUnknownBlockType _showCompletionBlock;
    _Bool showing;
    _Bool hideWhenTaped;
    _Bool hideWhenTapedNeedAnimation;
    double highlightRegionCornerRadius;
}

@property(nonatomic) double highlightRegionCornerRadius; // @synthesize highlightRegionCornerRadius;
@property(nonatomic) _Bool hideWhenTapedNeedAnimation; // @synthesize hideWhenTapedNeedAnimation;
@property(nonatomic) _Bool hideWhenTaped; // @synthesize hideWhenTaped;
@property(nonatomic) _Bool showing; // @synthesize showing;
- (void)maskViewTaped:(id)arg1;
- (void)setShowCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setHideCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setHighlightRegionTapedBlock:(CDUnknownBlockType)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlightRegions:(id)arg1;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showInView:(id)arg1 atIndex:(int)arg2 animated:(_Bool)arg3;
- (_Bool)isSupportRightDragToGoBack;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

