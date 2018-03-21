//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray;
@protocol QQ3DScrollViewDataSource;

@interface QQ3DScrollView : UIScrollView
{
    unsigned long long _effect;
    double _angleRatio;
    double _rotationX;
    double _rotationY;
    double _rotationZ;
    double _translateX;
    double _translateY;
    id <QQ3DScrollViewDataSource> _dataSource;
    int _xo;
    NSMutableArray *_subViews;
    unsigned long long _numberOfViews;
}

- (unsigned long long)currentPage;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long effect; // @dynamic effect;
- (void)updateViews;
- (void)reloadData;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) double angleRatio; // @dynamic angleRatio;
@property(nonatomic) id <QQ3DScrollViewDataSource> dataSource; // @dynamic dataSource;
@property(nonatomic) double rotationX; // @dynamic rotationX;
@property(nonatomic) double rotationY; // @dynamic rotationY;
@property(nonatomic) double rotationZ; // @dynamic rotationZ;
@property(nonatomic) double translateX; // @dynamic translateX;
@property(nonatomic) double translateY; // @dynamic translateY;

@end

