//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIScrollView, UIView;

@interface TBMCScrollViewLayout : NSObject
{
    _Bool _isAppearing;
    _Bool _isAppeared;
    double _startPointY;
    double _contentHeight;
    UIView *_contentView;
    id _component;
    UIScrollView *_contentScrollView;
}

@property(nonatomic) __weak UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak id component; // @synthesize component=_component;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isAppeared; // @synthesize isAppeared=_isAppeared;
@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double startPointY; // @synthesize startPointY=_startPointY;
- (void).cxx_destruct;
- (void)removeContentView;

@end

