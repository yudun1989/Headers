//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface EWGroupView : UIView
{
    _Bool _isTile;
    unsigned long long _numberOfColumns;
    unsigned long long _numberOfRows;
    NSArray *_viewModelList;
    NSString *_viewClass;
    double _spacing;
    struct CGSize _viewSize;
}

@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(copy, nonatomic) NSString *viewClass; // @synthesize viewClass=_viewClass;
@property(retain, nonatomic) NSArray *viewModelList; // @synthesize viewModelList=_viewModelList;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) _Bool isTile; // @synthesize isTile=_isTile;
- (void).cxx_destruct;
- (void)createViews;
- (id)initWithFrame:(struct CGRect)arg1 viewClass:(id)arg2 viewSize:(struct CGSize)arg3 spacing:(double)arg4 viewModelList:(id)arg5;

@end

