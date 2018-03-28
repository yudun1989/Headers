//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIImageView, UIScrollView, UIView;

@interface TSVSeondUseSwipeAnimation : NSObject
{
    UIScrollView *_scrollView;
    UIView *_arrowParentView;
    UIImageView *_arrowImageView;
    long long _animationInteration;
    struct CGRect _originalBounds;
}

+ (id)sharedAnimation;
@property(nonatomic) long long animationInteration; // @synthesize animationInteration=_animationInteration;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) struct CGRect originalBounds; // @synthesize originalBounds=_originalBounds;
@property(retain, nonatomic) UIView *arrowParentView; // @synthesize arrowParentView=_arrowParentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)_startAnimaiton;
- (void)startAnimation;

@end

