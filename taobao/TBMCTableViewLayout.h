//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, UIScrollView, UIView;

@interface TBMCTableViewLayout : NSObject
{
    _Bool _isAppeared;
    double _parentStartPointY;
    double _startPointY;
    double _endPointY;
    double _contentHeight;
    NSIndexPath *_indexPath;
    UIView *_contentView;
    id _component;
    UIScrollView *_contentScrollView;
}

@property(nonatomic) __weak UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak id component; // @synthesize component=_component;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isAppeared; // @synthesize isAppeared=_isAppeared;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double endPointY; // @synthesize endPointY=_endPointY;
@property(nonatomic) double startPointY; // @synthesize startPointY=_startPointY;
@property(nonatomic) double parentStartPointY; // @synthesize parentStartPointY=_parentStartPointY;
- (void).cxx_destruct;
- (void)removeContentView;
- (id)init;

@end

