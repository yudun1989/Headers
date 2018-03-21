//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol TBTowerViewDataSource, TBTowerViewDelegate;

@interface TBTowerView : UIView
{
    double _towerWidth;
    double _floorPadding;
    id <TBTowerViewDataSource> _dataSource;
    id <TBTowerViewDelegate> _delegate;
    long long _memeda;
}

+ (double)sizeForTowerWithRowNumber:(CDUnknownBlockType)arg1 cellHeight:(CDUnknownBlockType)arg2 towerWidth:(double)arg3;
@property(nonatomic) long long memeda; // @synthesize memeda=_memeda;
@property(nonatomic) __weak id <TBTowerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TBTowerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double floorPadding; // @synthesize floorPadding=_floorPadding;
@property(nonatomic) double towerWidth; // @synthesize towerWidth=_towerWidth;
- (void).cxx_destruct;
- (void)reloadData;
- (void)makeTower;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

